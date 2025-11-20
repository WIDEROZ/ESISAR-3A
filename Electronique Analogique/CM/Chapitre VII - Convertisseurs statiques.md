#### Sources
- Unidirectionnelle
- Bidirectionnelle
![[Pasted image 20251120083955.png]]
![[Pasted image 20251120084005.png]]

# Hacheurs
#### Période $T$ de découpage
Cadence ouverture/fermeture de l’interrupteur

#### Rapport cyclique
- $T_{on}$ : Période où l'interrupteur (ça peut être un transistor) est ouvert
- $T$ : Période totale d'étude

$$\alpha = \frac{T_{on}}{T}$$

#### Constante de temps
$$\boxed{\tau_{elec} \gg T}$$

#### Conduction
- Continue (circuit inductif) : $i_{L} > 0$
  Le courant est nul que sur un temps nul. 
- Discontinue (circuit inductif) : $i_{L} \geq 0$
  Le courant est nul que sur un temps non nul. 

## Hacheur Série (Buck)
![[Pasted image 20251120085943.png]]
Diode Bizarre $\equiv$ Interrupteur commandé

#### Hypothèses
- Générateurs non réversibles et parfaits
- Convention :
  + Source de tension : Générateur
  + Source de courant : Récepteur

#### Interrupteurs
![[Pasted image 20251120090234.png]]
- $K_{1}$ Commandé
- $K_{2}$ "Naturel"


### 1. Étude temporelle
#### $0 < t < \alpha T$
![[Pasted image 20251120090333.png]]
###### Source de courant
![[Pasted image 20251120090618.png]]

##### Transistor (Interrupteur $K_{1}$)
![[Pasted image 20251120090627.png]]

##### Diode (interrupteur $K_{2}$)
![[Pasted image 20251120090636.png]]

#### $\alpha T < t < T$
![[Pasted image 20251120090827.png]]
###### Source de courant
![[Pasted image 20251120090838.png]]

##### Transistor (Interrupteur $K_{1}$)
![[Pasted image 20251120090844.png]]

##### Diode (interrupteur $K_{2}$)
![[Pasted image 20251120090922.png]]

### 2. Contrôle
#### Tension moyenne de sortie
$$\boxed{V_{s} = \alpha E}$$

#### Puissance
$$\boxed{\mathcal{P} = \alpha EI}$$

## Hacheur parallèle (Boost)
![[Pasted image 20251120091849.png]]


#### Hypothèses
- Générateurs non réversibles et parfaits
- Convention :
  + Source de courant : Générateur
  + Source de tension : Récepteur
- Commandes complémentaires
 + $I$ non ouvert
 + $E$ non court-circuité 

### 1. Étude temporelle
#### $0 < t < \alpha T$
![[Pasted image 20251120092115.png]]
##### Source / Transistor (Interr$K_{1}$) / $K_{2}$
![[Pasted image 20251120092145.png]]

#### $\alpha T < t < T$
![[Pasted image 20251120092213.png]]

##### Source, 
![[Pasted image 20251120092236.png]]