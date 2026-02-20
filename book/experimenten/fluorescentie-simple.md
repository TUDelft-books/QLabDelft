# Fluorescentie voor dummies
_deze handleiding is nog **under construction**_
practicumhandleiding

## Inleiding
In het kort werkt dit eenvoudige fluorescentie experiment als volgt: We plaatsen een fosforescerende materiaal in een doosje en belichten dit met UV licht. Vervolgens meten we met een foto-diode (fototransistor) en een Arduino elke seconde de hoeveelheid licht en geven dit weer in een grafiek. Hieruit kunnen we de halfwaardetijd bepalen van het fosforescerende materiaal.
Bij fosforescentie blijft, in tegenstelling tot bij fluorescentie, een materiaal vrij lang nagloeien. Bij fluorescentie is dit nanosecondes, bij fosforescentie duurt dit millisecondes tot uren. Dit proces is eenvoudig(er) meetbaar. Waarom fosforescentie zoveel langer duurt, heeft te maken met *spin* en is te vinden in de theorie aan het einde.

## Materiaal
* Doosje (3D geprint), lichtdicht, met in het deksel 4x 1mm gaatje geboord. Download hier de 3D bestanden (STL): {Download}`software<./media/fluorescentie-simple/Small box with hinged lid -aangepast-versie-with-holes.stl>`
* Fototransistor (Kingbright l-53p3c) (korte poot is collector, aangesloten op 5V).
* UV led (mat, ander uiterlijk dan fototransistor ivm verwarring)
* Dupont jumper cables M-F 20 of 30cm 4 stuks.
* Arduino Uno of Leonardo + case en kabel De Arduino is vooraf geprogrammeerd. De Arduino code is hier eventueel te downloaden. {Download}`software<./media/fluorescentie-simple/ReadVoltageNew.ino>`
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



## Theoretische achtergrond
### Waarom fosforescentie langer duurt dan fluorescentie
Fluorescentie wordt uitgebreid behandeld in de NLT-module **Quantum Ready!**. Hieronder zie je een fluorescentie-energiediagram uit deze module. Een foton brengt een molecuul in de aangeslagen toestand: Het electron komt in een hoger energieniveau. Vervolgens komt er wat energie vrij *Q* via een stralingsvrije overgang. Tenslotte valt het electron terug naar de grondtoestand onder het uitzenden van een foton (met minder energie en dus een andere kleur dan het oorspronkelijke foton). Dit is over het algemeen een proces dat nanosecondes duurt. 

```{figure} ./media/fluorescentie-simple/energiediam1.png
    :width: 400
    :name: energiediagram
    :align: center 
Uit de NLT-module Quantum Ready
``` 
Bij fosforescentie gebeurt iets vergelijkbaars, echter dit proces duurt milisecondes tot uren. Hieronder staat het energiediagram (ook wel Jablonski diagram genoemd) weergegeven, wat daaronder verder wordt toegelicht. 

```{figure} ./media/fluorescentie/Jablonski.png
    :width: 400
    :name: Jablonski
    :align: center 
By Curtis Mobley, from: https://www.oceanopticsbook.info/view/scattering/level-2/theory-fluorescence-and-phosphorescence
``` 

Een foton brengt een molecuul in de aangeslagen toestand, waarbij een electron in een hoger energie niveau komt. 
Het electron zat in de grondtoestand in gepaarde toestand: Het ene electron had een spin-up, het andere spin-down. Dit noemen we een singlet toestand $S_0$. (Het spin-impulsmoment is hierbij nul). Als het ene electron in een hoger niveau komt, blijft zijn spin behouden/ hetzelfde ($S_1$). Via een intersystem-crossing waarbij wat energie vrij komt, komt het electron in een triplet toestand $T_1$ terecht, maar dan is de spin van het electron geflipt! (Het kostte wat energie om he te flippen, maar die kwam vrij). Wanneer het electron nu wil terugkeren naar de grondtoestand $S_0$ is er een probleem: Hij heeft dezelfde spin als het oorspronkelijk gepaarde electron. We noemen dit daarom een **verboden overgang**. Het electron moet wachten tot het voldoende energie heeft om de spinflip te maken, voordat het kan terugvallen naar de grondtoestand $S_0$. (Deze energie kan niet uit een foton komen, maar komt uit de spin-baan koppeling (bron: ??).) Dit "wachten" op de spinflip zorgt ervoor dat fluorescentie zolang kan bestaan.

