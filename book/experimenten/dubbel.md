# Dubbelspeet Experiment

## Inleiding
Het dubbelspleet experiment is één van de fundamentele experimenten van Quantum Mechanica. Het demonstreert de *dualiteit* van fotonen: Fotonen (licht) kunnen zich gedragen als een golf, maar ook als een deeltje.
In dit experiment kijken we eerst naar het (klassieke) golfgedrag van licht bij een dubbelspleet en vervolgens naar het gedrag van enkele, losse fotonen bij een dubbelspleet. 

## Doel
Doel van dit experiment is om een verklaring te vinden voor de de eigenschappen van het dubbelspleetpatroon. Daarnaast wordt het dualiteitsprincipe gedemonstreerd.
In experiment 1 wordt de spleetbreedte en afstand bepaald, in experiment 2 het dubbelspleetpatroon met enkele, losse fotonen.

## Theorie
### Enkele spleet diffractie
Wanneer licht door een enkele spleet valt, treedt er diffractie op. Doordat de spleetbreedte niet oneindig smal is, zal er een patroon van minima en maxima ontstaan. Dit diffractie patroon is hieronder zichtbaar. Dit wordt ook wel een Fraunhofer diffractiepatroon genoemd.

```{figure} ./media/dubbel/single-slit.svg
    :width: 350
    :name: single slit diffraction
    :align: center
By DL6ER - Own work, CC BY-SA 4.0, https://commons.wikimedia.org/w/index.php?curid=34610901
```

Bij een enkele spleet met spleetbreedte $a$ (in de figuur hierboven $d$), zal elk licht-front in de spleet *destructief* interfereren met een licht-front dat een halve spleetbreedte verder is: Een licht-front dat bij 0 (midden) is in de figuur hieronder, zal destructief interfereren met een licht-front bovenaan de spleet, op afstand $\frac{a}{2}$ (en op afstand $\frac{-a}{2}$).
Er zullen dan dus **minima** ontstaan als geldt:


$n \cdot \frac{\lambda}{2} = \frac{a}{2} \cdot sin(\Theta)$ 

oftewel:

$n \cdot \lambda = a \cdot sin(\Theta)$ 

Hier is:
* n een geheel getal dat de orde van de minima aangeeft,
* $\lambda$ de golflengte,
* $a$ de spleetbreedte,
* $\Theta$ de hoek waaronder destructieve interferentie plaatsvindt.


```{figure} ./media/dubbel/Singleslithuygens.jpg
    :width: 250
    :name: single slit description
    :align: center
By WikicyclopediaUser - Own work, CC BY-SA 4.0, https://commons.wikimedia.org/w/index.php?curid=72817302
```

### Dubbele spleet interferentie

Wanneer licht door een dubbelspleet valt, treedt er ook diffractie op. Dit diffractiepatroon wordt veroorzaakt door de spleetbreedte, maar ook door de afstand tussen de spleten. 
```{figure} ./media/dubbel/dubbelpatroon.jpg
    :width: 250
    :name: two slit diffraction
    :align: center
By a-levelphysicstutor.com 2024, Creative Commons License, https://www.a-levelphysicstutor.com/wav-light-inter.php
```

Bij een dubbelspleet met met afstand $d$ tussen de spleten, zal een licht-front in elke spleet *constructief* interfereren als het weglengte verschil tot het scherm precies een veelvoud van een golflengte $\lambda$ is geldt:

$n \cdot \lambda = d \cdot sin(\Theta)$ 

Hier is:
* n een geheel getal dat de orde van de maxima aangeeft,
* $\lambda$ de golflengte,
* $d$ de afstand tussen de spleten,
* $\Theta$ de hoek waaronder constructieve interferentie plaatsvindt.

In de figuur hieronder wordt i.p.v. $d$ $a$ gebruikt.

```{figure} ./media/dubbel/TwoSlitInterference.svg
    :width: 250
    :name: two slit description
    :align: center
By I, Dirk Hünniger, CC BY-SA 3.0, https://commons.wikimedia.org/w/index.php?curid=2474697
```

### Dualiteit
Wanneer licht door een grote spleet valt zien we een afbeelding van de spleet op een scherm.
```{figure} ./media/dubbel/grote-spleten.png
    :width: 250
    :name: grote spleten
    :align: center
By Ed van den Berg, Jeroen Grijsen, Aernout van Rossum, Timo Bomhof, from lesopzetdualiteit.pdf
```

