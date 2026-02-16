# Fluorescentie voor dummies
_deze handleiding is nog **under construction**_
practicumhandleiding

## Inleiding
In het kort werkt dit eenvoudige fluorescentie experiment als volgt: We plaatsen een fosforescerende materiaal in een doosje en belichten dit met UV licht. Vervolgens meten we met een foto-diode (fototransistor) en een Arduino elke seconde de hoeveelheid licht en geven dit weer in een grafiek. Hieruit kunnen we de halfwaardetijd bepalen van het fosforescerende materiaal.
Bij fosforescentie blijft, in tegenstelling tot bij fluorescentie, een materiaal vrij lang nagloeien. Bij fluorescentie is dit nanosecondes, bij fosforescentie duurt dit millisecondes tot uren. Dit proces is eenvoudig(er) meetbaar. Waarom fosforescentie zoveel langer duurt is te vinden in de theorie aan het einde.

## Materiaal
* Doosje (3D geprint), lichtdicht. Download hier de 3D bestanden (STL): {Download}`software<./media/fluorescentie-simple/Small box with hinged lid -aangepast-versie-with-holes.stl>`
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

* Schijn flink met de UV lamp op het sample (het fosforescerende materiaal in het doosje). 
* Sluit het doosje en snel: 
* Sluit de USB poort aan. 
* Open onderstaande link met een **Chrome** of Edge browser en 
* Druk op de verbinding maken en geef de USB poort toestemming.  
* De meting begint vanzelf. Als de doos dicht is, is de spanning laag (bijna 0V), als de doos open is dan is de spanning hoog (bijna 5V).
* Sluit de doos en druk op "UV aan". De UV lamp in de doos schijnt standaard 5 seconden op het sample. Na 5 seconden reset de grafiek en:
* Meet gedurende circa 30 seconden en STOP dan de meting.
* Lees de halfwaardetijd op minstens 2 verschillende plaatsen zo nauwkeurig mogelijk af en noteer deze ergens. Bij voorbeeld aan het begin en vanaf 3 seconden oid. Is dit hetzelfde?
* Herhaal de meting een paar keer. Druk daartoe dan op RESET en stel de UV tijd en intensiteit in en druk op "UV aan". De meting begint opnieuw. 

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