### Waarom welk verband
Het terugvallen van aangeslagen elektronen en daarbij het vrijkomen van fotonen is een kansproces. We verwachten daarom een afnemend exponentieel verband, waarbij 50% van de fotonen is teruggevallen bij de fosforescentie-halfwaardetijd van het molecuul. 
Echter materiaal eigenschappen van het molecuul zorgen ervoor dat niet alle elektronen een even grote kans hebben. Ze zitten in zogenaamde "traps" van verschillende diepte (bron: ???.). In een perfect molecuul/kristalrooster hebben alle traps dezelfde diepte, wat leidt tot exponentieel verval. Traps van verschillende diepte zorgen voor een (ontelbare) optelsom van exponentiële functies: De machtreeks.

### Rekenen met de machtreeks
Uit de machtreeks is vrij eenvoudig de halfwaardetijd te berekenen: 

$I(t) = \frac{a}{(t + t_0)^b}$
We zoeken het tijdstip $t_{1/2}$ waarop $I(t) = \frac{1}{2} I_0$.

Op t=0 geldt:
$I_0 = I(0) = \frac{a}{(0 + t_0)^b} = \frac{a}{t_0^b}$
dus op tijdstip $t=t_{1/2}$ geldt: 
$I(t) = \frac{1}{2} I_0 = \frac{1}{2}\frac{a}{t_0^b} = \frac{a}{(t + t_0)^b}$
wegstrepen a en omdraaien of kruislings-vermenigvuldigen levert:
$2t_0^b = (t+t_0)^b$
links en rechts de b-macht wortel nemen:
$2^{1/b}\cdot t_0 = t+t_0$
dus: 
$t = 2^{1/b}\cdot t_0 - t_0$ 
en netter:
$t = t_0(2^{1/b}-1)$


Bijvoorbeeld als je de volgende waarden hebt gevonden: $t_0 = 0.253$ en $b = 0.718$, dan geldt:
 $t_{1/2} = 0.253 \cdot (2^{1/0.718} - 1)$ $t_{1/2} = 0.253 \cdot (2^{1.3927} - 1)$ $t_{1/2} = 0.253 \cdot (2.625 - 1)$ $t_{1/2} \approx 0.41$ seconden

Je kunt nu zelf narekenen dat voor het tijdstip dat je 1% over hebt, geldt:
% Afleiding van de vervaltijd t_x voor een Power Law

% De basisformule voor intensiteit
%$I(t) = \frac{a}{(t + t_0)^b}

% Stap 1: De beginintensiteit bepalen (t = 0)
%$I_0 = I(0) = \frac{a}{(0 + t_0)^b} = \frac{a}{t_0^b}$

% Stap 2: De conditie voor fractie x opstellen
%$\frac{a}{(t_x + t_0)^b} = x \cdot \frac{a}{t_0^b}$

% Stap 3: De constante a elimineren en de vergelijking omdraaien
%$(t_x + t_0)^b = \frac{t_0^b}{x}$

% Stap 4: De macht b isoleren door te verheffen tot de macht 1/b
%$t_x + t_0 = \left( \frac{t_0^b}{x} \right)^{1/b}$

% Stap 5: Vereenvoudigen en t_x oplossen
%$t_x + t_0 = t_0 \cdot \left( \frac{1}{x} \right)^{1/b}$
%$t_x = t_0 \cdot \left( \frac{1}{x} \right)^{1/b} - t_0$

% Stap 6: De definitieve formule (buiten haakjes halen)
%$t_x = t_0 \cdot \left( \left[ \frac{1}{x} \right]^{1/b} - 1 \right)$

$t_{1\%} = 0,253 \cdot \left( \left[ \frac{1}{0,01} \right]^{1/0,718} - 1 \right) \approx 153 \text{ s}$

## Bronnen
Quantum Ready! NLT module voor havo en vwo 2025, door R. Ockhorst en L. Koopman.
