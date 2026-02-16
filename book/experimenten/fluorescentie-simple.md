# Fluorescentie voor dummies
_deze handleiding is nog **under construction**_
practicumhandleiding

## Inleiding
In het kort werkt dit eenvoudige fluorescentie experiment als volgt: We plaatsen een fosforescerende materiaal in een doosje en belichten dit met UV licht. Vervolgens meten we met een foto-diode (fototransistor) en een Arduino elke seconde de hoeveelheid licht en geven dit weer in een grafiek. Hieruit kunnen we de halfwaardetijd bepalen van het fosforescerende materiaal.
Bij fosforescentie blijft, in tegenstelling tot bij fluorescentie, een materiaal vrij lang nagloeien. Bij fluorescentie is dit nanosecondes, bij fosforescentie duurt dit millisecondes tot uren. Dit proces is eenvoudig(er) meetbaar. Waarom fosforescentie zoveel langer duurt is te vinden in de theorie aan het einde.

## Materiaal
* Doosje (3D geprint), lichtdicht, met in het deksel 4x 1mm gaatje geboord. Download hier de 3D bestanden (STL): {Download}`software<./media/fluorescentie-simple/Small box with hinged lid -aangepast-versie-with-holes.stl>`
* Fototransistor (Kingbright l-53p3c) (korte poot is collector, aangesloten op 5V).
* UV led (mat, ander uiterlijk dan fototransistor ivm verwarring)
* Dupont jumper cables M-F 20 of 30cm 4 stuks.
* Arduino Leonardo + case en kabel
* Stukje zwart ducktape
* Fluorescerend materiaal (accufolie??)

Het schakelschema staat hieronder:
```{figure} ./media/fluorescentie-simple/schema-tinkercad.png
    :width: 700
    :name: schema
    :align: left
```
<br>

```{figure} ./media/fluorescentie-simple/schema.png
    :width: 700
    :name: schema
    :align: left
```

## Meten
Met de link hieronder wordt via javascript code in een webpagina de spanning die de Arduino meet weergegeven. De gemeten spanning is een maat voor de hoeveelheid licht die op de fototransistor valt. 

1) Open het doosje door een beetje op de voorkant van de onderzijde te drukken en tegelijk de bovenkant omhoog te draaien naar achteren.
2) Bekijk de binnenkant: Beneden bevindt zich fosforescerend, zelfklevend papier. Aan de binnenkant van de deksel bevinden zich links een matte UVled en rechts de fototransistor.
3) Sluit het doosje.
4) Sluit de USB poort aan. 
5) Open onderstaande link met een **Chrome** of Edge browser en 
6) Druk op de verbinding maken en geef de USB poort toestemming.  
7) De meting begint vanzelf. Als de doos dicht is, is de spanning laag (bijna 0V), als de doos open is dan is de spanning hoog (bijna 5V). Probeer maar.
8) Sluit de doos en druk op "UV aan". De UV lamp in de doos schijnt standaard 5 seconden op het sample. Na 5 seconden reset de grafiek en meet hij verder:
9) Meet gedurende circa 30 seconden en STOP dan de meting.
10) Lees de halfwaardetijd op minstens 2 verschillende plaatsen zo nauwkeurig mogelijk af en noteer deze ergens. Bij voorbeeld aan het begin en vanaf 3 seconden oid. Is dit hetzelfde?
11) Druk op de Halfwaardetijd-fit knop. Herken je de functie? De A staat voor achtergrond. Het programma probeert een fit te maken, maar deze is niet erg goed. 
12) Probeer nu met de Handmatige halfwaardecurve knop een betere fit te krijgen:
13) Bepaal eerst de achtergrond. Sluit daartoe het doosje en reset de meting (druk 2x op Reset). Hoe groot is de spanning in compleet duister?
13) Doe de meting opnieuw: Herhaal punt **8 en 9**. 
14) Druk op de Handmatige halfwaardecurve knop en stel met de schuiven de achtergrond in en ook $I_0$. Probeer vervolgens met de laatste schuif de fit zo goed mogelijk passen te krijgen. (Als de grafiek raar zoomt kun je dat herstellen door 2x op de halfwaardetijd-fit knop te drukken) 
15) Hoe groot is de best passende halfwaarde tijd? Komt die overeen met de waardes die je vond bij **10**?
16) Zoals je hebt gemerkt is de fit niet geweldig passend. Probeer nu de Machtswet-fit eens...die past perfect! Meer hierover in de theorie.

<a href="./media/fluorescentie-simple/measure-versie11.html" target="_blank">Open measuring applet</a>
<br><br>

Als alternatief is het ook mogelijk de html-pagina hieronder te downloaden en vervolgens te openen in een **Chrome** of Edge browser.
{Download}`software<./media/fluorescentie-simple/measure-versie3.html>`

De Arduino code is hier eventueel ook te downloaden. {Download}`software<./media/fluorescentie-simple/ReadVoltageNew.ino>`

## Theoretische achtergrond
De fosforescentie wordt veroorzaakt door 

op energie niveau (1 foton)
jablonski diagram

```{figure} ./media/fluorescentie/Jablonski.png
    :width: 400
    :name: Jablonski
    :align: center 
By Curtis Mobley, from: https://www.oceanopticsbook.info/view/scattering/level-2/theory-fluorescence-and-phosphorescence
``` 

uitleg triple states

op materiaal niveau (vele fotonen)
enkel foton is (poisson)kans proces --> vele fotonen exponentieel verval verband.
echter materiaal eigenschappen zorgern ervoor dat:
uitleg Fosforescentie ontstaat doordat elektronen vast komen te zitten in "traps" (defecten in het kristalrooster - gedoteerd). Om te emitteren, moeten ze eerst thermisch worden geactiveerd om uit die trap te ontsnappen.In een perfect kristal hebben alle traps dezelfde diepte (leidt tot exponentieel verval).In fosforescerend papier (vaak gedoteerd met zeldzame aarden zoals $SrAl_2O_4:Eu,Dy$) is er een distributie van trap-dieptes.



afleiding 

% Afleiding van de vervaltijd t_x voor een Power Law

% De basisformule voor intensiteit
$I(t) = \frac{a}{(t + t_0)^b}$

% Stap 1: De beginintensiteit bepalen (t = 0)
$I_0 = I(0) = \frac{a}{(0 + t_0)^b} = \frac{a}{t_0^b}$

% Stap 2: De conditie voor fractie x opstellen
$\frac{a}{(t_x + t_0)^b} = x \cdot \frac{a}{t_0^b}$

% Stap 3: De constante a elimineren en de vergelijking omdraaien
$(t_x + t_0)^b = \frac{t_0^b}{x}$

% Stap 4: De macht b isoleren door te verheffen tot de macht 1/b
$t_x + t_0 = \left( \frac{t_0^b}{x} \right)^{1/b}$

% Stap 5: Vereenvoudigen en t_x oplossen
$t_x + t_0 = t_0 \cdot \left( \frac{1}{x} \right)^{1/b}$
$t_x = t_0 \cdot \left( \frac{1}{x} \right)^{1/b} - t_0$

% Stap 6: De definitieve formule (buiten haakjes halen)
$t_x = t_0 \cdot \left( \left[ \frac{1}{x} \right]^{1/b} - 1 \right)$



$t_{1\%} = 0,253 \cdot \left( \left[ \frac{1}{0,01} \right]^{1/0,718} - 1 \right) \approx 153,1 \text{ s}$

