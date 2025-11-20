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
##### Source / Transistor (Interrupteur $K_{1}$) / Diode (Interrupteur $K_{2}$)
![[Pasted image 20251120092145.png]]

#### $\alpha T < t < T$
![[Pasted image 20251120092213.png]]

##### Source / Transistor (Interrupteur $K_{1}$) / Diode (Interrupteur $K_{2}$)
![[Pasted image 20251120092236.png]]

#### Contrôle
##### Tensions moyennes
$$V_{s} = E \text{ et } V_{e} = (1-\alpha)E$$
Alors, 
$$\boxed{V_{s} = \frac{V_{e}}{1-\alpha}}$$

##### Puissance
$$\mathcal{P} = \left< p_{e}(t) \right> = \left< v_{e}(t)I \right> = (1-\alpha)IE $$

## Hacheur 2 quadrants
![[Pasted image 20251120093303.png]]
$K_{1}$ et $K_{2}$ sont commandés

### Dévolteur (Buck) $i_{s} > 0$
![[Pasted image 20251120093355.png]]

### Survolteur (Boost) $i_{s} < 0$
![[Pasted image 20251120093426.png]]


## Hacheur en pont
![[Pasted image 20251120093538.png]]
- Sources de tensions réversibles en courant
- Sources de courant réversible en courant et en tension
+ $\forall x \in  [\![1, 4]\!], K_{x}$ est commandé

















# Aparté
En régime permanent la tension (resp. courant) moyenne dans une bobine (resp. capa) est nulle. 
Démonstration :
$$u(t) = L \frac{di}{dt}(t)$$
On suppose que $u(t)$ soit constant non nul. 
Alors, 
$$i(t) = \frac{U}{L} t + C$$
ABSURDE.
$$P(t) = Ui(t) \underset{t \to +\infty}{\longrightarrow} + \infty$$

