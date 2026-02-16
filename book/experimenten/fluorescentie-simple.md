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

Met hulp van notebooklm 

Bronnen:  

 

De Triplettoestand en de Verboden Overgang 

(Opgeslagen reacties kunnen alleen worden weergegeven) 

Om het verhaal van de verboden overgang en de triplet state te begrijpen, moeten we kijken naar hoe elektronen in moleculen hun "spin" (draairichting) organiseren. 

Wat is een Triplet State? 

De meeste stabiele moleculen bevinden zich in de grondtoestand in een singlet state (S0 ). Dit betekent dat alle elektronen in paren voorkomen waarbij hun spins tegenovergesteld zijn ("paired"), waardoor het totale spin-impulsmoment nul is. 

Wanneer een molecuul wordt aangeslagen door licht, springt een elektron naar een hoger energieniveau. Er zijn dan twee mogelijkheden: 

1. Singlet excited state (S1 ): De spin van het aangeslagen elektron verandert niet; de spins blijven tegenovergesteld. 

2. Triplet excited state (T1 ): De spin van het aangeslagen elektron klapt om ("reorients"), waardoor er twee ongepaarde elektronen zijn met dezelfde spin-orientatie. 

De naam "triplet" komt voort uit het feit dat zo'n toestand in een magnetisch veld wordt gesplitst in drie verschillende energieniveaus (gebaseerd op de oriëntatie van het spin-impulsmoment ten opzichte van het veld). Een belangrijk kenmerk is dat de laagste triplet toestand (T1 ) bijna altijd een lagere energie heeft dan de laagste aangeslagen singlet toestand (S1 ). 

Het verhaal van de "Verboden Overgang" 

In de kwantummechanica wordt de overgang tussen een singlet toestand en een triplet toestand beschouwd als "verboden". Dit betekent niet dat het onmogelijk is, maar dat de waarschijnlijkheid dat het gebeurt zeer klein is. 

• Licht kan spins niet flippen: Spectroscopische processen, zoals de absorptie of emissie van een foton, kunnen de richting van een elektronenspin niet zomaar veranderen. Omdat de grondtoestand (S0 ) een singlet is en de triplet toestand (T1 ) een andere spin-multipliciteit heeft, kan een molecuul niet direct door licht te absorberen in een triplet toestand komen. 

• Intersystem Crossing: Moleculen bereiken de triplet toestand meestal via een omweg genaamd intersystem crossing, waarbij een molecuul vanuit de aangeslagen singlet toestand (S1 ) zonder straling overgaat naar de triplet toestand (T1 ). 

• De valstrik: Eenmaal in de triplet toestand zit het molecuul als het ware "gevangen". Omdat de terugkeer naar de singlet grondtoestand (S0 ) weer een verboden overgang is (de spin moet immers weer terugklappen), gebeurt dit proces heel traag. 

Waarom dit zorgt voor nagloeien 

Omdat de overgang van triplet naar singlet "verboden" is, is de levensduur van de triplet toestand uitzonderlijk lang in vergelijking met die van een singlet toestand. Terwijl fluorescentie (singlet-naar-singlet) bijna direct stopt (minder dan 10−7 seconden), kan fosforescentie (triplet-naar-singlet) fracties van seconden tot zelfs minuten duren. 

De enige manier waarop deze verboden overgang toch kan plaatsvinden, is door spin-orbit koppeling. Dit is een interactie waarbij de spin van het elektron "mengt" met zijn baanbeweging, waardoor de triplet toestand een klein beetje "singlet-karakter" leent en de overgang heel langzaam toch mogelijk wordt. Moleculen met zware atomen (zoals jodium of broom) hebben een sterkere spin-orbit koppeling, waardoor de verboden overgang iets makkelijker (sneller) verloopt. 

* 
op materiaal niveau (vele fotonen)
enkel foton is (poisson)kans proces --> vele fotonen exponentieel verval verband.
echter materiaal eigenschappen zorgern ervoor dat:
uitleg Fosforescentie ontstaat doordat elektronen vast komen te zitten in "traps" (defecten in het kristalrooster - gedoteerd). Om te emitteren, moeten ze eerst thermisch worden geactiveerd om uit die trap te ontsnappen.In een perfect kristal hebben alle traps dezelfde diepte (leidt tot exponentieel verval).In fosforescerend papier (vaak gedoteerd met zeldzame aarden zoals $SrAl_2O_4:Eu,Dy$) is er een distributie van trap-dieptes.



Laten we de halfwaardetijd ($t_{1/2}$) berekenen vanaf het startpunt $t=0$:De intensiteit op $t=0$ is $I_0 = \frac{a}{t_0^b}$. We zoeken het tijdstip $t_{1/2}$ waarop $I(t) = \frac{1}{2} I_0$.De formule hiervoor is:$t_{1/2} = t_0 \cdot (2^{1/b} - 1)$ 
voorbeeld
$t_0 = 0.253$ $b = 0.718$ $t_{1/2} = 0.253 \cdot (2^{1/0.718} - 1)$ $t_{1/2} = 0.253 \cdot (2^{1.3927} - 1)$ $t_{1/2} = 0.253 \cdot (2.625 - 1)$ $t_{1/2} \approx 0.411$ seconden


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

