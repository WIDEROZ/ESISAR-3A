# Exercice 1
Tous les courants sont positifs. 
EXCAL 1
#### Anode
Pour $V_{cc} >0$ :
$$\forall i \in \{ a, b, c, d, e, f, g \}, \boxed{R = \frac{V_{cc}-V_{i}}{I_{i}}}$$
Pour allumer la diode il faut que la tension a la borne de la diode soit négative alors il faut que la résistance soit très petite donc $V_{i} \approx V_{cc}$
Pour l'éteindre il faut que le courant soit nul (ou que la tension soit positive ou nulle) alors : il faut que $V_{i} \approx 0$.  

#### Cathode
Pour $V_{cc} >0$ :
$$\forall i \in \{ a, b, c, d, e, f, g \}, \boxed{R = \frac{V_{i}-V_{cc}}{I_{i}}}$$
Pour que la diode soit ON il faut que la tension à ses bornes soit négative alors il faut que : $V_{i} \neq 0$ donc, que la résistance soit nulle ie que : $V_{i} = V_{cc}$. 
Pour que la diode soit bloquante il faut que la tension a ses bornes soient positive ou nulle (ou que le courant soit nul) alors $V_{i} = 0$ alors la résistance doit être grande. 

# Exercice 2
## b. Diode modèle linéaire
#### 1.
EXCAL 2

#### 2.
$$E = RI + U_{d}$$
$e(t) = 5V = E$ : 
Supposons que la diode soit bloquante : 
Alors elle est assimilable à un interrupteur ouvert, et alors $U_{d} = 5V > 0$ c'est ABSURDE donc la diode est passante. 
Alors, $U_{d} = 0V$
Donc, 
$$R = \frac{E}{I} =  5 \times 10^{3} = 5 \, k \Omega$$
Il faudra prendre une résistance normalisé de $5.1 \, k\Omega$
Alors, 
$$\boxed{I = \frac{E}{R} = 0.98 \, mA}$$
