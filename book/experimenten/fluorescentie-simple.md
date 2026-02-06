# Fluorescentie voor dummies
_deze handleiding is nog **under construction**_
practicumhandleiding

## Inleiding
In het kort werkt dit eenvoudige fluorescentie experiment als volgt: We plaatsen een fosforescerende materiaal in een doosje en belichten dit met UV licht. Vervolgens meten we met een foto-diode en een Arduino elke seconde de hoeveelheid licht en geven dit weer in een grafiek. Hieruit kunnen we de halfwaardetijd bepalen van het fosforescerende materiaal.

## Materiaal
* Doosje (3D geprint), lichtdicht. **Download** hier de 3D bestanden (Fusion360 en STL).
* Fototransistor l-53p3c
* UV led (mat, ander uiterlijk dan fototransistor ivm verwarring)
* dupont jumper cables M-F 20 of 30cm 4 stuks.
* Arduino Leonardo + case en kabel
* Tapeje
* Fluorescerend materiaal (accufolie??)

## Meten
Met de link hieronder wordt via javascript code in een .html pagina de spanning die de Arduino meet weergegeven. De gemeten spanning is een maat voor de hoeveelheid licht dat op de foto-diode valt. 

* Schijn flink met de UV lamp op het sample (het fosforescerende materiaal in het doosje). 
* Sluit het doosje en snel: 
* Sluit de USB poort aan. 
* Open onderstaande link met een **Chrome** of Edge browser en 
* Druk op de verbinding maken en geef de USB poort toestemming.  
* De meting begint vanzelf. Als de doos dicht is, is de spanning laag (bijna 0V), als de doos open is dan is de spanning hoog (bijna 5V).
* Sluit de doos en druk op "UV aan". De UV lamp in de doos schijnt standaard 5 seconden op het sample. Na 5 seconden reset de grafiek en:
* Meet gedurende circa 50 seconden en STOP dan de meting.
* Lees de halfwaardetijd op minstens 2 verschillende plaatsen zo nauwkeurig mogelijk af en noteer deze ergens. Bij voorbeeld aan het begin en vanaf 3 seconden oid. Is dit hetzelfde?
* Herhaal de meting een paar keer. Druk daartoe dan op RESET en stel de UV tijd en intensiteit in en druk op "UV aan". De meting begint opnieuw. 

<a href="./media/fluorescentie-simple/measure-versie3.html" target="_blank">Open measuring applet</a>
<br><br>
Als alternatief is het ook mogelijk de html-pagina hieronder te downloaden en vervolgens te openen in een **Chrome** of Edge browser.
{Download}`software<./media/fluorescentie-simple/measure-versie3.html>`

De Arduino code is hier eventueel ook te downloaden. {Download}`software<./media/fluorescentie-simple/ReadVoltageNew.ino>`