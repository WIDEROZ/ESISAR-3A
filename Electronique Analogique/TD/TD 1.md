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
$$\boxed{\forall t \in \left[ \frac{T}{2}, T \right], i(t) = \frac{E}{R}\left( 1 - e^{ -\frac{T}{2\tau} } \right)e^{ -\frac{t-T}{\tau} }}$$
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
