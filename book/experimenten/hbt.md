# Hanbury - Brown and Twiss 
(HBT) - practicumhandleiding

## Inleiding

Wanneer een straal licht wordt gesplitst in twee richtingen en
vervolgens gedetecteerd, dan verwacht je, als de afstand precies gelijk
is, dat de ze gelijktijdig aankomen bij de detectoren. Als je echter
gaat kijken naar enkele fotonen *(single photons)*, dan kan het niet
anders dat het ene foton bij de ene detector wordt gemeten en de andere
bij de andere.

## Doel

In dit experiment wordt onderzocht in hoeverre laserlicht bestaat uit
losse fotonen.

## Theorie

Met het Hanbury-Brown and Twiss experiment kan de correlatie tussen
fotonen worden bepaald en daarmee de quantisatie van licht worden
aangetoond.

Het experiment bestaat uit:

- Licht bron,

- Halfdoorlatende spiegel of beamsplitter, die het licht precies 50%
  doorlaat en 50% weerkaatst onder een hoek van 90°.

- Foton detectoren (2)

- Een manier om de correlatie te meten tussen de binnenkomende fotonen.

Zie hieronder voor een schematische tekening van het experiment.

<img src="./media/himage1.png" style="width:2.90833in;height:1.76263in"
alt="Afbeelding met schermopname, lijn, diagram, Graphics Automatisch gegenereerde beschrijving" />

Bron:
https://commons.wikimedia.org/wiki/File:Correlation-interferometer.svg

**Meer theorie – De tweede order correlatie functie en het
HBT-experiment**

De tweede orde correlatiefunctie $ g^{(2)}(t) $ speelt een centrale
rol in het Hanbury Brown en Twiss (HBT) -experiment en helpt bij het
begrijpen van de kwantummechanische eigenschappen van licht en andere
deeltjes. Het experiment werd oorspronkelijk uitgevoerd om de coherentie
en statistieken van fotonen te bestuderen, en heeft implicaties voor de
interpretatie van klassiek en quantumlicht.

### Het HBT-experiment

Het HBT-experiment werd in de jaren 1950 uitgevoerd door Robert Hanbury
Brown en Richard Twiss. Het doel was om de grootte van sterren te meten
aan de hand van het licht dat van de sterren afkomstig is. Ze gebruikten
hiervoor een techniek gebaseerd op intensiteitsinterferometrie, waarbij
de correlatie tussen de intensiteit van het licht op twee verschillende
detectoren werd gemeten.

### De tweede orde correlatiefunctie $ g^{(2)}(t) $ 

De tweede orde correlatiefunctie $ g^{(2)}(t) $ beschrijft de
waarschijnlijkheid om op twee verschillende momenten of op twee
verschillende plekken een foton te detecteren. Het is een maat voor de
correlatie tussen de intensiteit van het licht op twee detectoren. Voor
fotonen wordt dit vaak gebruikt om de statistische eigenschappen van een
lichtbron te bestuderen, zoals:

- Coherent licht (zoals laserlicht),

- Incoherent of thermisch licht (zoals licht van een gloeilamp of
  sterren),

- Quantum licht (zoals uitgezonden door enkele, losse fotonen bronnen).

De functie is gedefinieerd als:
```{math}
:label: 1
g^{(2)}(t) = \frac{\left\langle I\left( t_{0} \right)I\left( t_{0} + t \right) \right\rangle\,}{\left\langle I\left( t_{0} \right) \right\rangle^{2}}

```
waarbij $I(t)$ de intensiteit van het licht is op tijdstip $(t)$ en
de hoekhaken $\left\langle \right\rangle\$ gemiddelde waarden
aangeven.

De intensiteiten $I\left( t_{0} \right)$ en
$I\left( t_{0} + t \right)$ in de correlatiefunctie staan voor de
gemeten intensiteit op twee verschillende tijdstippen. De intensiteit
kan worden gezien als het aantal fotonen dat in een korte tijdsperiode
door de detector wordt waargenomen, of meer algemeen, het vermogen dat
door de detector wordt ontvangen per oppervlakte-eenheid.

