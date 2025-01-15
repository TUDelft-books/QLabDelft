# Franck-Hertz experiment
practicumhandleiding  
*Deze handleiding is deels overgenomen van de [Universiteit van Utrecht](https://nspracticum.science.uu.nl/Outreach/UP/Franck-Hertz/handleiding_Franck-Hertz.pdf).*

```{figure} ./media/franck/frank1.jpg
    :name: opstelling Frank
    :align: center 

Foto van de Franck-Hertz opstelling.
```

## Inleiding
Dit experiment werd voor het eerst gedaan in 1912 door James Franck en Gustav Hertz. Het is een sleutelexperiment van de quantummechanica, en Franck en Hertz kregen voor dit experiment de Nobelprijs voor Natuurkunde in 1925. 
Het Franck-Hertz experiment laat zien dat de energie die elektronen hebben als ze uit een atoom worden vrij gemaakt gequantiseerd is. Dat betekent dat de bindingsenergie van elektronen niet continu kan zijn, maar alleen specifieke waardes kan hebben. Deze observatie kan goed verklaard worden met het Bohr-model van atomen. 
Het mechanisme wat aan dit experiment ten grondslag ligt wordt nog steeds gebruikt in hoe TL-buizen werken. 

## Theorie
Om je goed voor te bereiden op het experiment wordt eerst de theorie bestudeerd. 

```{figure} ./media/franck/frank2.svg
   :width: 50%
   :name: bohrmodel
   :align: center
 Bohrmodel (bron: JabberWok uit en.wikipedia.org (CC))
```

### Bohrmodel 
In het Bohrmodel van een atoom bestaat een atoom uit een positief geladen kern met eromheen de negatief geladen elektronen. De elektronen in het Bohrmodel kunnen alleen in specifieke banen bestaan. Deze banen verschillen in hoeveel energie er nodig is om het elektron er uit te halen. We noemen de banen daarom ook wel energieschillen. Zie figuur. De energieschillen hebben een quantumgetal n. De kern heeft een lading van +Ze met Z het aantal protonen in de kern en e de elementaire lading. 



>#### Opdracht 1: Energie en golflengte 
>Als een elektron uit een hogere schil terug valt in een lagere schil verliest het elektron energie. 
<br>
>a) Welke golflengte (in nm) heeft licht met een energie van 4.9 eV? <br>
>b) Verwacht je deze kleur te kunnen zien? Zo ja, welke kleur is het? 


# Experiment 1: Franck en Hertz met kwik

In dit experiment ga je bewijzen dat elektronen in kwikatomen alleen bij specifieke energie voorkomen. 

### Elektron-atoom botsingen
In de klassieke mechanica van Newton geeft een botsend object (kinetische) energie door aan het gebotste object. Bijvoorbeeld: als de witte biljartbal tegen de rode stoot dan blijft na de elastische botsing de witte stil liggen op de plek van de botsing en beweegt de rode verder. Dit is een elastisch botsing. Kinetisch energie van de witte biljartbal wordt omgezet in kinetische energie van de rode biljartbal. 
Een ander type botsing is een inelastische botsing. Dit is wanneer de kinetische energie wordt omgezet in een ander type energie, bijvoorbeeld warmte, of geluid, of het kreukelen van een auto. 
Elektronen kunnen ook een elastische of inelastische botsingen met atomen hebben. Bijvoorbeeld wanneer een elektron beweegt in een elektrisch veld, en een atoom in de gasfase op het pad tegen komt. 
Bij een elastische botsing veranderen de snelheden van het atoom en het elektron. Omdat het atoom zo veel zwaarder is dan een elektron zal het atoom nauwelijks van richting of snelheid veranderen na een elastische botsing. 
Bij een inelastische botsing wordt de kinetische energie van het elektron geabsorbeerd door het atoom, waardoor het atoom in een aangeslagen toestand komt. De aangeslagen toestand betekent dat een elektron van het atoom zelf in een hogere baan terecht is gekomen. In dit experiment zul je zien dat alleen elektronen met een bepaalde energie een inelastische botsing kunnen hebben met kwikatomen. Dit is een gevolg van de elektron-schillen van atomen en is niet te verklaren met klassieke mechanica, maar wel met quantummechanica! 

