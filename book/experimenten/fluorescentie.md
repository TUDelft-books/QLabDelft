# Fluorescentie
Deze practicumhandleiding is _work in progress_

## Inleiding
In dit experiment wordt onderzocht hoe fluorescentie werkt en de halfwaardetijd van diverse fluorescerende stoffen bepaald. Eigenlijk gaat het hier om **fosforescentie**, omdat het effect langer duurt. 

## Doel

## Theorie

## Materiaal
* 3 voedingen
* PMT met ingebouwde HV voeding en signaal versterker
* oscilloscoop
* Time-tagger met software
* Fluorescentie samples
* UV lamp
* Verduisterende behuizing

## Opstelling
```{figure} ./media/fluorescentie/schema-meetopstelling.jpg
    :name: meetopstelling
    :align: center 
``` 

```{figure} ./media/fluorescentie/voeding.jpg
    :name: PSU
    :align: center 
``` 
```{figure} ./media/fluorescentie/scoop.jpg
    :name: scoop
    :align: center 
``` 
```{figure} ./media/fluorescentie/inside.jpg
    :name: inside
    :align: center 
``` 


## Uitvoering
1) Zet alles aan.
2) Leg een (kort) belicht sample op de sample tafel voor de PMT.
3) Sluit de deur goed.
4) Check de scoop of er data binnenkomt.
5) Nu gaan we de data binnen halen: Type in de terminal: 
```bash
sudo pulse_logger 1
```
(de pulsen worden 1 minuut lang opgeslagen - kies 4 voor 4 minuten lang).
Er schiet data over het scherm. 
6) De data wordt opgeslagen in de csv file: pulse_times.csv. Kopieer deze zelf naar een bestand met een passende naam: 
```bash
cp pulse_times.csv ster_1_min_belicht_4_min_gemeten.csv
```
7)  Nu gaan we de data verwerken. Type in de terminal
```bash
python pulse_dashboard.py 
```
8) Klik op de URL die daar verschijnt. Er wordt een webpagina geopend (heel even geduld). 
9) Upload hierin de .csv .
10) Na even wachten verschijnt het histogram en de curve-fit functie. 
11) De breedte van de 'bins' ( de verticale balken) kun je instellen.= met de schuifbalk. Probeer maar eens.
12) Rechts kan je de halfwaarde tijd aflezen zoals deze berekend is uit de curve-fit.

```{figure} ./media/fluorescentie/histogram.png
    :name: histogram
    :align: center 
``` 

### Verder uitvoeren
13) Herhaal de meting en vergelijk de resultaten.
14) Neem een andere hoeveelheid van dezelfde stof/ het zelfde materiaal en herhaal de meting nog 2x. 
15) Neem een andere stof en meet deze ook 2x.

## Resultaten
* Noteer je resultaten.

## Conclusie en discussie
* Wat kun je zeggen over een andere hoeveelheid van dezelfde stof qua halfwaardetijd.
* Wat kun je zeggen over de halfwaardetijd van verschillende stoffen?
* ??