Dus voor twee verschillende detectoren, die respectievelijk een
intensiteit $I_{1}$ en $I_{2}$ meten, zou de correlatiefunctie als
volgt kunnen worden uitgedrukt:

```{math}
:label: 2
g^{(2)}(t) = \frac{\left\langle I_{1}\left( t_{0} \right)I_{2}\left( t_{0} + t \right) \right\rangle\,}{\left\langle I_{1}\left( t_{0} \right) \right\rangle\left\langle I_{2}\left( t_{0} + t \right) \right\rangle}

```

Hierbij worden de gemeten intensiteiten op twee verschillende momenten
(of posities) gecorreleerd en vergeleken met de *verwachte waarden* van
de intensiteiten op zichzelf.

Hierbij kan *t* een kleine tijdsvertraging zijn waarbinnen je meet. Er
wordt getracht *t* zo klein mogelijk te houden, deze is afhankelijk van
de snelheid van de detector en de verwerking van de data.

- Als *t=0*, meet je de gelijktijdige correlatie tussen de twee
  detectoren. Dit betekent dat je kijkt naar hoe vaak beide detectoren
  tegelijk een foton detecteren.

- Als *t≠0*, introduceer je een tijdsvertraging tussen de twee metingen
  en kijk je hoe de waarschijnlijkheid verandert om een foton op
  verschillende tijdstippen op de twee detectoren te detecteren.

Omdat bovenstaande formule niet erg intuïtief en praktisch is, maken we
gebruik van dit verband:

```{math}
:label: 3
\mathbf{\,}\mathbf{g}^{\left( \mathbf{2} \right)}\left( \mathbf{t} \right)\mathbf{=}\frac{\mathbf{aantal\, coïncidenties}}{\mathbf{verwacht\, aantal\, coïncidenties\,}}\mathbf{=}\frac{\mathbf{N}_{\mathbf{A\& B}}}{\mathbf{N}_{\mathbf{verwacht}}}

```

Een coïncidentie is een gelijktijdige gebeurtenis of een gebeurtenis
binnen de tijdsvertraging, in andere woorden: Dat een foton gelijktijdig
wordt gemeten bij detector A en B.

Het verwachte aantal coïncidenties kan als volgt worden berekend:

```{math}
:label: 4
\mathbf{N}_{\mathbf{verwacht}}\mathbf{=}\left( \frac{\mathbf{N}_{\mathbf{A\,}}\mathbf{\cdot}\mathbf{N}_{\mathbf{B}}\mathbf{\,}}{\mathbf{T}} \right)\mathbf{\cdot}\mathbf{\Delta}\mathbf{t}

```
Waarin $N_{A}$ en $N_{B}$ het totaal aantal gemeten fotonen is in
detector A en B, $T$ de totale meettijd is, en $\Delta t$ de
tijdsvertraging is.

### Betekenis van de waarde van $g^{(2)}(t)$

1\. $g^{(2)}(0) = 1$: Dit betekent dat er geen correlatie is tussen
de fotonen op verschillende momenten of detectoren. Dit komt
bijvoorbeeld voor bij coherent licht zoals dat van een ideale laser,
waarbij de fotonen een ***Poissonverdeling*** volgen.

2\. $g^{(2)}(0) < 1$: Dit wordt geassocieerd met antibunching, wat
betekent dat fotonen de neiging hebben om niet tegelijkertijd
gedetecteerd te worden. Dit is een kenmerk van quantumlicht zoals dat
van een enkele, losse fotonenbron. In dit geval is de waarschijnlijkheid
om twee fotonen tegelijk te detecteren lager dan de kans om
afzonderlijke fotonen te detecteren.