Maken we de spleten echter zeer klein, dan treedt interferentie van licht op. De golflengte van fotonen is echter nog een stuk kleiner dan de spleetbreedte. 
<br>
Wat gebeurt er nu als we fotonen één voor één, dus als miniscule deeltjes, door de spleten schieten? We krijgen dan geen afbeelding, maar ook een interferentiepatroon. De fotonen interfereren dan met zichzelf! Je kunt ook zeggen dat de golffunctie van één foton door beide spleten gaat en op deze manier interfereert met zichzelf en een interferentiepatroon veroorzaakt. De afstand tussen de individuele fotonen is zeer groot: meer dan 10cm per foton, veel meer dan de golflengte van de fotonen.
<br>
Elektronen kunnen we ook één voor één door een dubbelspleet schieten en deze vertonen precies hetzelfde gedrag: Ook hier ontstaat een interferentiepatroon (i.v.m. veiligheid (betastraling) doen we dit niet zelf). Hieronder is wel een filmpje hiervan te zien:
<br>
Toont het zich opbouwende elektronenpatroon, één elektron per keer. De detectiesnelheid van elektronen was ongeveer 1 Hz. De eerste 22 seconden worden weergegeven op de detectiesnelheid, de volgende 30 seconden zijn versneld met een factor 72, daarna 20 seconden met factor 210. De laatste 20 seconden worden weer vertraagd naar de detectiesnelheid. De intensiteit wordt geregeld door een tijdsafhankelijke functie om de zichtbaarheid van de individuele "vlekjes" aan het begin te vergroten.
```{figure} ./media/dubbel/electron.gif
    :width: 250
    :name: electrons doubleslit
    :align: center
By Roger Bach, Damian Pope, Sy-Hwang Liou and Herman Batelaan See Roger Bach et al 2013 New J. Phys. 15 033018DOI 10.1088/1367-2630/15/3/033018 - https://iopscience.iop.org/article/10.1088/1367-2630/15/3/033018/data, CC BY 3.0, https://commons.wikimedia.org/w/index.php?curid=132124128
```
Een elektron kan zich, net als een foton, zowel als een deeltje als als een golf gedragen: *Dualiteit*.

## Opstelling
### Experiment 1: Dubbelspleet experiment met gewoon licht
In onze opstelling maken we gebruik van onderstaande dubbelspleet:

```{figure} ./media/dubbel/dubbelspleet.jpeg
    :width: 200
    :name: two slit description
    :align: center
```

Op de dubbelspleet staat: $100/600 \mu m$
<br>
Oftewel: de spleetbreedte $a = 100 \mu m$ en de afstand tussen de spleten $d = 600 \mu m$.
<br>
In deze opstelling maken we daarnaast gebruik van een rode (635 nm) en een groene laser (520 nm).

### Experiment 2: Dubbelspleetexperiment met enkele, losse fotonen
We maken gebruik van de dubbelspleetkoffer, ontwikkelt aan de Universiteit van Twente door A. van Rossum.
Bij deze een beschrijving middels deze screenshot uit de handleiding.
```{figure} ./media/dubbel/koffer.png
    :width: 500
    :name: koffer
    :align: center
```
De gebruikte dubbelspleet (blauw gemarkeerd) heeft spleetafstand/spleetbreedte 0,4/0,1 mm.

## Uitvoering
> ### Veiligheid
>
>Let bij de uitvoering op de veiligheid: Van laserlicht kun je blijvend
>blind raken. Ondanks dat deze laser is geselecteerd om mee te werken
>zonder extra veiligheidsmaatregelen wordt er toch geacht rekening te
>houden met de standaard afspraken wanneer je werkt met laserlicht:
>
>- Zorg dat je nooit rechtstreeks in de laser kijkt of anderen in het
>  gezicht schijnt.
>
>- Kijk ook uit met strooi- of gereflecteerd licht.
>- Zet de laser uit als deze niet wordt gebruikt.

### Experiment 1: Dubbelspleet experiment met gewoon licht

1) Plaats de groene laser in de houder en controleer de uitlijning van de laser op de dubbelspleet. Zorg dat de laserbundel precies op de dubbelspleet valt (zie foto bij opstelling.). Let hierbij goed de **veiligheid!** De laser is ten alle tijden richting de muur gericht.
2) Meet met de rolmaat de afstand van dubbelspleet tot de muur op. Noem deze $L$, van lengte.
3) Meet met de liniaal of geodriehoek de afstand tussen de minima van het enkelspleetpatroon op (zie figuur 6 of 8). Noem deze $y_1$.
4) Meet met de liniaal of geodriehoek de afstand van maximum tot maximum van het regelmatige, kleine patroon binnen het enkelspleetpatroon op (zie figuur 8). Noem deze $y_2$.

5) Plaats nu de rode laser in de houder en controleer de uitlijning van de laser op de dubbelspleet. Zorg dat de laserbundel precies op de dubbelspleet valt (zie foto bij opstelling.). Let hierbij goed de **veiligheid!** De laser is ten alle tijden richting de muur gericht.
6) Meet met de rolmaat de afstand van dubbelspleet tot de muur op. Noem deze $L$, van lengte.
7) Meet met de liniaal of geodriehoek de afstand tussen de minima van het enkelspleetpatroon op (zie figuur 6 of 8). Noem deze $y_1$.
8) Meet met de liniaal of geodriehoek de afstand van maximum tot maximum van het regelmatige, kleine patroon binnen het enkelspleetpatroon op (zie figuur 8). Noem deze $y_2$.