```{figure} ./media/franck/frank5.jpg
    :name: kwik
    :align: center 
 De kwikbuis, de bolletjes kwik zijn zichtbaar ([bron](https://lampes-et-tubes.info/dt/dt029.php?l=) (copyleft))
```

```{figure} ./media/franck/frank3-edit.png
    :name: schema
    :align: center 
 Het schakelschema (aangepast, van [bron](https://physics.unimelb.edu.au/lecture-demonstrations/modern-physics/na-19-franck-hertz-experiment))
```

In de figuur staat de stroomkring van de Franck-Hertz opstelling getekend. In het filament (tussen $F$ en $K$), komen elektronen vrij door genoeg spanning $U_F$ op het filament te zetten. Het filament gaat dan gloeien, en elektronen uitzenden. G = Grid 1 fungeert hier als kathode $K$ ($U_K = 0 V$). Deze elektronen worden versneld met een versnelspanning $U_KA$ naar de anode $A$, die verbonden is met het het rooster (grid 2). Het elektrisch veld zorgt voor een elektrische kracht op elk elektron van: 

```{math}
:label: 1
F_{elek} = q \cdot E_{elek} = q \cdot \frac{U}{L}
```


met $F_{elek}$ de kracht op het elektron, $q$ de lading van het elektron, $E_{elek}$ de elektrische veldsterkte, $U$ de aangelegde spanning in Volt, en $L$ de afstand tussen $G$ en $A$. 
Deze kracht zorgt ervoor dat het elektron versnelt volgens de tweede wet van Newton: $F = ma$. Vervolgens komen de versnelde elektronen aan bij de emitter $E$ en wordt er een stroom gemeten. De tegenspanning $U_AE$ helpt ervoor te zorgen dat er geen elektronen per ongeluk bij de anode terecht komen, maar dat dit alleen elektronen zijn met voldoende snelheid. 


>#### Opdracht 2: Energie en botsen 
>Elektronen worden versneld in een elektrisch veld. Het elektrische veld leg je straks zelf aan door de spanning $U_KA$ en de tegenspanning $U_AE$ in te stellen. 
> <br>
>a) Als er een tegenspanning UGA van 1 V wordt aangelegd, hoeveel (kinetische) energie heeft een elektron dan nodig om toch de anode te bereiken op het moment dat het elektron door het rooster gaat? 
> <br>
>b) Na een botsing verliest een elektron energie, en zal dus langzamer bewegen. Als het elektron zich dan nog in het elektrisch veld tussen $G$ en $A$ bevindt zal het weer versnellen tot het of tegen het rooster aan botst, of erdoorheen gaat op weg naar de anode. Hoever moet een elektron bewegen voordat het weer 5 eV aan kinetische energie heeft bij een versnelspanning van 20 V? L is ongeveel 1 cm. Gebruik: 
>
> ```{math}
> :label: 1
> E = 5 eV = W = Fs = q\frac{V}{L}s
> ```
> met $E$ de energie van het elektron en $W = Fs$ de arbeid verricht door het elektrisch veld. 

## Uitvoering 
Je gaat nu aan de slag met de opstelling waarbij je eerst zal lezen over hoe de opstelling werkt en daarna een aantal proefmetingen zal uitvoeren. Op deze manier begrijp je goed hoe de opstelling werkt. Daarna ga je eigenlijke meting uitvoeren.

### De opstelling 
De opstelling bestaat uit de oven, een power supply (spanningsbron) en een een oscilloscoop, zie figuur 4. Bij de theorie heb je al een schematische tekening van de stroomkring in de opstelling gezien. Deze staat ook op de oven getekend. De draden zijn al goed aangesloten op de spanningsbron en de oscilloscoop. 

```{figure} ./media/franck/frank4.png
    :name: opstelling
    :align: center 
De Franck-Hertz opstelling (bron: 3Bscientific)
```