3\. $g^{(2)}(0) > 1$: Dit wijst op bunching, waarbij fotonen de
neiging hebben om samen te komen. Dit komt vaak voor bij incoherent of
thermisch licht (bijvoorbeeld licht van een gloeilamp), waarbij fotonen
de neiging hebben om in groepen te komen. De waarschijnlijkheid om twee
fotonen tegelijk te detecteren is hoger dan verwacht op basis van
onafhankelijkheid.

4\. $g^{(2)}(grote\, t) \rightarrow 1$: Wanneer de tijdsvertraging
*t* groot is, wordt de correlatie kleiner en convergeren alle bronnen
naar $g^{(2)}(t) = 1$, wat betekent dat er geen correlatie meer is
tussen de fotonen op zeer verschillende tijdstippen.

$\rightarrow$ Waarom is dat denk je?

### Toepassingen van het HBT-experiment

In het originele HBT-experiment werd deze correlatiefunctie gebruikt om
aan te tonen dat fotonen van thermische bronnen (zoals sterren) bunching
vertonen, d.w.z. dat fotonen vaker tegelijk worden gedetecteerd dan
toevallig zou gebeuren. Dit bevestigde dat licht van thermische bronnen
niet gelijkmatig verdeeld is in tijd, maar eerder in "groepen" komt.

Ook met klassieke golfoptica kan dit gedrag worden verklaard aan de hand
van het samenkomen van golven van incoherente bronnen.

In moderne quantumoptica wordt $g^{(2)}(t)$ veel gebruikt om te
testen of een lichtbron losse, enkele fotonen uitzendt (antibunching) of
klassiek licht uitzendt (coherent of incoherent licht). Bijvoorbeeld,
voor een enkele fotonenbron geldt $g^{(2)}(0) = 0$ , wat betekent
dat de kans om twee fotonen tegelijkertijd te detecteren exact nul is.

Met klassieke golfoptica is dit verschijnsel niet te verklaren, hiervoor
werkt alleen een quantumverklaring.

<img src="./media/himage2.png" style="width:6.26042in;height:1.8125in" />

In de afbeelding is het verschil te zien tussen *g<sup>2</sup>(t) \< 1*
(groen), *g<sup>2</sup>(t) = 1 (rood), g<sup>2</sup>(t) \> 1 (blauw),
waarbij geldt t = de afgebeelde* $\tau$*.*

Afbeelding by Ajbura - Vectorised version of File:Photon bunching.png,
CC BY-SA 4.0, <https://commons.wikimedia.org/w/index.php?curid=73299604>

## Materiaal

Ons experiment bestaat uit:

- Laserdiode

- ND-filter wiel - ND filter (neutral density – grijsfilter), filtert
  als een zonnebril de intensiteit van het laserlicht met instelbare
  factoren tot een minimale transmissie van 10<sup>-4</sup>.

- Beamsplitter

- Single foton detectoren (2 stuks)

- Time-tagger, die van elk gedetecteerd foton de tijd labelt.

- Software om de Time-tagger uit te lezen.

<img src="./media/himage3.jpg" style="width:5.7875in;height:4.34306in"
alt="Afbeelding met elektronica, machine, Elektronische engineering, overdekt Automatisch gegenereerde beschrijving" />Foto’s
opstelling:

<img src="./media/himage4.jpeg" style="width:5.55208in;height:4.18472in"
alt="Afbeelding met elektronica, Elektrische bedrading, Elektronische engineering, kabel Automatisch gegenereerde beschrijving" />

<img src="./media/himage5.jpeg"
style="width:2.78125in;height:3.68991in" /><img src="./media/himage6.jpeg"
style="width:4.65731in;height:3.51042in" />

In bovenstaande foto’s is te zien:

1.  Opstelling met zij- en

2.  Bovenaanzicht (met linksboven de timetagger)

3.  Een single photon detector

4.  De beamsplitter met rechtsdaarvan het ND-filter wiel

PS: De voedingen zijn hierbij niet aangesloten, ook ontbreekt de
behuizing voor complete verduistering.

## Uitvoering

### Veiligheid

