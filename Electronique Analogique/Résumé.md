# Diodes - Jonction PN
Anode : Ions $-$ fixes
Cathode : Ions $+$ fixes

#### Équation de Schockey
$$\boxed{I_{ak} = I_{s}\left( e^{ \frac{U_{ak}}{\eta u_{t}} }-1 \right)}$$
- $I_{s}$ : constante de construction
- $u_{t} = \frac{k_{b}T}{q}$ cte $u_{t} = 26 \text{ mV}$ si $25°C$
![[Pasted image 20250904145233.png]]
Diode bloquée : $U_{ak}\ll \eta \Rightarrow I_{ak} \approx -I_{s}$ i.e. $U_{ak} \approx 0$

## Méthode d'analyse d'une Diode parfaite
##### Passants
Supposons que la diode est passante :
- Courant positif $\Rightarrow$ hypothèse vraie
- Courant négatif $\Rightarrow$ hypothèse faux

##### Bloqué
Supposons que la diode est bloquée :
- Tension positive $\Rightarrow$ hypothèse faux
- Tension négative $\Rightarrow$ hypothèse vraie

## Diode en statique (Tension constante)
Toutes les grandeurs électriques sont continues
##### Passante
![[Pasted image 20250904150649.png]]
##### Bloquée
Modélisation classique
En finesse (courant de fuite (fuites à travers la jonction PN)) : 
![[Pasted image 20250904150740.png]]

## Redresseur didactique - Passer de $AC$ à $DC$ PURE MASTERCLASS
- Tension d'entrée du circuit sinusoïdale : $V(t) = V\sqrt{2} \sin(\omega t)$
- On considère que la diode est idéale. 

## Diodes dynamiques
#### Diode classique
![[Pasted image 20250905111043.png]]
##### Passante
![[Pasted image 20250905104209.png]]
$$u_{ak}(t) = U_{0} + r_{d}i_{ak}(t)$$

#### Diode bloquée
![[Pasted image 20250905111017.png]]

## Perte en conduction / commutation
#### Puissance active : 
Soit $p$ la puissance de la diode. 
$$P_{cond} = \left< p(t) \right> = \left< u_{ak}(t) \times i_{ak}(t) \right> = \left< U_{0}i_{ak}(t)+r_{d}i^{2}_{ak}(t) \right> = U_{0}I_{moy} + r_{d}I_{eff}^{2} $$
Ne marche que si la diode est passante car si elle ne l'est pas comme $i \approx 0$, $p = 0$

## Diode Zener
![[Pasted image 20250905113546.png]]

#### Modélisation linéaire : 
![[Pasted image 20250905113937.png]]

## Diode Schottky
C'est la même chose qu'une Diode classique sauf que la tension de seuil de la diode Schottly est bien plus petite que celle de la diode classique. 
![[Pasted image 20250905114251.png]]

## Photovoltaïque
#### Générateur de courant proportionnel au flux lumineux $\varphi$
![[Pasted image 20250905120638.png]]

#### Cellule photovoltaïque
![[Pasted image 20250905120911.png]]

#### Schema équivalent d'une cellule photovoltaïque
![[Pasted image 20250905121254.png]]