>#### Opdracht 3: Klaar zetten 
>De oven wordt straks heet en dan kun je deze lastiger verplaatsen. Zorg dus nu vast dat je goed naar binnen kunt kijken. 
>1. Zet de oven zo neer dat je de voorkant, waar de draden aangesloten zijn, en het raam om naar binnen kunt kijken goed kunt zien. 
>2. Zet de oven aan en stel te temperatuur in op 180 ◦C. Het duurt 5 tot 10 minuten voordat de temperatuur bereikt is. PAS OP: ook de buitenkant van de oven wordt heet! 
>3. Draai de volgende knopjes op de power supply helemaal naar links (naar 0): de filamentspanning, de spanning tot het eerste grid (deze wordt niet gebruikt), de start- en eind spanning voor de versnelspanning, en de tegenspanning. Het knopje rechtsonder is de sterkte van het totale signaal wat doorgestuurd wordt naar de oscilloscoop. Laat deze voor nu staan zoals die is (dus niet op 0!). 
>4. Zet de power supply (grijs-blauwe kast) met de knop achterop aan. Opstarten kan even duren.
>5. Zet de oscilloscoop aan. 
>6. Stel de oscilloscoop zo in dat signaal 1 op de x-as wordt weer gegeven en signaal 2 op de y-as (X-Y mode). Waarschijnlijk is dit al gebeurd. Eventueel doe je dit met het knopje Main en vervolgens op het scherm, selecteer met de knopjes net naast het scherm Time Base XY.

### Proefmeting 
Wanneer de oven is opgewarmd kan je beginnen met meten. De warme oven zorgt ervoor dat een klein druppeltje kwik wat in de vacuum buis zit verdampt. 



#### Opdracht 4: Proefmeting 
Met deze reeks proefmetingen leer de de oscilloscoop en de spanningsbron bedienen. 
1. Zet de filamentspanning op 6,0 V tot 6,5 V. Zie je het filament oplichten (oranje)? Het duurt tot 60 seconden voordat het filament stabiel op de gewenste spanning brandt. 
```{figure} ./media/franck/frank6.jpg
    :width: 250
    :name: filament
    :align: right 
Oranje gloeiend filament
```
2. Zet de tegenspanning (de uiterst rechtse knop) op 1.5 V. 
3. Zet de versnelspanning op manual met het zwarte knopje tussen de start- en eindspanningsdraaiknopjes (Acceleration) op de power supply. Draai nu langzaam de eindversnelspanning omhoog. Zie je een stipje bewegen op het scherm van de oscilloscoop? Tot welke spanning kun je gaan voordat je een plasma krijgt (het blauwe licht bovenin de buis)? 
Let op: Als je de spanning te hoog zet dan slaat de stroom door: er ontstaat een plasma. Je kunt zien als dit gebeurt is: dan licht het kwikplasma fel en helderblauw op. Zet dan de spanning weer lager en probeer dit te voorkomen. 
4. Op het scherm van de power supply zie je ook hoe veel stroom (nA) er gemeten wordt. Het maximale wat deze opstelling kan meten is 400 nA. Bij welke spanning krijg je nog net geen 400 nA (en ook nog geen plasma)? Dit is de spanning die je nu als eindsspanning wilt gebruiken. (vaak 30V).
5. De ingestelde spanning staat op de x-as op de oscilloscoop, en de stroom die gemeten wordt bij de anode A staat op de y-as. Op het scherm van de oscilloscoop zie je hoeveel V of mV één hokje is. Deze kan je aanpassen met de draaiknopjes Volts/Div. (De grote draaiknoppen onder vertical). Zet deze beiden op 1 V/div. 
6. Zet nu de versnelspanning op Ramp (Weer het zwarte knopje bij acceleration op de power supply). De power supply geeft nu heel snel achter elkaar een spanning van de ingestelde start- tot de ingestelde eindspanning. Als het goed is zie je op het scherm van de oscilloscoop nu een curve die lijkt op de figuur hieronder. 

