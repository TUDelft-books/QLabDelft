
import dash
from dash import dcc, html, Input, Output, State
import pandas as pd
import numpy as np
from scipy.optimize import curve_fit
import plotly.graph_objs as go
import base64
import io

app = dash.Dash(__name__)

app.layout = html.Div([
    html.H2("Upload een CSV-bestand met pulsdata"),
    dcc.Upload(
        id='upload-data',
        children=html.Button('Upload CSV'),
        multiple=False
    ),
    html.Div(id='file-name'),
    html.Label("Binsize (s):"),
    dcc.Slider(id='binsize-slider', min=0.1, max=10, step=0.1, value=2.0,
               marks={i: str(i) for i in range(1, 11)}),
    html.Div(id='binsize-value'),
    dcc.Graph(id='histogram-plot', style={'height': '1200px'})
])

def parse_contents(contents):
    content_type, content_string = contents.split(',')
    decoded = base64.b64decode(content_string)
    df = pd.read_csv(io.StringIO(decoded.decode('utf-8')))
    return df

@app.callback(
    Output('file-name', 'children'),
    Output('histogram-plot', 'figure'),
    Output('binsize-value', 'children'),
    Input('upload-data', 'contents'),
    Input('binsize-slider', 'value'),
    State('upload-data', 'filename')
)
def update_output(contents, binsize, filename):
    if contents is None:
        return "Geen bestand geüpload.", go.Figure(), f"Binsize: {binsize:.2f} s"

    df = parse_contents(contents)
    if 'Time_ns' not in df.columns:
        return "CSV moet een kolom 'Time_ns' bevatten.", go.Figure(), f"Binsize: {binsize:.2f} s"

    df['Time_ns'] = pd.to_numeric(df['Time_ns'], errors='coerce')
    df = df.dropna()
    df['Time_s'] = df['Time_ns'] * 1e-9

    min_time = df['Time_s'].min()
    max_time = df['Time_s'].max()
    bins = np.arange(min_time, max_time + binsize, binsize)
    counts, bin_edges = np.histogram(df['Time_s'], bins=bins)
    bin_centers = (bin_edges[:-1] + bin_edges[1:]) / 2

    trace_data = go.Bar(x=bin_centers, y=counts, name='Data')

    try:
        valid_indices = counts > 0
        t_fit = bin_centers[valid_indices]
        N_fit = counts[valid_indices]
        Aguess = counts[0]
        val, _ = curve_fit(lambda t, tau, A, C: C * np.exp(-t / tau) + A, t_fit, N_fit, p0=[20, Aguess, 50000])
        tau, A, C = val
        t_half = np.log(2) * tau
        fit_y = C * np.exp(-bin_centers / tau) + A
        trace_fit = go.Scatter(x=bin_centers, y=fit_y, mode='lines', name=f'Fit: t_half={t_half:.2f} s')
        fig = go.Figure(data=[trace_data, trace_fit])
    except Exception:
        fig = go.Figure(data=[trace_data])

    fig.update_layout(title=f'Histogram van pulsen (binsize = {binsize:.2f} s)',
                      xaxis_title='Tijd (seconden)',
                      yaxis_title='Aantal pulsen',
                      height=1200)

    return f"Bestand: {filename}", fig, f"Binsize: {binsize:.2f} s"

if __name__ == '__main__':
    app.run(debug=True)
