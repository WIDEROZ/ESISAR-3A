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
En utilisant le schema équivalent au transistor pour les petits signaux : EXCAL 15
Fonction de transfert : 
$$A_{V} = \frac{\tilde{V}_{s}}{\tilde{V}_{e}} = - \frac{\beta R_{C}}{r_{be}+(1+\beta)R_{E}}$$
#### 5. Transistor à effet de champ
![[Pasted image 20250910170735.png]]

EXCAL 16

![[Pasted image 20250910171653.png]]

En fonctionnement normal la jonction grille / drain du transistor est OFF.

#### <font color="red">La tension </font> $v_{gs}$ <font color="red">contrôle le courant </font> $i_{D}$

## Transistor MosFet
![[Pasted image 20250918083458.png]]
![[Pasted image 20250918083445.png]]
![[Pasted image 20250918083829.png]]
##### Schema équivalent pour les petits signaux
![[Pasted image 20250918084345.png]]
On ne peut pas se permettre de négliger $\rho$ 
![[Pasted image 20250918085434.png]]

Quand on sature le transistor MOS, il devient résistif. 

## Puissance dans un transistor
#### Bipolaire
$$p(t) = v_{ce}(t) i_{c}(t)$$
On néglige la puissance du à la base
#### FET et MosFet
$$p(t) = v_{ds}(t) i_{d}(t)$$
La puissance au niveau de la grille est presque nulle.

#### Puissance active
$$P = \left< p(t) \right> $$


### FET
Control par la jonction $V_{gs}$ toujours bloqué (elle est donc négative)

#### MOSFET
On a une tension de seuil négative ou positive suivant la construction et l'impédance d'entrée est BEAUCOUP plus grande que le transistor FET

#### Conclusion
Les modèles des petits signaux sont identiques quelles que soit les jonctions.


