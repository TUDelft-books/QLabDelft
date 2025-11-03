# Electronen diffractie
__in progress__

## Inleiding
In de klassieke natuurkunde bestaat een hard onderscheid tussen materie (deeltjes) als atomen en elektronen, en golven als licht. De quantummechanica dwingt ons dit onderscheid los te laten en te accepteren dat van een object onder bepaalde omstandigheden het golfkarakter en onder andere omstandigheden juist het deeltjeskarakter op de voorgrond treden.
Het doel van dit experiment is om uit het buigingspatroon (een golfverschijnsel) van elektronen die bij hoge snelheid invallen op een kristalrooster de materiegolflengte van de elektronen af te leiden.

## Theorie
Om je goed voor te bereiden op het experiment wordt eerst de theorie bestudeerd. De ontwikkelingen in de scheikunde (o.a. het ontwerp van het periodiek systeem), de ontdekking van het elektron en de ontrafeling van de atoomstructuur eind 19e eeuw leidden natuurkundigen tot het idee dat materie op atomaire schaal moest worden opgevat als microscopische “deeltjes” met bijbehorend mechanisch gedrag (b.v. botsingen, krachtenwerking). Iets heel anders was licht, dat volgens de elektromagnetische theorie van
Maxwell moest worden gezien als een golfverschijnsel.
<br>
In de vroege 20e eeuw werd echter duidelijk dat licht uit ”pakketjes” energie (fotonen) bestaat. Het foto-elektrisch effect (vrijmaken van elektronen door licht) en het Comptoneffect (niet-elastische botsing van licht met elektronen) konden hiermee verklaard worden. Op basis van elementen uit de (speciale) relativiteitstheorie (zie de Appendix) stelde Louis de Broglie dat deeltjes niets anders zijn dan zeer gelokaliseerde (energie)pakketjes, die daarom -mits in de juiste omstandigheden gebracht ook een golfkarakter kunnen vertonen. 
<br>
Het bewijs voor het golfkarakter van elektronen en de geldigheid van de hypothese van De
Broglie werd geleverd door elektronen sterk te versnellen en daarna op een kristalrooster te schieten. Het blijkt dat achter het kristal dan buigingspatronen worden waargenomen, zoals je die misschien kent van röntgenstraling die op een kristalrooster invalt (Braggverstrooiing) of zichtbaar licht dat op een tralie of een CD invalt. Tegenwoordig wordt dit effect gebruikt in transmissie-elektronmicroscopie (TEM) als techniek om de atomaire structuur van materialen te onderzoeken. In dit experiment bekijk je zelf het buigingspatroon van elektronen, en bepaal je hieruit de golflengte van de elektronen.

### Impuls en de materiegolflengte
Impuls is een belangrijk begrip in de natuurkunde omdat het de grootheid is die verandert als er op een object een kracht wordt uitgeoefend. Voor een object met massa $m$ en snelheid $v$ wordt de impuls $p$ gegeven door $p = mv$.
De Broglie liet op basis van de speciale relativiteitstheorie zien dat de impuls van een foton gegeven wordt door 
<br>
$p = \frac{h}{\lambda}$ (1)
<br>
Hier is $h$ de constante van Planck, en $λ$ de golflengte van het foton (licht). In de Appendix kun je nalezen hoe een massaloos object als het foton toch een impuls kan hebben. De Broglie liet vervolgens zien dat voor objecten met massa de klassieke uitdrukking voor de impuls gebruikt kan worden om een zogenaamde materie-golflengte te berekenen (mits de snelheid van het object niet te dicht bij de lichtsnelheid ligt).

### Elektronen versnellen
Zoals je in verkennende berekeningen in opgave 1 en 2 zult zien, moet een licht object als
het elektron een hoge snelheid krijgen om golfgedrag te vertonen. Omdat een elektron
een geladen deeltje is, ligt het voor de hand om het te versnellen door middel van een
spanningsverschil. De potentiële energie die vrijkomt als een elektron met lading e een
spanningsverschil V ondergaat is eV.

>Opdracht 1: Impuls en materiegolflengte
>1. Geef allereerst een voorbeeld van een fysische situatie waarin een elektron zich manifesteert als deeltje.
>2. Geef een uitdrukking voor de materiegolflengte van een deeltje met massa $m$ op basis van de klassieke uitdrukking voor de impuls.
>3. Geef een uitdrukking voor de (niet direct meetbare) snelheid $v$ van een elektron dat versneld wordt door een spanningsverschil U. Stel hiertoe $E_{elek}=qU=eU$ gelijk aan $E_{k}=\frac{1}{2}mv^2$. Substitueer dit resultaat in de uitdrukking bij de vorige vraag om de uitdrukking $\lambda = \frac{h}{\sqrt{2meU}}$.
>4. Bereken ter illustratie de snelheid v van een elektron dat versneld wordt met een spanning $U=3 kV$, en de impuls $p$ en de golﬂengte $λ$ van het elektron in dat geval.