```{figure} ./media/franck/frank8.jpg
    :name: resultaat
    :align: center 
De kenmerkende kwik curve
```

Als het goed is zijn je instellingen de volgende: 

```{figure} ./media/franck/frank7.jpg
    :width: 300
    :name: instellingen
    :align: center 
De instellingen van de power supply
```

#### Opdracht 5: Optimalisatie
Voor het meten straks is het handig om de curve optimaal in beeld te kunnen brengen. Als je curve er al mooi uit ziet dan kun je deze opdracht verder overslaan. 
<br>
Hieronder staan een aantal tips over het effect van bepaalde instellingen. Je bent vrij om hiermee te experimenteren en ook om nog andere instellingen te proberen. Let er wel op de je probeert om te voorkomen dat je een plasma krijgt. 
1. start- en eind versnelspanning: deze kan je vrij kiezen. Wil je veel pieken en dalen achter elkaar zien, of juist maar een paar? Wil je op 0 beginnen? (Let op: dit hangt ook samen met hoe je de oscilloscoop in stelt, daarmee kan je ook ‘inzoomen’). Probeer eens de start-versnelspanning aan te passen.
2. Wanneer de curve naar het maximum gaat (vlakke lijn bovenaan): Probeer dit te voorkomen: zet de eindversnelspanning lager! Als je toch meer pieken en dalen wilt kunnen zien, verander dan een andere instelling zodat je de eindspanning wel hoger kunt zetten zonder dit maximum te bereiken. 
3. Als de curve te steil of te vlak is: Dit kan je op verschillende manieren verbeteren: 
– Verander de Volts/Div van kanaal 2. Dit is het herschalen van de data die je meet. 
– Verander de tegenspanning. Hiermee verander je de meting zelf: je maakt het makkelijker of moeilijker voor elektronen om de anode te bereiken. 
4. Met de oscilloscoop kan je de weergave van je resultaten verbeteren. Zet de Volt/Div en Position van beide kanalen zo dat je curve goed in het midden en goed geschaald is. In het menu Display kan je ook het Type en Persist nog aanpassen. 

Na de theoretische voorbereiding en het verkennen van de opstelling kun je nu starten met de daadwerkelijke meting. 

#### Opdracht 6: Meting
1. Sluit de multimeter aan zoals op de foto hieronder: De zwarte draad van de GND van de multimeter sluit je aan op de K (kathode) van de power supply (gewoon er bovenin prikken). De rode draad van de V-aansluiting van de multimeter sluit je aan op de A (anode) van de power supply. <br>
Zet de multimeter met de witte knopjes onderaan op **V** en op **200**.

```{figure} ./media/franck/frank9.jpg
    :name: multimeter
    :align: center 
De instellingen van de multimeter
```
2. Zet het zwarte knopje van de Acceleration op Man. (Manual ipv Ramp) en draai de eindversnelspanning $U_Amax$ terug naar 0 Volt.
3. Draai nu geleidelijk de eindversnelspanning $U_Amax$ omhoog en kijk naar de $I_E$ in het blauwe display van de power supply: Wanneer deze waarde voor de eerste keer een maximum bereikt heeft (Waarschijnlijk is $U_A$ dan ongeveer 11 V), dan ben je bij de eerste piek van de typische curve gekomen (I stijgt voor de piek en daalt daarna). Ga verder en zoek het het eerste minimum (dal). Noteer de bijbehorende spanning $U_A1$. Ga vervolgens naar het volgende minimum, en noteer weer de bijbehorende spanning $U_A2$. Ga zo alle minima (dalen) af. 
4. Bereken vervolgens telkens het potentiaalverschil (het spanningsverschil) tussen de minima en noteer deze.
5. Bereken de gemeten elektron energie in eV en wat valt je op aan deze resultaten? 
6. Met een spectroscoop kan het uitgezonden spectrum van de kwiklamp worden onderzocht. Hieruit blijkt dat er een golflengte van 254nm wordt uitgezonden. is dit in overeenstemming met je resultaten?
7. Wat is nu de conclusie. 

