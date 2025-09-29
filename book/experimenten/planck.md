# Planck
practicumhandleiding om de constante van Planck te bepalen. 

```{figure} ./media/planck/planck.jpg
    :name: Max Planck
    :align: right 
    :height: 150px

Foto van de Max Planck.([bron](By Hugo Erfurth - This file was derived from: Max Planck by Hugo Erfurth 1938cr.jpg Original source: https://www.dhm.de/lemo/bestand/objekt/max-planck, Public Domain, https://commons.wikimedia.org/w/index.php?curid=153625300) (public domain))
``` 

## Inleiding
Het doel van dit practicum is het bepalen van de constante van Planck. In dit experiment meten we de drempelspanning van verschillende leds met een bekende golflengte. Dit doen we m.b.v. een Arduino. Daarmee bepalen we een waarde voor de constante van Planck.

## Theorie
Een LED is een halfgeleider die licht kan geven. In de LED zorgen elektronen ervoor dat er fotonen ontstaan die licht uitzenden. In een model ziet dit er als volgt uit:
```{figure} ./media/planck/bandgapLED.png
    :name: Bandgap
    :align: center 
``` 
Als een elektron elektrische energie absorbeert, kan dit elektron van een laag energieniveau (de valentieband) naar een hoger energieniveau (de geleidingsband) springen. De spanning die nodig is om een elektron voldoende elektrische energie te geven om de sprong te maken heet de drempelspanning. De elektrische energie van het elektron is dan gelijk aan $E=qU$. Na korte tijd valt het elektron weer terug naar de valentieband en daarbij komt een foton vrij met een energie die gelijk is aan $Ef=h\cdot f=\frac{hc}{\lambda}$.

Het energieverschil tussen geleidings- en valentieband wordt ook wel de **bandgap** genoemd. Bij een grotere bandgap kost het meer energie om een elektron van de valantieband naar geleidingsband te brengen. Dit geeft dan weer fotonen met een hogere energie, oftewel een kleine golflengte, dus blauwer licht.
Een rode led is gemaakt van Galliumaluminiumarsenide of AlGaAs. Dit materiaal zorgt voor een typische bandgap van 1,7 - 1,9 eV. Andere kleuren leds zijn gemaakt van andere materialen en hebben een grotere bandgap.

In dit experiment meten we de drempelspanning en de golflengte van het licht van een aantal LEDs en bepalen daarmee een waarde voor de constante van Planck.

## Experimentele gedeelte
### Materiaal
Laptop, USB-kabel, Arduino, breadboard, 5 jumper-kabels, drukknop, weerstand 220 ohm (met rood-rood-bruin-goud of rood-rood-zwart-zwart-goud ringen), condensator (470 μF), 6 verschillende leds: 
* led IR 940nm, 
* led rood (zelf bepaalde golflengte of 630nm), 
* led geel (zelf bepaalde golflengte of 590nm) , 
* led groen (zelf bepaalde golflengte of 580nm), 
* led blauw (zelf bepaalde golflengte of 458nm), 
* led UV 365nm.

### Opstelling 
Bouw onderstaande schematische tekening na. <br>
```{figure} ./media/planck/opstelling.png
    :name: opstelling
    :align: center 
``` 
### Uitvoering
1. De Arduino is, als het goed is, reeds voorzien van de juiste software. Mocht dit toch niet het geval zijn, download dan hieronder het bestand voor de Arduino.
{Download}`software<./media/planck/ReadLedVoltage.ino>` Na het downloaden kan dit bestand geopend worden in de Arduino software en vervolgens geüpload worden naar de Arduino. 
2. Sluit de Arduino met de USB kabel aan op de laptop.
3. Met de link hieronder wordt via javascript code de uitvoer van de seriële poort van de Arduino weergegeven.
* Open onderstaande link met een **Chrome** of Edge browser en 
* Druk op verbinden om de juiste USB poort te koppelen.
<a href="./media/planck/serial_data_applet.html" target="_blank">Open Serial Data Applet</a>
<br><br>
Als alternatief is het ook mogelijk de html-pagina hieronder te downloaden en vervolgens te openen in een **Chrome** of Edge browser.
{Download}`software<./media/planck/serial_data_applet.html>`
4.  De led gaat branden als je op het knopje drukt. De spanning over de led en de weerstand samen is dan 5,00 V. Wanneer je het knopje loslaat gaat het ledje langzaam uit. 
5. Door het knopje (weer) in te drukken en ingedrukt te houden veranderd een van de getallen in 5,00 V. Wanneer je het knopje nu los laat, gaat de led langzaam uit en zoekt het programma zelf het getal waarbij er geen stroom meer loopt, en de spanning over de weerstand 0,00 V is geworden. Dan staat er over de led de drempelspanning. Druk zelf op *stop* als 0,00V is bereikt maar de getallen blijven veranderen. Doe deze meting 3x voor elke led en noteer telkens de gemiddelde drempelspanning.
5. Vervang de led voor een andere, let op de oriëntatie van de lange poot van de LED (bovenaan). En ga verder bij punt 4.  
<br>
*NB:* Bij de IR led zie je niets. En pas op als je UV-leds gebruikt, kijk hier nooit rechtstreeks naar als ze ‘branden’. Dit is net zo slecht voor je ogen als rechtstreeks naar de zon kijken! Zet ze direct weer uit als je ze niet meer gebruikt!


## Resultaten
Vul de volgende tabel in. Maak vervolgens van de laatste twee kolommen een grafiek. Zet hierbij qU uit tegen de frequentie. Teken hierin de trendlijn.
Of doe dit heel slim meteen in een spreadsheet.

<br><br>
|kleur|golflengte (nm)|drempelspanning (V)|frequentie (Hz)|qU (J)|
|---|---|---|---|---|
|IR|940|
|Rood|630|
|Geel|590|
|Groen|580|
|Blauw|458|
|UV|368|
<br><br>

Lukt het niet? Gebruik dan stiekem deze tool: 
<a href="./media/planck/plancks-grafiek.html" target="_blank">Open Grafiek</a>


## Opdrachten
1) Leg uit waarom de golflengte van een LED bepalend is voor de drempelspanning.
2) Leid de volgende formule af uit onder andere de formule voor foton-energie: 
$h = \frac{q\cdot U\cdot{\lambda}}{c}$ 
En hieruit volgt dan dat voor de drempelspanning van een led dan moet volgen dat : $U = $
3) Bereken voor een led met een golflengte van 700nm de drempelspanning.
4) Leg uit waarom de drempelspanning van de led te vinden is als de spanning over de weerstand 0,00 V is.
5) Stel de vergelijking van de trendlijn op, zoals deze volgt uit de resultaten en grafiek.
6) Bereken met behulp van je antwoord op de vorige vraag de constante van Planck.
7) Bereken het procentuele verschil van je gevonden waarde met de theoretische (Binas).
8) Leg uit welke zaken de grootste invloed hebben op de nauwkeurigheid van de proef.

## Conclusie & discussie
Deze volgen vanzelf uit de opdrachten hierboven.

## Uitbreiding
Gebruik zelf een spectroscoop of tralie om de golflengte te bepalen van de leds, zodat je resultaten nauwkeuriger worden.

## Bronnen
*Pols, F en Nelk, J. (2016), Een leerlingpracticum quantummechanica voor minder dan € 30,-, NVOX 2016, nummer 3, bladzijde 132-133*