### Meetprincipe
#### Diffractie
De materiegolflengte-hypothese van De Broglie is experimenteel te controleren door na te gaan of bij materiedeeltjes zoals elektronen golfverschijnselen optreden. Diffractie is zo’n typisch golfverschijnsel. Wanneer zichtbaar licht oftewel elektromagnetische straling op een object invalt, zal aan de randen van het object afbuiging of diffractie plaatsvinden. Dit
is een demonstratie van het golfkarakter van licht. Bij inval op een tralie zal onder zekere hoeken een hoge lichtintensiteit worden waargenomen, die ontstaat doordat de bijdragen uit opeenvolgende tralieopeningen voor die hoeken constructief interfereren. Deze hoeken hangen samen met de golfengte van het licht.

#### Bragg-verstrooiing
Voor röntgenstraling kan men ook diffractie waarnemen. De golflengte van röntgenstraling is echter typisch 0.1 nanometer, een factor 1000 kleiner dan die van zichtbaar licht. Een kristalrooster kan in dat geval goed dienst doen als tralie. Men spreekt dan vaak van Bragg-verstrooiing. De regelmatige structuur van de atomen in het kristal zorgt dan voor de constructieve interferentie. De eenvoudige (maar niet helemaal complete) interpretatie is geschetst in Figuur 1. Bij een gegeven golflengte zal een kristal onder bepaalde invalshoeken dus werken als een spiegel.

```{figure} ./media/diffractie/figuur1.png
    :width: 500
    :name: figuur1
    :align: center
Schets van Bragg-verstrooiing in een tweedimensionaal, vierkant kristalrooster
met roosterafstand d. In het kristal zijn kristalvlakken te herkennen: vlakken waarin op regelmatige afstanden atomen (zwarte bolletjes) liggen. Deze kristalvlakken kun je opvatten als deels reflecterende vlakken (“spiegels”). In blauw zijn golfpaden weergegeven die invallen onder hoek $θ$. Reflecties afkomstig van opvolgende kristalvlakken zullen constructief interfereren als het weglengteverschil $2l$ een geheel aantal golflengtes ($n$ keer $λ$) is.
Let op! Hoewel het verleidelijk is om alleen de “hoofdassen” (horizontaal en verticaal) als kristalvlakken te zien, zijn er oneindig veel “vlakken” te definiëren, elk met eigen onderlinge afstand. Met de lange stippellijnen is een voorbeeld geschetst.
```
>Opdracht 2: Diffractie en de wet van Bragg
>Beantwoord de volgende vragen
>1. Zoek in je natuurkundeboek of elders informatie over de werking van een tralie en over Bragg-verstrooiing.
>2. Laat met een afleiding aan de hand van de tekening in Figuur 1 zien dat de bijdragen die reflecteren op opeenvolgende  kristalvlakken constructief interfereren als de wet van Bragg 
<br>
$2d sin(θ) = nλ$ (2)
<br>
geldt. Hier is $d$ de afstand tussen de kristalvlakken en $θ$ de hoek waaronder de golven invallen. Hint: bereken eerst de weglengte $l$, en geef vervolgens aan hoe $2l$ relateert aan de golflengte $λ$. Het gehele getal $n$ wordt wel de orde
van het diffractiemaximum genoemd. Leg uit wat het verschil is tussen een diffractiemaximum bij n=1 en n=2.
>3. Laat zien dat er alleen Bragg-verstrooiing optreedt wanneer $λ ≤ 2d$. Daarom lukt het dus niet om met zichtbaar licht dit experiment te doen. De materiegolf-hypothese is kwalitatief te toetsen door materiedeeltjes zoals elektronen te laten invallen op een kristalrooster. Het optreden van diffractie is dan een bewijs voor het golfkarakter van de elektronen. De verstrooiingshoeken bevatten via de wet van Bragg informatie over de golflengte van de elektronen. Hiermee kan de hypothese ook kwantitatief getoetst worden.