**Schakel tenslotte de oven (voorop) en de power supply (achterop) en de multimeter (achterop) uit. **

# Experiment 2: Franck en Hertz met Neon

In dit experiment wordt het experiment uitgevoerd met een Neon buis. 
## Uitvoering
### De opstelling
In de opstelling wordt de oven met kwikbuis vervangen voor de opstelling met de Neon-buis. Zier hieronder de opstelling. De Neon-buis heeft dezelfde bouw en aansluitingen als de kwik-buis, maar bij deze buis gebruiken we het eerste grid wel.
<br>Volg onderstaande stappen:
```{figure} ./media/franck/frank10.jpg
    :name: Neon-opstelling 
    :align: center 
De opstelling met de Neon-buis
```

1. **Zorg er voor dat de over en power supply uit staan voor dat je ze loskoppelt.**
2. Sluit de groene draad op (beide) F aan.
3. Sluit de zwarte draard op (beide) K aan.
4. Sluit de rode draad op (beide) A aan.
5. Pak een extra rode draad en sluit deze op beide G's aan.
6. Sluit de zwarte coax kabel aan bovenop de buis en op de E op de power supply.
7. Controleer je opstelling
8. Draai alle draaiknoppen op power supply tegen de klok in (naar links - op nul).
9. Zet de power supply aan (hij start in Ramp mode en dat is goed).
10. Zet bij Acceleration de eindversnelspanning $U_Amax$ op 80 V.
11. Zet het Grid G op 9 V.
10. Draai de Filament spanning naar 8,4V en wacht 30 seconden om het filament de kans te geven om op te warmen. (Bij 9V heb je al een oranje gloed en dat wil je niet). 
```{figure} ./media/franck/frank13.jpg
    :name: Oranje-gloed 
    :align: center 
Onwenselijk oranje gloed zichtbaar tussen de grids
```
11. Het filament gloeit nu oranje, maar er is geen oranje gloed tussen de grids zichtbaar.
12. Geef met de Reverse Bias knop (de meest rechtse) tegenspanning, zodanig dat op de oscilloscoop de lijn bijna horizontaal wordt (circa 9 V). Zie ook hieronder.
```{figure} ./media/franck/frank11a.jpg
    :name: instellingen 
    :align: center 
De instellingen kun je hier controleren
```
```{figure} ./media/franck/frank11.jpg
    :name: Neon-vlak 
    :align: center 
Bijna horizontale lijn
```
13. Zet de versterker (de draaiknop in de driehoek rechtsonder) maximaal.
14. Je ziet dan onderstaande afbeelding in de oscilloscoop.
```{figure} ./media/franck/frank12.jpg
    :name: Neon-curve
    :align: center 
De Neon-curve
```

### Meting
1. Zet de power supply op Man. mode (manual), door de zwarte knop bij Acceleration in te drukken.
2. Sluit de multimeter weer aan op de K en A, mocht je die losgemaakt hebben en zet deze aan met de knop achterop. Zie de foto hieronder.
```{figure} ./media/franck/frank9.jpg
    :width: 50%
    :name: multimeter
    :align: center 
    :caption: De instellingen van de multimeter
```
3. Draai bij Acceleration de eindversnelspanning $U_Amax$ naar 0 V terug. 
4. Draai deze spanning vervolgens langzaam op totdat je het eerste maximum hebt gevonden van de neon-curve ({numref}`Neon-curve`) hebt gevonden. Kijk hiervoor naar de $I_E$ in het blauwe display van de power supply.
5. Noteer de bijbehorende spanning die de multimeter aangeeft.
6. Draai op dezelfde manier verder naar het tweede en derde maximum en noteer ook deze spanningen.
7. Bereken vervolgens telkens het potentiaalverschil (het spanningsverschil) tussen de maxima en noteer deze.
8. Bereken de gemeten elektron energie in eV en wat valt je op aan deze resultaten? 
9. We kozen er hiervoor de spanning bij de maxima te meten ipv bij de minima omdat wat makkelijker te meten is. Terwijl juist bij de minima de meeste elektronen inelastisch botsen en de Neon atomen naar een aangeslagen toestand gaan. Is hier een verschil tussen?
7. Wat is nu de conclusie?



