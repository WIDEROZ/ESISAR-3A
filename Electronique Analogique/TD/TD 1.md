## 1. Diode parfaite
#### a.
Loi des mailles :
$$e(t) = Ri(t) + U_{ak}$$
Alors, 
$$i(t) = \frac{e(t) - U_{ak}}{R}$$
On détermine si la diode est ON ou OFF : 
Supposons qu'elle soit OFF alors comme c'est une diode parfaite elle est assimilable à un interrupteur ouvert. 
Alors, $e(t) = U_{ak}$ (car $Ri(t) =0$)

On distingue deux cas : 
$0- \frac{1}{2}T$ : 
$E_{1} \gg U_{0}$ ainsi la diode est passante. 
Donc, $U_{ak} = U_{0} = 0.62 \text{ V}$ et alors $I = \frac{E_{1} - U_{ak}}{R} = 4.38 \text{ mA}$.

$\frac{1}{2}T - T$ : 
$-E_{2} \ll U_{0}$ ainsi la diode est bloquante. 
Donc $U_{ak} = -E_{2} = -10 \text{ V}$ et $i=0 \text{ A}$

#### b.
$$\boxed{\text{Courant de conduction : }I = 4.38 \text{ Tension directe : } U_{ak} = 0.62}$$



## 2. Diode modèle statique
#### a.
Voir feuille

#### b.
Lorsque la diode est passante en modèle statique la loi des mailles devient : 
$$E_{1} = (R + r_{d})i(t) + U_{0} $$
Alors, 
$$I = \frac{E_{1} - U_{0}}{E+r_{d}} = 4.27 \text{ mA}$$
Comme : $U_{ak} = U_{0} + r_{d}i$ alors, 
$$U_{ak} = 0.73 \text{ V}$$
## Redressement simple alternance
### I. Préambule
#### a.
On applique le principe de superposition : 
$$\boxed{u(t) = Ri(t) + L \frac{di}{dt}(t)}$$
#### b.
$$\frac{di}{dt} + \frac{R}{L} i(t) = u(t) \text{ alors } \boxed{\tau = \frac{L}{R}}$$
### II. Première approche
#### 1.a.
$$\boxed{\tau = 10^{-6} s}$$
#### b.
###### $0 - \frac{1}{2}T$
$$\frac{di}{dt} + \frac{1}{\tau} i(t)=\frac{E}{R}$$
Alors, 
$$i(t) = A e^{ -\frac{t}{\tau}}+\frac{E}{R}$$
Donc, comme $i(0) = 0 \text{ A}$ on a bien : 
$$A = -\frac{E}{R} \text{ ainsi : } \boxed{i(t) = \frac{E}{R}\left( 1-e^{ -\frac{t}{\tau} } \right)}$$
Supposons que la diode soir Bloquée alors, 
$$v_{d}(t) = v(t)-u(t) = v(t) - \left( Ri + L \frac{di}{dt} \right) = E$$
Car $i = 0$ en régime permanent. 
Donc $v_{d}(t) >0$ C'est impossible la diode est donc passante.
$$\boxed{v_{d}(t) = 0}$$
Ainsi : 
$$\boxed{u(t) = v(t) = 200 \text{ V}}$$

