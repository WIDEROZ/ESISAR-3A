- Guy dehay - Bureau : B106
#### Livres
- Tren Tien Lang (3 tomes)
- Millman Jacob (La bible)

# Chapitre II  - Jonction et Diodes
## I. Jonction PN et Diodes
### 1. Semi-conducteurs
- Silicium
- Galium
- Germanium
- Monocristal : Faible de quantité de proteurs libre minoritaires $e^{-}$ (bande de valence)

#### Dopage N
Apport de porteur $e^{-}$majoritaire
- Arsenic, antimoine, phosphore

EXCAL 1

#### Dopage P
Création d'un manque d'électron (Trou =)
EXCAL2

### 2. Jonction PN
EXCAL 3

#### Equation de Schokey
Excal $3$
$$I_{ak} = I_{s}\left( e^{ \frac{U_{ak}}{\eta u_{t}} }-1 \right)$$
- $I_{s}$ : constatne de construction
- $u_{t} = \frac{k_{b}T}{q}$ cte $26$ mv si $25°C$
- $\eta$ constante de matériau $\approx 1$ à $2$ pour le Silicium
![[Pasted image 20250904091206.png]]
Polarisation inverse                               Polarisation directe
Bloquée                                                     Conduction directe
Off                                                               Passante

### 3. Diode parfaite
#### Diode ON/Passante : Court-circuit
- $U_{ak} = 0V$
- $I_{ak}>0$
Schema équivalent : un interrupteur fermé

#### Diode OFF/Bloquée : Circuit ouvert
- $U_{ak} < 0V$
- $I_{ak} = 0$
Schema équivalent : un interrupteur ouvert

#### Caractéristiques
##### Courant tension
$$\boxed{\text{La tension } U_{ak} \text{ ne peut pas être positive}}$$
$$\boxed{\text{Le courant }I_{ak} \text{ ne peut pas être négatif}}$$
### 4. Méthode d'Analyse
#### Passants
Supposons que la diode est passante :
- Courant positif $\Rightarrow$ hypothèse vraie
- Courant négatif $\Rightarrow$ hypothèse faux

#### Bloqué
Supposons que la diode est bloquée :
- Tension positive $\Rightarrow$ hypothèse faux
- Tension négative $\Rightarrow$ hypothèse vraie

#### Exemple d'étude : Voir sur CHAMILO

### 4. Modèle linéaire
EXCAL 5.
##### Statique
- Grandeurs linéaires continues

##### Modélisation linéaire par morceaux
- Tension de seuil : $U_{0} = 0.6V$
- $r_{d}$ : résistance dynamique (de $1$ à $100 \Omega$)

##### Diode Passante $U_{ak} > U_{0}$
- $U_{ak} = U_{0}+r_{d}I_{ak}$

##### Diode bloquée $U_{ak} < U_{0}$
- Classique circuit ouvert
- En finesse : Source de courant $I_{s}$ (fuite de courant)

EXCAL 4.

##### Caractéristiques
EXCAL 5. 
$$\boxed{\text{Faire le calcul de }U_{ak} \text{ grace à EXCAL 4}}$$

$$I_{ak} = \frac{U_{ak}-U_{0}}{r_{d}}$$

### 5. Redresseur Didactique - Diodes Parfaites
#### Tension d'entrée sinusoïdale :
- $V(t) = V \sqrt{2} \sin(\omega t)$
- Diode Idéale

#### Montage : EXCAL 6

#### Départ à $t = 0$ - CHAMILO

#### Rappel : 
Soit $x$ une fonction $T$ périodique
$$X_{moy} = \frac{1}{T} \int_{T} x(t) \, dt = \frac{S_{urf_{T}}x}{T} $$
Valeur off : 
$$X_{eff} = \sqrt{\frac{1}{T}\int x^{2}(t) \, dt }$$

#### Diode ON
Loi des mailles : 
$$V(t) = U_{L}(t) + Ri(t) = L \frac{di}{dt}(t) + Ri(t)$$
Ainsi, avec $\tau = \frac{L}{R}$
$$\boxed{\tau \frac{di(t)}{dt} + i(t) = \frac{V\sqrt{2}}{R} \sin(\omega t)}$$