## extra theoretische uitleg
bron: [UCSB Phyics Remote Labs](https://ilg.physics.ucsb.edu/Courses/RemoteLabs/?linkfile=FH_Remote#:~:text=Video%201-,Theory,the%20anode%20and%20the%20cathode). 

### Het Franck-Hertz-experiment: uitleg en interpretatie

Het Franck-Hertz-experiment genereert vrije elektronen door een kathode te verhitten in een vacuümbuis. Deze elektronen worden versneld richting een anode door een spanningsverschil $U_KA$ tussen de kathode en anode. Terwijl de elektronen bewegen, krijgen ze kinetische energie $eV_A$, tenzij ze onderweg botsen met een ander deeltje en een inelastische botsing ondergaan.

Hoewel de buis luchtledig is, is deze niet volledig leeg. Er bevindt zich een kleine hoeveelheid kwikdamp in de buis. Kwik is vloeibaar bij kamertemperatuur, maar door de buis te verhitten wordt een lage druk gas van kwikatomen gevormd tussen de kathode en anode. Bewegende elektronen kunnen botsen met deze kwikatomen en kinetische energie verliezen.

#### Elastische versus inelastische botsingen
- **Elastische botsingen:** Hierbij verandert de kinetische energie van het elektron nauwelijks, omdat een kwikatoom veel zwaarder is dan een elektron.
- **Inelastische botsingen:** Hierbij verliezen elektronen een specifiek hoeveelheid energie, gelijk aan het verschil tussen energieniveaus van het kwikatoom.

#### Energieovergangen in kwik
Kwikatomen kunnen alleen discrete hoeveelheden energie absorberen, zoals de excitatie-energie van **4,9 eV** (het energieverschil tussen de grondtoestand en een aangeslagen toestand). Dit betekent dat elektronen alleen energie verliezen als hun kinetische energie groter is dan of gelijk is aan deze waarde. Dit discrete gedrag is een fundamenteel kenmerk van kwantummechanica.

### Hoe werkt het experiment?
Door de spanning geleidelijk te verhogen, meet je het aantal elektronen dat de anode bereikt. Zodra $eV_A = 4,9 eV$, hebben de elektronen voldoende energie om een kwikatoom te exciteren en verliezen ze kinetische energie. Hierdoor ontstaat een daling in de stroom naar de anode. Deze spanning $U_1$ wordt de eerste excitatiespanning genoemd.

Bij hogere spanningen kunnen elektronen meerdere inelastische botsingen ondergaan:
- Bij $U_A > 2U_1$ kunnen elektronen twee botsingen ondergaan.
- Bij $U_A > 3U_1$ zijn drie botsingen mogelijk, enzovoort.

Dit leidt tot een patroon van opeenvolgende dalingen in de gemeten stroom bij spanningen van $U_1, 2U_1, 3U_1, \dots$.

### Conclusie
Het Franck-Hertz-experiment laat zien dat kwikatomen energie absorberen in discrete stappen, wat een direct bewijs is van de kwantummechanische theorie. Dus ondersteunt het experiment duidelijk de kwantisatie van energieniveaus.

### Video uitleg 
<div style="display: flex; justify-content: center;">
<div style="position: relative; width: 70%; height: 0; padding-bottom: 56.25%;">
<iframe width="560" height="315" src="https://www.youtube.com/embed/Jckgt5X9p60?si=8oqSXR1DZ1IqeKvk" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
</div>
</div>

<br>
<br>

<div style="display: flex; justify-content: center;">
<div style="position: relative; width: 70%; height: 0; padding-bottom: 56.25%;">
<iframe width="560" height="315" src="https://www.youtube.com/embed/Y2gaTEWn2b8?si=EBG9CI54X-Vtjsl7" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>
</div>
</div>