Let bij de uitvoering op de veiligheid: Van laserlicht kun je blijvend
blind raken. Ondanks dat deze laser is geselecteerd om mee te werken
zonder extra veiligheidsmaatregelen wordt er toch geacht rekening te
houden met de standaard afspraken wanneer je werkt met laserlicht:

- Zorg dat je nooit rechtstreeks in de laser kijkt of anderen in het
  gezicht schijnt.

- Kijk ook uit met strooi- of gereflecteerd licht.

- De laser wordt dan ook niet gedemonteerd.

### De uitvoering in stappen:

1.  Stel het filter wiel in. (Start met 6 is zwakste, vervolgens 1, 2,3,
    4, 5 sterkste.)

2.  Controleer de opstelling.

3.  Sluit de verduisterende behuizing.

4.  Schakel de voedingen aan van de laser en detectoren.

5.  Sluit de USB aan.

6.  Start de Thorlabs software op (EDU-QOP1.vi) - negeer de foutmelding
    betreffende de KLD101 laser controller (die hebben we niet).

7.  Selecteer het HBT tabblad.

8.  Selecteer de gewenste Measurement Time linksboven (kies om te testen
    de standaard 60 seconden).

9.  Start Measurement (Pop up “Please switch on the laser” – zet de
    laser handmatig aan met het knopje op de USB connector bij het
    stopcontact, het lampje zal gaan knipperen en vervolgens gaan
    branden. De “Laser Satus” in de software zal “OFF” blijven.)

10. Maak een screenshot (windowstoets+shift+s).

11. Noteer het aantal gemeten coïncidenties, het aantal counts bij
    detector A en bij B en de berekende waarde voor *g<sup>2</sup>(0)*.

12. Maak nu een meetplan naar gelang hoeveel tijd je hebt voor dit
    experiment. Met filter 6 en 1 heb je relatief snel data, bij de
    andere filters duurt het veel langer omdat deze veel meer
    absorberen. Het doel kan zijn te onderzoeken of laserlicht uit
    enkele, losse fotonen bestaat of niet. Je kunt ook het laserlicht
    vergelijken met incoherent licht.

13. Voer dit meetplan uit.

***Opmerkingen: Zet voor het openen de sensoren en laser uit met de knop van het stekkerblok. De sensoren zijn zeer gevoelig voor te veel licht. Het
filter moet dan ook ten-allen-tijde voor de laser blijven staan als deze aanstaat, anders gaan de heel dure sensors kapot...***

<img src="./media/himage7.jpg"
style="width:4.70457in;height:2.64583in" />

Afbeelding: Screenshot van een meting

## Resultaten

Controleer van minstens één meting de door de software berekende waarde
van *g<sup>2</sup>(0)* door deze waarde zelf uit te rekenen met formules
(3) en (4). De tijdsvertraging van deze meetapparatuur is 5 ns. Noteer
je berekening en vergelijk je uitkomst.

 
## Conclusie

Geef hieronder je conclusies met betrekking tot de uitkomsten (de
resultaten) en het doel van de proef.

Kun je nu de vorm van de grafieken van je screenshots verklaren?

Wat gebeurt er als je veel langer meet?

## Ideeën en bronnen:

### Onderzoeksvragen PWS:

Hoe werkt een laser?

Wat is een Poissonverdeling en gedraagt laserlicht zo?

Is laserlicht een quantumlichtbron? En bestaat licht uit losse fotonen?

Gebruik hierbij de volgende video:

<div style="display: flex; justify-content: center;">
<div style="position: relative; width: 70%; height: 0; padding-bottom: 56.25%;">
<iframe width="560" height="315" src="https://www.youtube.com/embed/NVqT2Gbrvxs?si=kqeIX7P6uh7-dniM" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
</div>
</div>

In deze video wordt de oorspronkelijke tweede orde correlatiefunctie met
de intensiteitsvariabelen uitgelegd (formule 1):

<https://youtu.be/gE-gji46qEc?si=zOEEoTLkuUOsBFYm>

Er zijn ook **documenten** beschikbaar met meer uitleg en achtergrond informatie.