#### Bragg-verstrooiing aan grafiet
In dit experiment wordt grafiet gebruikt om aan te verstrooien, dit is een hexagonale structuur van koolstofatomen. Figuur 2a) toont een deel van het kristal. Het “wondermateriaal” grafeen dat recent veel in het nieuws was, is één laagje van dit grafiet. 
De afstand tussen twee vlakken is $d3 = 3,354 · 10^−10 m$. De kristalvlakken in het hexagonale vlak waarvan in dit experiment een zichtbare diffractie afkomstig is, zijn met stippellijnen aangegeven in Figuur 2b. Het is een aardige oefening in meetkunde om te laten zien dat de afstanden tussen de vlakken gelijk zijn aan $d1 = 1,231·10^−10 m$ en $d2 = 2,132·10^−10 m$.
Het dunne grafietfolie waaraan verstrooiing plaatsvindt, is niet één (perfect) kristalrooster. Het is een verzameling hele kleine kristalletjes, die ten opzichte van elkaar willekeurig georiënteerd liggen. 
Het grote voordeel hiervan is dat het eenvoudiger wordt om een diffractiepatroon waar te nemen.
In Figuur 3 is de geometrie van het experiment weergegeven. De elektronen naderen het
grafietfolie als een evenwijdige bundel. Veel van de kleine kristallen in het grafietfolie
zullen zo liggen dat niet voldaan wordt aan de wet van Bragg; maar omdat er altijd wat kristalletjes te vinden zijn die wel goed liggen, zal er altijd diffractie optreden. 
De relevante kristalvlakken liggen onder een hoek $θ$ ten opzichte van de invallende bundel,
de verstrooide elektronen (die voor de duidelijkheid dus door de zeer dunne folie heen
gaan) maken dus een hoek $2θ$ met de invallende bundel. We weten dat
<br>
$tan(2θ) = /frac{r}{l}$  (3)
<br>
zoals weergegeven in figuur 1.
We maken nu gebruik van het gegeven dat $2sin(θ) ≈ tan(2θ)$ 
(zie de Appendix voor een korte bespreking van de effecten van deze benadering)
en vergelijking 2 om af te leiden dat
$d\frac{r}{l} = nλ$  (4)

```{figure} ./media/diffractie/figuur2.png
    :name: figuur2
    :align: center
Figuur 2: a) Kristalrooster van grafiet. Elk zwart bolletje is een koolstofatoom. In de
(horizontale) vlakken liggen de atomen op een relatief kleine afstand van 1.421 · 10−10m;
de afstand tussen de vlakken is met d3 = 3, 354 · 10−10m relatief groot. b) Hexagonaal
rooster van ´e´en laagje grafiet. Met rode en zwarte stippellijnen zijn de kristalvlakken
waaraan meetbare Bragg-verstrooiing plaatsvindt weergegeven. De afstanden tussen die
d1 = 1, 231 · 10−10m en d2 = 2, 132 · 10−10m.
```

```{figure} ./media/diffractie/figuur3.png
    :name: figuur3
    :align: center
Figuur 3: Geometrie van het experiment. Links: in het elektronenkanon worden elektro-
nen vrijgemaakt door verhitting van een kathode. Met enkele tussenliggende elektroden
wordt de elektronenbundel min of meer evenwijdig gemaakt. Het plaatje grafiet ligt op
de anode. In het grafiet zijn sommige kristallen (onder een voorbeeld uitvergroot) zo
georiënteerd dat aan de wet van Bragg Vgl.
2 wordt voldaan.
Ten opzichte van de
inkomende bundel maakt de vertrekkende elektronenbundel een hoek 2θ. Rechts: de elektronen komen aan op de wand van de vacuümbuis en zorgen op een afstand r van de rechtdoorgaande bundel voor fluorescentie. Deze fluorescentie kan met het oog worden
waargenomen.
```

>Opdracht 3: Bragg-verstrooiing aan grafiet
>Beantwoord de volgende vragen:
>1. Verklaar waarom in het waarnemingsvlak (een fluorescerend scherm) de diffractiemaxima te zien zijn als concentrische cirkels (Hint: kristallen kunnen ook gedraaid liggen ten opzichte van de doorsnede getekend in Figuur 3), en waarom het op deze manier mogelijk wordt om meerdere diffractiemaxima tegelijk waar te nemen.
>2. Een rekenvoorbeeld voor 3kV , waarvoor je bij opgave 1 al de golflengte hebt bepaald. De afstand tussen het kristal en het waarneemvlak (fluorescerend scherm) is gelijk aan $l = 13.5 cm$. Gegeven de afstanden d1, d2 en d3 tussen de verschillende vlakken, bij welke stralen r1, r2 en r3 verwacht je een orde n = 1 diffractiemaximum te zien?

## Opstelling
