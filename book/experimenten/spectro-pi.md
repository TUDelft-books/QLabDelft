# Spectrometer met Camera
_deze handleiding is nog **under construction**_
practicumhandleiding

## Inleiding
Dit is de handleiding om een camera in te zetten om een spectrum te analyseren. Het spectrum wordt verkregen door middel van een standaard hand-spectroscoop, met daarin een spleet en tralie verwerkt. Eerst wordt de camera output gekalibreerd van pixels naar golflengte met een bekend sample, vervolgens kunnen allerlei spectra onderzocht worden. 

## Doel
Het zelf kalibreren en gebruiken van een op een camera gebaseerde spectrometer, om zodoende:
* Spectra te onderzoeken
* Werking van een spectroscoop te doorgronden
* Leren werken met en het belang inzien van kalibratie.

## Theorie
Met een spectrometer kan de golflengte worden gevonden die wordt
uitgezonden bij het terugvallen van een elektron naar lager
energieniveau.
Hiermee kan het emissiespectrum van gassen of het absorptiespectrum van
vloeistoffen worden geanalyseerd. Ook kan hier bijvoorbeeld het
noorderlicht mee worden onderzocht.
Een typische spectroscoop bestaat uit een spleet en een tralie. 
Door het spectrum op een camerasensor te laten vallen, kan het spectrum worden geanalyseerd. 
Daartoe moeten eerst de camera pixels, (in de richting van het spectrum - horizontaal), gekoppeld worden aan de juiste golflengte in *nm*: De camera moet gekalibreerd worden met een bekend spectrum. Bekende spectraallijnen (golflengtes) van het bekende spectrum worden gekoppeld aan de desbetreffende pixel waar deze spectraallijnen zichtbaar zijn. Een gekalibreerde camera kan ingezet worden om allerlei spectra te onderzoeken.

## Materiaal
In dit experiment wordt gebruik gemaakt van een hand-spectroscoop (25 mm diameter, 105 mm lang), met daarin een spleet en een tralie van 600 lijnen/mm. Het beeld van de spectroscoop wordt vastgelegd met een Raspberry Pi Camera 3 NoIR. Dit is een autofocus camera zonder infraroodfilter. Zodoende kunnen ook spectraallijnen die voor ons oog niet zichtbaar zijn worden weergegeven. De camera en spectroscoop zijn beide gemonteerd in een 3D geprinte houder om te zorgen dat er een stabiele fysieke verbinding is tussen de spectroscoop en de camera. 
De camera is via een lintkabel aangesloten op een Raspberry Pi. Deze mini computer heeft zijn eigen software (Raspbian), toetsenbord en scherm. 
Qua software wordt gebruik gemaakt van een camera script (Pycam) om de beelden op te slaan. 
Vervolgens worden de beelden met ImageJ geanalyseerd. 
Het data (.csv) bestand wordt met behulp van een USB stick op een computer gezet met een Spreadsheets programma (Excel). Hierin wordt de data verder verwerkt. 
> **Materiaalijst:**
> * hand-spectroscoop
> * Raspberry Pi Camera 3 NoIR (Bij andere camera's kan het handmatig scherpstellen met een (zoom)lens nodig zijn) 
> * Lintkabel (lang)
> * Raspberry Pi Model 4, met randapparatuur
> * Pycam camera software
> * ImageJ software
> * Excel software

<img src="./media/spectro-pi/spectroscoop.jpeg"/> 

## Uitvoering
1) Schakel de lamphouder met daarin de He buis in en laat deze even opwarmen.
2) Schakel de Raspberry Pi aan door de stekker van 5V voeding in het stopcontact te steken.
3) Open een **Terminal** door bovenaan op het zwarte vlakje te drukken.
4) Er opent een window met daarin een prompt. 
5) Type: .. (of druk op pijltje omhoog en zoek dit commando), druk nog niet op *Enter*.
6) Houd de spectroscoop met camera stil voor het gat van de lamphouder met daarin de He buis. 
7) Druk op *Enter* in het het terminal window. Er wordt nu een foto gemaakt, er zijn een paar previews, dus houd 'm even stil.
8) Bekijk de foto met de *Imageviewer*, als deze niet goed is kun je een nieuwe foto maken (ga dan terug naar 5, je kunt de naam van het bestand aanpassen).
9) Open de foto met **ImageJ**.
10) Klik op de rechthoek *(Rectangle)*
11) Sleep van helemaal links naar helemaal rechts een dunne balk over het scherm, over het spectrum heen. 
12) Klik vervolgens op *Analyze* en daarna op *Plot Profile*.
13) Er opent zich een nieuw window met daarin de Grey Values uitgezet tegen de pixels. Hier kun je het spectrum in zien.
14) Save data as ...CSV
15) 