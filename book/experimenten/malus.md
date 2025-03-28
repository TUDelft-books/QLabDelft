# Wet van Malus
_dit experiment is nog in ontwikkeling_
In dit experiment wordt de wet van Malus met behulp van polarisatoren experimenteel bepaald.
Tevens wordt het begrip superpositie aan de hand van polarisatie onderzocht.

# Experiment 1: Wet van Malus

## Doel
Bepaal het verband waarmee de intensiteit van gepolariseerd licht door een polarisator afhangt van de hoek tussen de polarisatierichting van het licht en de transmissie-as van de polarisator.

## Theorie
Elektromagnetische golven zoals licht bestaan uit een elektrische- en magnetische veld-componenten, die loodrecht ten opzichte van elkaar staan. Bij normaal, diffuus, licht heeft het (elektrisch) veld van de golf een willekeurige richting of oriëntatie. 
We kunnen licht echter ook polariseren, waarbij het elektrisch veld van alle golven in dezelfde richting is georiënteerd en dus in maar één richting trilt. We noemen dit lineair gepolariseerd licht. (Er bestaat ook circulair of elliptische polarisatie.) 
Door een lineair polarisatie filter te gebruiken, wordt maar 50% van het licht doorgelaten. Immers, van willekeurig licht heeft maar 50% een elektrisch veld dat georiënteerd is in, bijvoorbeeld, de verticale richting.  <br>
Hieronder is een elektromagnetische golf te zien die door een verticale polarizer gaat. 
<br>
<img src="./media/malus/Wire-grid-polarizer.svg.png" />
<a href="http://creativecommons.org/licenses/by-sa/3.0/" title="Creative Commons Attribution-Share Alike 3.0">CC BY-SA 3.0</a>, <a href="https://commons.wikimedia.org/w/index.php?curid=724493">Link</a>

<br>
Wanneer na de verticale polarizer een horizontale polarizer wordt toegevoegd, wordt al het licht geabsorbeerd en wordt er geen licht meer doorgelaten.

De wet van Malus geeft aan wat de intensiteit is van het licht als licht een bepaalde hoek ten opzichte van een transmissie as (doorlatingsrichting) van een polarisator maakt. Dit wordt weergegeven in de volgende formule:

```{math}
:label: 0
I = I_0\cos^2(\theta)
```
​waarbij $𝐼_0$ de maximale intensiteit is en 𝜃 de hoek tussen de transmissie-assen van de polarisatoren.

## Materiaal
1. Lichtbron met bundel die goed rechtdoor gaat (laser).
2. Holle lens (-75dpt), om de lichtbundel een groteren diameter te geven.
3. Drie polarisatoren met een instelbare rotatiehoek. Alle drie met een lineaire polarisator.
4. Scherm om het goed zichtbaar te maken.
5. Optische detector: Voor het meten van de intensiteit van het doorgelaten licht.
6. Multimeter om de spanning van de detector te meten

## Uitvoering
>### Veiligheid
>Let bij de uitvoering op de veiligheid: Van laserlicht kun je blijvend
>blind raken. Ondanks dat deze laser is geselecteerd om mee te werken
>zonder extra veiligheidsmaatregelen wordt er toch geacht rekening te
>houden met de standaard afspraken wanneer je werkt met laserlicht:
>
>- Zorg dat je nooit rechtstreeks in de laser kijkt of anderen in het gezicht schijnt.
>- Kijk ook uit met strooi- of gereflecteerd licht.
>- De laser wordt dan ook niet gedemonteerd.

1. Zorg dat het scherm en de lens in de bundel op hun plek staan (zie foto).
2. Zet de laser aan. 
3. Zorg dat alle polarizatoren op 0 graden staan: Dat betekent dat er alleen verticaal gepolariseerd licht wordt doorgelaten. Je kunt aan de ribbeltjes met duim en wijsvinger, met je hand erboven, draaien. 
4. Er zal een duidelijke lichtbundel zichtbaar zijn op het scherm.
5. Draai nu aan de derde polarisator, degene het dichtst bij het scherm, en zet deze op 90 graden (horizontaal gepolariseerd). Je kunt aan de ribbeltjes met duim en wijsvinger, met je hand erboven, draaien. 
6. Er is nu als het goed is geen licht zichtbaar op het scherm. 
7. Draai nu de middelste polarizer naar 45 graden. 
8. Kijk naar het scherm, wat zie je gebeuren?
9. Kun je dit verklaren? Het wordt gedurende dit experiment duidelijker hoe dit kan.
10. 

Plaats de laserbron zodanig dat de bundel door de twee polarisatoren kan passeren.
2. Zet de eerste polarisator in een vaste positie, zodat het licht lineair gepolariseerd is.
3. Laat het licht door de tweede polarisator gaan, waarvan de hoek instelbaar is.
4. Meet de doorgelaten intensiteit met de optische detector terwijl je de hoek van de tweede polarisator varieert met stapjes van 5 graden.

## Resultaten
1. Plot de intensiteit als functie van de hoek.

## Conclusie
Toon aan dat hieruit volgt:
$ I = I_0\cos^2(\theta)$

# Experiment 2: Superpositie

## Doel
Demonstreer het kwantummechanische gedrag van licht, het concept van superpositie, door de interactie van licht met drie lineaire polarisatoren.

## Materiaal
Voeg aan de opstelling van het eerste experiment één extra polarisator toe.

## Uitvoering
1. Opstelling van Polarisatoren:
* Plaats de eerste polarisator ($P_1$) met zijn transmissie-as horizontaal ($0^\circ$).
* Plaats de tweede polarisator ($P_2$) met zijn transmissie-as onder een variabele hoek $\theta_2$ ten opzichte van $P_1$.
* Plaats de derde polarisator ($P_3$) met zijn transmissie-as onder een hoek $\theta_3$ ten opzichte van $P_1$.

2. Meten van Intensiteit:
* Leid de laserbundel door de drie polarisatoren.
* Meet de doorgelaten intensiteit met de optische detector terwijl je $\theta_2$ en $\theta_3$ varieert.
* Noteer de intensiteit bij verschillende combinaties van $\theta_2$ en $\theta_3$.

3. Superpositie Effect:
* Stel $\theta_2 = 45^\circ$ in en varieer $\theta_3$. Merk op dat licht, dat normaal volledig zou worden geblokkeerd door $P_3$ als deze $90^\circ$ ten opzichte van $P_1$ staat, toch doorgelaten wordt door $P_2$ vanwege de superpositie.

## Resultaten
1. Zonder de Tweede Polarisator:
* Als alleen $P_1$ en $P_3$ aanwezig zijn en $\theta_3 = 90^\circ$, wordt al het licht geblokkeerd, omdat hun transmissie-assen orthogonaal zijn.

2. Met de Tweede Polarisator:
* Als $P_2$ wordt toegevoegd en op $45^\circ$ staat, verandert de lineaire polarisatie van het licht in een superpositie van toestanden die door $P_3$ gedeeltelijk doorgelaten worden.
* De intensiteit van het doorgelaten licht wordt gegeven door:
Waarbij $I_0$ de intensiteit is van het licht na $P_1$.

3. Superpositie Effect:
* Het licht gedraagt zich alsof het zich in een nieuwe polarisatietoestand bevindt na $P_2$, wat het kwantummechanische concept van superpositie illustreert.

## Conclusie
Dit experiment toont aan dat het invoegen van een derde polarisator onder een hoek een niet-intuïtieve invloed kan hebben op de doorgelaten intensiteit, wat verklaard kan worden door het quantummechanische principe van superpositie.