##### Complexe : étude en régime permanent
$$\underline{I} = \frac{\underline{V}}{\underline{Z}} \text{ avec } \underline{Z} = R + j\omega L \text{ et } \underline{V} = V e^{ j \times 0 }$$
Alors,
$$Z = \sqrt{R^{2} + \omega^{2}L^{2}} \text{ et }\varphi = \mathrm{arg}(\underline{Z}) = \arctan\left( \frac{\omega L}{R} \right)$$
Donc, 
$$\underline{I} = \frac{V}{Z} e^{ -j\varphi } \Rightarrow \left| \underline{I}\right|  = \frac{V}{Z}$$
Ainsi, 
$$\boxed{I = \frac{V}{Z} \sqrt{2} \sin(\omega t-\varphi)}$$

# Chapitre II.b Diodes en dynamique
#### Diode Passante
EXCAL 7
Pic de courant négatif pendant un court instant. 

#### Diode Bloquée
EXCAL 8.

## 1. Puissances
#### Puissance active (moyenne)
Si la diode est bloquée on néglige le courant $i_{ak}(t) = 0$ et donc $p(t) = 0$

$$\text{Puissance active : }\boxed{P_{cond} = \left< p(t) \right> }$$
Alors comme : $u_{ak} = U_{0} + r_{d}i_{ak}(t)$ pour une diode passante
Donc,  
$$P_{cond} = \left< U_{0}i_{ak}(t) + r_{d}i_{ak}^{2}(t) \right> = U_{0} I_{ak_{moy}} + r_{d} I_{ak_{eff}}^{2} $$
Ainsi, 
$$\boxed{P_{cond} =  U_{0} I_{ak_{moy}} + r_{d} I_{ak_{eff}}^{2}}$$

## 2. Diodes Zener
EXCAL 9

## 3. Diode Schottly
EXCAL 11-12
Tension de seuil de la diode Schottly $\ll$ Diode classique

## Autres Diodes
- LED : La couleur varie en fonction de la tension. 
- Photovoltaïque : Générateur de courant EXCAL 13

#### Cellules photovoltaïques
EXCAL 14

# Chapitre III - Transistors
## I. Transistor Bipolaire
#### Fonctionnement linéaire
????????????????????????????????????????????

## II. Signaux variables
#### 1. Préambule
Soit $x(t)$ un signal variable, 
On pose : $X = \left< x(t) \right>$
alors on construit : 
$$\boxed{\tilde{x}(t) = x(t)-X}$$


#### 2. Transistor bipolaire
Entre $C$ et $E$ : 
Beaucoup de courant de base $\Rightarrow$ La saturation $\Rightarrow$ Interrupteur parfait
$i_{B} = 0 \Rightarrow$ transistor bloqué $\Leftrightarrow$ Interrupteur ouvert

#### 3. Transistor en commutation
Tension de commande :
- Blocage : $0V$
- Saturation : $5V$

Transistor : 
- $V_{be} = 0,7V$
- $\beta = 200 (= h_{FE})$ (on verra $h_{FE}$ au semestre $2$)

##### Saturation du transistor pour calculer $R_{b}$
On fait une loi des mailles
![[Pasted image 20250910155703.png]]

$$I_{c} = \frac{V_{cc} - V_{ce_{sat}}}{R_{c}} = 4.7 mA$$
Pour saturer (il ne faut pas être en linéaire)
$$I_{b} = \frac{I_{c}}{\beta_{sat}} = 23.5 \mu A$$
$$R_{b} = \frac{e_{com} - V_{be}}{I_{b}} = \frac{4.3}{23.5 \text{ } \mu A} = 182.9 k \Omega$$
#### 4. Transistor linéaire
###### Condition des petits signaux
- Amplitude de $\tilde{x}$ petite par rapport à $X = \left< x \right>$
- Fréquence de $\tilde{x}$ telle que les capacités sont d'impédance négligeable. 

##### Polariser le transistor
CHAMILO

##### Etude statique
CHAMILO
##### Etude dynamique

![[Pasted image 20250910163544.png]]
En utilisant le schema équivalent au transistor pour les petits signaux :
10011411.1................      