###### $\frac{1}{2}T - T$
Par un raisonnement analogue la diode est bloquée :  
$$\boxed{v_{d}(t) = -E = -200 \text{ V}}$$
$$\boxed{u(t) = v(t)-v_{d}(t) = 0 \text{ V}}$$
Alors l'équation diff devient : 
$$\frac{di}{dt} + \frac{1}{\tau}i(t) = 0$$
Donc, 
$$\forall t \in \left[ \frac{T}{2}, T \right], i(t) = A e^{ -\frac{t}{\tau} }$$
Par continuité du courant aux bornes de la bobine : 
$$i\left( \frac{T}{2}^{-} \right) = i\left( \frac{T}{2}^{+} \right) = \frac{E}{R} \left( 1-e^{ -\frac{T}{2\tau} } \right)$$
Alors, 
$$\boxed{\forall t \in \left[ \frac{T}{2}, T \right], i(t) = \frac{E}{R}\left( 1 - e^{ -\frac{T}{2\tau} } \right)e^{ -\frac{t-T}{\tau} }} \text{ c'est pas possible}$$
Correction du prof : 
$$\forall t \in \left[ \frac{T}{2}, T \right], i(t) = -\frac{E}{R} + \left( I_{1} + \frac{E}{R} \right)e^{ -\frac{2t-T}{2\tau} }$$
Avec
$$I_{1} = \frac{E}{R}\left( 1-e^{ -\frac{T}{2\tau} } \right)$$


#### c.
Voir feuille
$$i(5\tau) = \frac{E}{R}(1-0.006) = 19.99 \text{ A}$$
Comme $\frac{T}{2} = 10 \text{ ms} \gg 5 \text{ }\mu \text{s}$
On a $i(t) = 20 \text{ A}$ sur pratiquement tout $\frac{T}{2}$

Sur la demi période négative le courant va essayer d'aller jusqu'à $-\frac{E}{R}$, mais quand le courant s'annule la diode s'ouvre et aucun courant ne peut circuler. 

#### d.
Valeur moyenne de $i$  :
$$\frac{1}{T}\int_{0}^{T} i(t) \, dt = \frac{E}{2R}$$

Valeur moyenne de $u$ : 
$$u(t) = \frac{1}{T}\int_{0}^{\frac{T}{2}} u(t) \, dt = \frac{E}{2} $$

## 2.
#### a.
$$\boxed{\tau = 10^{-2} \text{ s}}$$

#### b.
##### Calcul du temps d'extinction
On cherche $t_{1}'$ tel que : 
$$i\left( \frac{T}{2} + t_{1}' \right) =0$$
Alors, 
$$-\frac{E}{R} + \left( I_{1} + \frac{E}{R} \right) e^{ -\frac{t_{1}'}{\tau} } = 0$$
Ainsi, 
$$\boxed{t_{1}' = \tau \ln\left( 2-e^{ -\frac{T}{2\tau} } \right) = 4.90 \text{ ms}}$$

## 3.
#### a.
$$\boxed{\tau = 1 s}$$
#### b.
Temps d'extinction : 
$$\boxed{t_{2}' = \tau \ln\left( 2-e^{ -\frac{T}{2\tau} } \right) = 9.9 \text{ ms}}$$
C'est cohérent lorsque $\tau \approx \frac{T}{2}$ le courant s'annule juste avant la fin de la période. 

# III.
## 1.
##### Sur $\left[ 0, \frac{T}{2} \right]$
Rien ne change car $d_{RL}$ est OFF. 

###### Sur $\left[ \frac{T}{2}, T \right]$
On a : 
$$\frac{di}{dt}(t) + \frac{1}{\tau} i(t) = 0$$
car $u(t)=  0$ la diode $d_{rl}$ est passante 
$$\boxed{i(t) = I_{1}e^{ - \frac{2t-T}{2\tau} }}$$

##### Calcul du temps d'extinction
$$i\left( \frac{T}{2} + t_{1}' \right) = 0 \Rightarrow t_{1}' \to + \infty$$
Pas d'extinction avant $T$


À chaque demi période positive la source injecte un petit surplus de courant.
À chaque demi période négative, la diode roue libre conserve ce courant (il décroit très peu). 
De période en période, le courant s'accumule progressivement. Il va d'une valeur nulle vers une valeur de régime permanent. 

$$I(T) = I_{0} = \frac{\frac{E}{R}e^{ - \frac{T}{2\tau} }}{1+ e^{ - \frac{T}{2\tau} }} = 9.95 \text{ A}$$
Courrant moyen : $\frac{I_{0}+I_{1}}{2} = 10 \text{ A}$
$$I_{moy} = \frac{E}{2R}$$
$$\left< u \right>  = \frac{E}{2}$$
