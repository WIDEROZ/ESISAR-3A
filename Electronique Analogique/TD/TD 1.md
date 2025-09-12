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
