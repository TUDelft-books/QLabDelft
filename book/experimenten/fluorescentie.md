# Fluorescentie

## Inleiding
In dit experiment wordt onderzocht hoe fluorescentie werkt en de halfwaardetijd van diverse fluorescerende stoffen bepaald. Eigenlijk gaat het hier om **fosforescentie**, omdat het effect langer duurt. 

## Doel
Het bepalen van de halfwaardetijd van diverse fosforescerende stoffen en materialen. 

## Theorie
De halfwaardetijd van een fosforescerend materiaal wordt als volgt bepaald: 
Elk sample geeft, mits geactiveerd, licht af. De individuele fotonen waaruit dit ligt bestaat kunnen we meten. De fotonen die gedetecteerd worden door een Photomultiplier tube (PMT), een hele gevoelige fotonen sensor, worden elk voorzien van een tijdstempel door de Time-tagger. Dus aan elk gemeten foton wordt een tijdstempel gehangen. Door de nu het aantal fotonen in korte periodes op te tellen krijg je een *bin*, een kolom met alle gemeten fotonen in dat tijdbestek. Alle *bins* naast elkaar geven een histogram, een grafiek van de afname het aantal gemeten fotonen, weergegeven in bins. Uit de functiefit hiervan kan de halfwaardetijd van het sample worden bepaald.

Een energiediagram voor fosforescentie, een zogenaamd Jablonski-diagram (zie hieronder), toont dat een molecuul licht absorbeert en naar een hoogenergetische singlettoestand $S_1$ springt. Na een proces dat intersysteemcrossing (ISC) heet, verandert het elektron van spin (spinflip) en belandt het in een lagere-energie triplettoestand $T_1$. Dit spin‑up‑elektron kan niet terugvallen naar de grondtoestand, omdat dat zou resulteren in twee spin‑up‑elektronen in de grondtoestand, wat in strijd is met het Pauli‑uitsluitingsprincipe. Dit is dus een verboden overgang. Het elektron moet daarom wachten tot de spin veranderd naar spin‑down. Dit duurt lang (op atomaire tijdschalen), waardoor de toestand meta-stabiel wordt genoemd. Vervolgens kan het elektron wel terugvallen in de spin‑down‑plaats van het grondniveau, waar het weer gepaard is met het spin‑up‑elektron in de grondtoestand, hierbij komt een foton vrij. Dit proces kan van milliseconden tot seconden duren en noemen we fosforescentie.

```{figure} ./media/fluorescentie/Jablonski.png
    :width: 300
    :name: Jablonski
    :align: center 
By Curtis Mobley, from: https://www.oceanopticsbook.info/view/scattering/level-2/theory-fluorescence-and-phosphorescence
``` 


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
    :width: 250
    :name: PSU
    :align: center 
``` 
```{figure} ./media/fluorescentie/scoop.jpg
    :width: 250
    :name: scoop
    :align: center 
``` 
```{figure} ./media/fluorescentie/inside.jpg
    :width: 250
    :name: inside
    :align: center 
``` 


## Uitvoering
1) Controleer of alles aanstaat:
    a) Oscilloscoop
    b) Voeding(en) versnelspanning PMT -10V en +10V (staat reeds ingesteld).
    c) Voeding stuurspanning PMT circa 2V (staat reeds ingesteld), (onder circa 1V en boven 2,5V doet 'ie het niet).
    d) Relaissysteem voor het reed-deurcontact.
    e) Computer om de data te ontvangen.
2) Leg een (kort) belicht sample op de sample tafel voor de PMT (gebruik het kleine stervormige, fosforescentie sample als eerste sample)
3) Sluit de deur goed.
4) Check de scoop of er data binnenkomt.
5) Nu gaan we de data binnen halen: Type in de **terminal** en druk op enter: 
```bash
sudo pulse_logger 1
```
(de pulsen worden 1 minuut lang opgeslagen - kies 4 voor 4 minuten lang).
Er schiet data over het scherm. 
6) De data wordt opgeslagen in de csv file: pulse_times.csv. **Kopieer** deze zelf naar een bestand met een passende naam en druk op enter: 
```bash
cp pulse_times.csv ster_1_min_belicht_4_min_gemeten.csv
```
7)  Nu gaan we de data verwerken. Type in de terminal en druk op enter:
```bash
python pulse_dashboard.py 
```
8) Klik op de URL die daar verschijnt. Er wordt een webpagina geopend (heel even geduld). 
9) Upload hierin de .csv .
10) Na even wachten verschijnt het histogram en de curve-fit functie. 
11) De breedte van de 'bins' ( de verticale balken) kun je instellen met de schuifbalk. Probeer maar eens.
12) Rechts kan je de halfwaarde tijd aflezen zoals deze berekend is uit de curve-fit. Hieronder een voorbeeld.

```{figure} ./media/fluorescentie/histogram.png
    :name: histogram
    :align: center 
``` 

### Verder uitvoeren
13) Herhaal de meting nogmaals om de meting te controleren.
14) Neem een andere hoeveelheid van dezelfde stof/ het zelfde materiaal: Gebruik het grote stervormige, fosforescentie sample als tweede sample. Herhaal deze meting ook.
15) Neem een andere stof in twee hoeveelheden en meet deze ook elk 2x. (Het gel sample).
16) De halfwaardetijd van fosforescerende stoffen is temperatuur afhankelijk. Onderzoek of de halfwaardetijd veranderd van het kleine sterretje als je de ster eerst warm maakt.

## Resultaten
* Noteer telkens je resultaten.

## Conclusie en discussie
* Wat kun je zeggen over een andere hoeveelheid van dezelfde stof qua halfwaardetijd.
* Wat kun je zeggen over de halfwaardetijd van verschillende stoffen?
* Wat kun je zeggen over de temperatuurafhankelijkheid? En als je dit vergelijkt met radioactieve stoffen?? Zijn deze temperatuurafhankelijk? Waarom?

## Software Downloads
{Download}`software<./media/fluorescentie/pulse_dashboard.py>`
{Download}`software<./media/fluorescentie/pulse_logger.zip>`
{Download}`software<./media/fluorescentie/xtdc_babel.zip>`
{Download}`software<./media/fluorescentie/cronologic_linux_kernel-1.4.0.tar.gz>`

## Bronnen
- [Ocean Optics Book — Theorie: Fluorescentie en fosforescentie](https://www.oceanopticsbook.info/view/scattering/level-2/theory-fluorescence-and-phosphorescence)
