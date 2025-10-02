# Exercice 1
Tous les courants sont positifs. 
EXCAL 1 MODIFIER SCHEMA
#### Anode
Pour $V_{cc} >0$ :
$$\forall i \in \{ a, b, c, d, e, f, g \}, \boxed{R = \frac{V_{cc}-V_{i}}{I}}$$
Pour allumer la diode il faut une différence de potentiel assez importante pour allumer la diode alors il faut que l'interrupteur soit fermé. 
Pour l'éteindre il faut que que la tension soit nulle alors : il faut que $V_{i} \approx 0$ donc que l'interrupteur soit ouvert. 

On suppose qu'on veuille allumer la LED en rouge, avec une tension de saturation de $V_{i} = 2V$ et un courant de $I = 10 \, mA$ :
$$R = \frac{5-2}{10 \times 10^{-3}} = 300  \, \Omega \text{ ie } R = 330 \, \Omega \text{ en normalisé}$$


#### Cathode
Pour $V_{cc} >0$ :
$$\forall i \in \{ a, b, c, d, e, f, g \}, \boxed{R = \frac{V_{cc}-V_{i}}{I}}$$
Pour que la diode soit ON il faut une différence de potentiel assez importante pour allumer la diode alors il faut que : $V_{i} \neq 0$ donc, que l'interrupteur soit fermé ie que : $V_{i} = V_{cc}$. 
Pour que la diode soit bloquante il faut que la tension a ses bornes soit nulle alors $V_{i} = 0$ alors l'interrupteur doit être fermée. 

On suppose qu'on veuille allumer la LED en rouge, avec une tension de saturation de $V_{i} = 2V$ et un courant de $I = 10 \, mA$ :
$$R = \frac{5-2}{10 \times 10^{-3}} = 300  \, \Omega \text{ ie } R = 330 \, \Omega \text{ en normalisé}$$


# Exercice 2
## b. Diode modèle linéaire
#### 1.
EXCAL 2
$$\frac{1}{R}= \frac{\Delta I}{\Delta V} = \frac{0.01 - 0.001}{0.68-0.60} = 0, 1125 \, S$$
$$\boxed{R = 9 \, \Omega }$$

#### 2.
$$E = RI + U_{d}$$
###### $e(t) = 5V = E$
La diode est passante. 
Alors, $U_{d} = 0.6V$ 
Donc, 
$$R = \frac{E-U_{d}}{I} = \frac{5 - 0.6}{0.001} =  4.4 \times 10^{3} \, \Omega = 4.4 \, k \Omega$$
Pour avoir un courant juste supérieur il faudra prendre une résistance normalisé de $\boxed{4.3 \, k\Omega}$
Ainsi : 
$$\boxed{I = \frac{E-U_{d}}{R} = 1.023 \, mA}$$

###### $e(t) = -5V = -E$
La diode est bien bloquante. 
Elle est alors assimilable à un générateur de courant de $-30 \, \mu A$
Donc, avec les valeurs précédentes
$$\boxed{U_{d} = -E -RI = -4.871 V}$$

#### 3.
En posant : 
$$T = \frac{1}{f_{0}} = 50 \, \mu s$$
EXCAL 3

## c. Diode réelle
#### 1.
EXCAL 4
Le courant de fuite : est de $IF = 30 \, \mu A$
Lorsque la diode est bloquée, les électrons s'amassent vers la jonction PN ce qui créé une DDP entre l'anode et la cathode. (phénomène de chargement du condensateur). Seulement la jonction laisse fuiter quelques électrons (phénomène de courant de fuite)
La diode retrouve son pouvoir bloquant lorsque la fuite de courant est nulle.


#### 2.
EXCAL 5
Les électrons mettent un certain temps pour traverser la zone chargée d'espace (ZCE) ce qui se traduit par un effet capacitaire. 

#### 3.
EXCAL 6

## 3. Caractéristique de la diode
EXCAL 7

# II. Transistors en commutation
## a. Transistor 2N2219A
#### 1. Caractéristiques constructeurs
$$\begin{array}{l}
\beta \in \begin{cases}
[50, 300] \text{ pour }I_{c} = 1mA \, V_{CE} = 10 V \, f = 1 kHz \\
[75, 375] \text{ pour }I_{c} = 10mA \, V_{CE} = 10 V \, f = 1 kHz
\end{cases} \\
 \\
V_{CE(sat)} = \begin{cases}
0.3 \text{ pour } I_{c} = 150 mA \text{ et } I_{B} = 15 mA \\
1 \text{ pour }I_{c} = 500 mA \text{ et } I_{B} = 50mA
\end{cases} \\ 
 \\
V_{BE(avl)} = 6 V \text{ min} \text{ pour } I_{e} = 10 \mu A \\
 \\
V_{CE(claq)} = 60 V \text{ pour } I_{c, \max} = 10nA \text{ et } I_{b, \max} = 20 nA
\end{array}$$

#### 2. Surface d'utilisation SOA
EXCAL 8
#### b. Calculs des composants
$$u_{R} = RI$$
$$u_{L} =  rI \text{ lorsque le transistor est saturé}$$
Alors, 
$$u_{R} + u_{L} = (R+r)I = V_{cc}-V_{CE}$$
Donc, ($V_{CE} = 35 V$)
$$R = \frac{V_{cc}-V_{CE}-rI}{I} = $$
