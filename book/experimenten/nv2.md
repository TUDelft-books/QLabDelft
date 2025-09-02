# Diamant NV center opstelling 2
_work in progress_
<br>
Practicumhandleiding van het uitgebreide NV center experiment
<br>
Dit experiment is nog in de beta-fase, maar klaar om te testen.

## Inleiding
In het eerste NV center experiment heb je de basis geleerd van de NV center. In dit experiment wordt die basis uitgebreid met spin resonantie door middel van een microgolf.

## Theorie _work in progress_
Bij een MRI worden de spins van waterstofkernen beïnvloed door een microgolf. Bij dit experiment gebeurt iets soortgelijks. In het kristalrooster van het diamant zijn 4 mogelijke oriëntaties van het stikstof-gat-paar (N-V), ten opzichte van de C-atomen. 
Wanneer er een extern magneet veld wordt aangebracht, treedt er Zeeman-splitsing op en ontstaan er twee energieniveau mogelijkheden per oriëntatie. 
Elk van de vier oriëntaties is gevoelig voor een andere microgolf frequentie, waarbij de precieze frequentie afhangt van het magneetveld. In elke configuratie zijn er dus twee energie-mogelijkheden. Dat maakt dat er in totaal 8 mogelijkheden zijn, of 8 verschillende spin-toestanden van de twee vrije elektronen. Het zijn de spins van de elektronen die gaan resoneren door een bepaalde microgolf frequentie: Ze krijgen door de microgolf energie om van spin-toestand te veranderen.
Door microgolven met oplopende frequentie achter elkaar te verzenden naar de diamant (een zogenaamde sweep), zal er op 8 punten verandering in gemeten intensiteit van de fluorescentie mogelijk zijn. Dit principe heet Optically Detected Magnetic Resonance of kortweg ODMR.

## Materiaal
* Opstelling in donkere doos, bestaande uit:
* Diamant sample met NV centers.
* Omringt door microgolf antenne, aangestuurd door externe microgolf generator.
* In de focus van een groene laser. 
* Met rood filter (om het groen weg te filteren).
* Met halfdoorlatende, dichroïsche spiegel. (spiegelt groen licht, laat rood door.)
* Digitale camera waar het rode licht opvalt.

## Uitvoering
1) Controleer de positie van de magneten.
2) Sluit de donkere doos goed.
3) Sluit de 3 USB connectors aan op de laptop
4) Met de link hieronder wordt via javascript code de lichtsterkte gemeten door de camera weergegeven. 
* Open onderstaande link met een **Chrome** of Edge browser en 
* Geef de (juiste) webcam toestemming.  

<a href="./media/nv2/nv2-scan-versie-02-09-25.html" target="_blank">Open NV2 Live Applet</a>
<br><br>
Als alternatief is het ook mogelijk de html-pagina hieronder te downloaden en vervolgens te openen in een **Chrome** of Edge browser.
{Download}`software<./media/nv2/nv2-scan-versie-02-09-25.html>`
```{figure} ./media/nv2/nv3.png
    ---
    width:
    name: USBcamera beeld
    align: center 
    ---
Weergave van het beeld van de USBcamera in de html applet.
```
5) Start de meting met de standaard instellingen door op "Start Sweep" te drukken.
6) Wacht tot de meting klaar is. 
7) Interpreteer je meting: Het is nu mogelijk om met andere instellingen de meting te herhalen.

## Resultaten en Conclusie
Een mogelijk resultaat is hieronder weergegeven.

```{figure} ./media/nv2/nv5.png
    ---
    width:
    name: resultaten
    align: center 
    ---
Mogelijk resultaat van de meting
```
Opvallend is de symmetrie in de dipjes. 

## Discussie
Door het externe van richting te veranderen en dit te kalibreren is het mogelijk om hiermee een gevoelig kompas te maken.
Andere mogelijkheden zijn een zeer gevoelige magneetsensor of Qubits.
