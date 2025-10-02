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
$$t_{0} = \frac{1}{f_{0}} = 50 \, \mu s$$
EXCAL 3

## c. Diode réelle
#### 1.
EXCAL 4
Le courant de fuite : est de $IF = 30 \, \mu A$.
Lorsque la diode est bloquée, les électrons s'amassent vers la jonction PN ce qui créé une différence de potentiel entre l'anode et la cathode (phénomène de chargement du condensateur). Seulement la jonction laisse fuiter quelques électrons (phénomène de courant de fuite)
La diode retrouve son pouvoir bloquant lorsque la fuite de courant est nulle.


#### 2.
EXCAL 5
Les électrons mettent un certain temps pour traverser la zone chargée d'espace (ZCE) ce qui se traduit par un effet capacitaire. 

#### 3.
EXCAL 6
Lorsqu'on augmente fortement la fréquence le condensateur n'a pas le temps de se charger (ou de se décharger) complètement. 

## 3. Caractéristique de la diode
EXCAL 7
On calcule la tension aux bornes de la résistance et on utilise la loi d'Ohm pour retrouver le courant. 
On fixe la résistance à une valeur ronde ($100 \, \Omega$ par exemple)

# II. Transistors en commutation
## a. Transistor 2N2219A
#### 1. Caractéristiques constructeurs
$$\begin{array}{l}
\beta \in \begin{cases}
[35, 300] \text{ pour }I_{c} = 0.1mA \, V_{CE} = 10 V \\
[50, 300] \text{ pour }I_{c} = 1mA \, V_{CE} = 10 V \\
[75, 300] \text{ pour }I_{c} = 10mA \, V_{CE} = 10 V \\
[100, 300] \text{ pour }I_{c} = 150mA \, V_{CE} = 10 V \\
[40, 300] \text{ pour }I_{c} = 500mA \, V_{CE} = 10 V
\end{cases} \\
 \\
V_{CE(sat)} = \begin{cases}
0.3 \text{ pour } I_{c} = 150 mA \text{ et } I_{B} = 15 mA \\
1 \text{ pour }I_{c} = 500 mA \text{ et } I_{B} = 50mA
\end{cases} \\ 
 \\
V_{BE(avl)} = 6 V \text{ min} \text{ pour } I_{e} = 10 \mu A \\
 \\
V_{CE(claq)} = 40 V
\end{array}$$

#### 2. Surface d'utilisation SOA
EXCAL 8
$$I_{c, \max} = 0.8 \, mA$$
$$V_{CE(claq)} = 40 \, V$$
$$I_{c, \min} = 10 nA$$

#### b. Calculs des composants
#### 1.
On considère que le transistor est saturé
$$u_{R} = RI \text{ et } u_{L} =  rI$$
Car on étudie le courant en régime établi. 
Alors, par la loi des mailles : 
$$u_{R} + u_{L} = (R+r)I = V_{cc}-V_{CE}$$
Donc, ($V_{CE} = 0 V$ pour $0.02A$ grâce à la datasheet)
$$\boxed{R = \frac{V_{cc}-V_{CE}-rI}{I} = \frac{10-0- 10\times0.02}{0.02} = 490 \, \Omega }$$

#### 1.
$$i_{c} = \beta i_{b} \Rightarrow \boxed{i_{b} = \frac{1}{\beta} i_{c} = \frac{0.02}{100} = 0.2 \, mA}$$

