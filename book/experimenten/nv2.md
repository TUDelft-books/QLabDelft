# Diamant NV center 2
Practicumhandleiding van het tweede, uitgebreidere, NV center experiment
<br>

## Inleiding
In het eerste NV center experiment heb je de basis geleerd van de NV center. Dit is het vervolg op het eerste experiment. In dit experiment wordt de basis uitgebreid met spin resonantie door middel van een microgolf.

## Theorie
### MRI en ODMR
Bij een MRI worden de spins van waterstofkernen beïnvloed door een microgolf. Bij dit experiment gebeurt iets soortgelijks. In het kristalrooster van het diamant zijn 4 mogelijke oriëntaties van het stikstof-gat-paar (N-V), ten opzichte van de C-atomen. 
Wanneer er een extern magneet veld wordt aangebracht, treedt er Zeeman-splitsing op en ontstaan er twee energieniveau mogelijkheden per oriëntatie. 
Elk van de vier oriëntaties is gevoelig voor een andere microgolf frequentie, waarbij de precieze frequentie afhangt van het magneetveld. In elke configuratie zijn er dus twee energie-mogelijkheden. Dat maakt dat er in totaal 8 mogelijkheden zijn, of 8 verschillende spin-toestanden van de twee vrije elektronen. Het zijn de spins van de elektronen die gaan resoneren door een bepaalde microgolf frequentie: Ze krijgen door de microgolf energie om van spin-toestand te veranderen.
Door microgolven met oplopende frequentie achter elkaar te verzenden naar de diamant (een zogenaamde sweep), zal er op 8 punten verandering in gemeten intensiteit van de fluorescentie mogelijk zijn. Dit principe heet Optically Detected Magnetic Resonance of kortweg ODMR.

### Toestanden, microgolf en magneetveld

```{figure} ./media/nv/NV-energy-levels.svg
    :width: 250
    :name: NV-energy-levels-1
    :align: center
Diagram door BonPhire, BY-SA 4.0, https://en.wikipedia.org/wiki/File:NV-energy-levels.svg
```

In het diagram hierboven is te zien dat de $m_s=\pm1$ grondtoestand te bereiken vanuit de onderste grondtoestand $m_s=0$ door de elektronen energie te geven met een microgolf frequentie van 2,87 GHz. 
Wanneer meer elektronen in de $m_s = \pm1$ toestand zijn, zal de kans dat aangeslagen elektronen, (in de *excited* state), terugvallen via de *intern* route ($^1A_1$ en $^1E$ singlet state) groter worden. De hoeveelheid waargenomen fluorescentie zal dan afnemen. <br>
Door het aanbrengen van een extern magnetisch veld zullen de $m_s = \pm1$ toestanden splitsen: Dit wordt zeemansplitsing genoemd (naar Pieter Zeeman). De mate van opsplitsing hangt af van de sterkte van het magneetveld in de richting van het NV-centrum (zie ook het andere NV experiment). Doordat dat de $m_s =-1$ en de $m_s=+1$ nu twee (gesplitste) verschillende toestanden zijn, zal het bereiken vanuit de $m_s=0$ toestand van de $m_s=+1$ toestand iets meer energie kosten en de $m_s=-1$ iets minder energie kosten. Dus de microgolf zal in het ene geval moeten zorgen voor iets meer energie door een hogere frequentie en in het andere juist een lagere frequentie. Zie hieronder de afbeelding met magneet $B=0$ en met extern magneetveld $B\neq0$. De $\nu$ is een symbool voor frequentie (wij gebruiken meestal $f$).

```{figure} ./media/nv2/mw1.png
    :width: 250
    :name: mw1
    :align: center
From: Magaletti, S., Mayer, L., Le, X.P. et al. Magnetic sensitivity enhancement via polarimetric excitation and detection of an ensemble of NV centers. Sci Rep 14, 11793 (2024). https://doi-org.tudelft.idm.oclc.org/10.1038/s41598-024-60199-z, Creative Commons License http://creativecommons.org/licenses/by/4.0/
```

Als we nu een sample hebben met vele NV centers in verschillende richtingen in het kristalrooster, dan zal elke oriëntatie een ander magneetveld voelen en andere splitsing hebben. Dit zorgt dan voor 4 keer 2 piekjes (of dipjes) in de waargenomen intensiteit van het licht. Zie ook hieronder.

```{figure} ./media/nv2/mw2.png
    :width: 250
    :name: mw2
    :align: center
From: Magaletti, S., Mayer, L., Le, X.P. et al. Magnetic sensitivity enhancement via polarimetric excitation and detection of an ensemble of NV centers. Sci Rep 14, 11793 (2024). https://doi-org.tudelft.idm.oclc.org/10.1038/s41598-024-60199-z, Creative Commons License http://creativecommons.org/licenses/by/4.0/
```

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
    :width: 250
    :name: USBcamera beeld
    :align: center  
Een oudere weergave van het beeld van de USBcamera in de html applet.
```
5) Start de meting met de standaard instellingen door op "Start Sweep" te drukken.
6) Wacht tot de meting klaar is. 
7) Interpreteer je meting: Het is nu mogelijk om met andere instellingen de meting te herhalen.
8) Probeer vervolgens de hyperfine-splitting van het Zeeman effect te ontdekken. Gebruik hiervoor de volgende instellingen:
*10 loops, power 10, stepsize 0.1 MHz, magneetvoeding op 0.8 A en range 2800 tot 2940 MHz*.

## Resultaten en Conclusie
Een mogelijk resultaat van een oude meting is hieronder weergegeven.

```{figure} ./media/nv2/nv5.png
    :width: 250
    :name: resultaten
    :align: center 
Mogelijk resultaat van de meting
```
Opvallend is de symmetrie in de dipjes. 

## Discussie
Door het externe magneetveld van richting te veranderen en dit te kalibreren is het mogelijk om hiermee een gevoelig kompas te maken.
Andere mogelijkheden zijn een zeer gevoelige magneetsensor of Qubits.
