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
$p = \frac{h}{lambda}$ (1)
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
    :width: 250
    :name: figuur1
    :align: center
Schets van Bragg-verstrooiing in een tweedimensionaal, vierkant kristalrooster
met roosterafstand d. In het kristal zijn kristalvlakken te herkennen: vlakken waarin op regelmatige afstanden atomen (zwarte bolletjes) liggen. Deze kristalvlakken kun je opvatten als deels reflecterende vlakken (“spiegels”). In blauw zijn golfpaden weergegeven die invallen onder hoek $θ$. Reflecties afkomstig van opvolgende kristalvlakken zullen constructief interfereren als het weglengteverschil $2l$ een geheel aantal golﬂengtes ($n$ keer $λ$) is.
Let op! Hoewel het verleidelijk is om alleen de “hoofdassen” (horizontaal en verticaal) als kristalvlakken te zien, zijn er oneindig veel “vlakken” te definiëren, elk met eigen onderlinge afstand. Met de lange stippellijnen is een voorbeeld geschetst.
```
