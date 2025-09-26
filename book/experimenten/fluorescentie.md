# Fluorescentie
_work in progress: Dit experiment wordt momenteel opgezet._
practicumhandleiding 

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
* Zet alles aan.
* Leg een (kort) belicht sample op de sample tafel voor de PMT
* Sluit de deur
* Check de scoop of er data binnenkomt.
* Nu gaan we de data binnen halen: Type in de terminal: 
```bash
sudo pulse_logger 1
```

 
(de pulsen worden 1 minuut lang opgeslagen - kies 4 voor 4 minuten lang).
* de data wordt opgeslagen in de csv file: pulse_times.csv. Kopieer deze zelf naar een bestand met een passende naam: 
```bash
cp pulse_times.csv ster_1_min_belicht_4_min_gemeten.csv
```

* Nu gaan we de data verwerken. Type in de terminal
```bash
python pulse_dashboard.py 
```
Klik op de URL die daar verschijnt. Er wordt een webpagina geopend (heel even geduld). 
* Upload hierin de .csv .
* Na even wachten verschijnt het histogram en de curve-fit functie. 
* De breedte van de 'bins' ( de verticale balken) kun je instellen.= met de schuifbalk. Probeer maar eens.
* Rechts kan je de halfwaarde tijd aflezen zoals deze berekend is uit de curve-fit.


## Resultaten



## Conclusie en discussie