### Experiment 2: Dubbelspleetexperiment met enkele, losse fotonen
Let op: Deze koffer kost meer dan 10.000€. De sensor (SPC) die hier in zit kost alleen al los 6000€. Doe dus voorzichtig en bij twijfel vragen.
1) Open de dubbelspleet software op de laptop.
2) Sluit de voedingskabel aan op de koffer en stop de twee stekkers in het stopcontact.
3) Sluit de twee usb kabels aan op de koffer en laptop.
4) Sluit de mini luidspreker aan op de koffer met de 3,5mm plug en schakel de luidspreker in. Als de luidspreker leeg is, sluit deze dan tevens aan met de oplaadkabel.
5) Verwijder voorzichtig de stofkap van de SPC door te draaien.
6) Zorg dat de dubbelspleet zo geplaatst is in de opstelling dat het stickertje richting de laser wijst.
7) Zorg dat er geen lossen onderdelen meer in de koffer liggen en sluit de koffer.
8) Wacht even tot de koffer verbinding heeft gemaakt met de laptop via de USB.
7) Selecteer de juiste communicatie (COM) poort in de software (de juiste is degene die werkt met de Thorlabs SPCM20).
8) Druk op start meting.
9) Tijdens het scanner hoor je een scan geluid van de railmotor en ontstaat het beeld en zijn gelijktijdig de fotonen-clicks hoorbaar. Hoor je geen clicks dan is de batterij leeg van de luidspreker: Laat deze op.
10) Voor een tweede meting uit met plot2 (ander kleurtje).
11) Sla de plots van je metingen op. 

De volgende stappen moeten gedaan worden om de koffer af te sluiten:
1. Stofkapje op de fotonendetector draaien
2. Luidspreker uitzetten
3. Voedingskabel in het etui met de luidspreker
4. USB Kabels los in de koffer
5. Koffer afsluiten

## Verwerking
### Experiment 1: Dubbelspleet experiment met gewoon licht
* Bereken voor beide metingen, met de groene en de rode laser, voor beide patronen ($y_1$ en $y_2$) de hoek $\Theta$ m.b.v. je meetgegevens. Dit geeft als het goed is 4 verschillende waarden.
* Bereken met behulp van deze hoeken en de bekende golflengte van de groene (520 nm) en de rode laser (635 nm) de breedte van de gebruikte spleet $a$ en de afstand tussen de spleten $d$. Je krijgt dus twee waarden voor $d$ (rood en groen) en twee voor $a$.

### Experiment 2: Dubbelspleetexperiment met enkele, losse fotonen
1) Bereken de afstand tussen de enkele, losse fotonen. Bereken hiertoe:
    a) Eerst de energie van één foton en 
    b) Daarna het aantal fotonen per seconde (circa 100miljoen/s). 
    c) Vervolgens de tijdsduur van 1 foton. 
    d) Tenslotte de afstand van 1 foton tot de volgende (circa 3 meter):Interferentie met een ander foton is onmogelijk. Het foton interfereert met zichzelf.
Gebruik de volgende gegevens. 
* $\lambda = 635 nm$ 
* $P_{laser} = 5 mW$
* verzwakkingsfilter $N=7$, oftewel $10^7$. 
* $10%$ wordt doorgelaten door de spleet (want de oppervlakte van de spleet is $10%$ van het laserbundeloppervlak)

2) Vergelijk het gevonden patroon met het dubbelspleetpatroon dat je eerder zelf hebt gemaakt met de lasers. In hoeverre komt dit overeen?
3) Wat zou er gebeuren als je een detector bij de spleet plaatst om te kijken of het foton door een bepaalde spleet gaat?


## Conclusie en discussie
1) Vergelijk je gevonden waarden voor $d$ en $a$ tussen twee kleuren laserlicht.
2) Vergelijk je gevonden waarden met de theoretische waarden, zoals de leverancier deze heeft opgegeven (de spleetbreedte $a = 100 \mu m$ en de afstand tussen de spleten $d = 600 \mu m$).
3) Welk patroon van het dubbelspleet diffractiepatroon kun je nu matchen aan welke eigenschap van de dubbelspleet? 
4) Wat gebeurt er als de afstand tussen spleten groter wordt gemaakt?
5) Wat voor conclusie kan je trekken als je Experiment 1 en 2 vergelijkt?

## Bronnen
Handleiding van de koffer: {Download}`pdf<./media/Handleiding-dubbelspleetexperiment-v0.9.pdf>`
<br>
Leuke animatie: [https://lampz.tugraz.at/~hadley/physikm/script/waves/double_slit.en.php](https://lampz.tugraz.at/~hadley/physikm/script/waves/double_slit.en.php)