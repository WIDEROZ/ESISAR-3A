# 1.
#### 1.1
On voit que la transformée de fourrier avec une fréquence d’échantillonnage à $8kHz$ et une sinusoïde de fréquence $1kHz$ possède deux pics : un à $1kHz$ et un $à$ $7kHz$ comme le signal est échantillonné la fréquence théorique va se retrouver décalée par rapport à la fréquence réelle : $\left| f_{e}-f_{0}\right| = \left| 8000 - 1000\right| = 7000$

De même pour le signal $2$, car comme $f_{e} =8 \cancel > 14 = 2f_{1}$ alors, le critère de Shannon n'est pas respecté donc on a un pic à $\left| f_{e}-f_{1}\right| = 1000$ et un normal à $7kHz$ c'est le phénomène de repliement du spectre

#### 1.2
$$f_{e} > 2f$$



#### 1.3
Même situation que dans la question 1.1


#### 1.4

#### 1.5. 
Pour le deuxième signal, la fréquence nuisible est de $50$ or lorsqu'on va récupérer la fréquence la fréquence 50 sera prise et celle de 200 ne sera prise en compte par la fréquence d’échantillonnage sera trop petite.

# 2.
#### 2.4
La représentation en DB permet de voir plus précisément les variations de DB. 

# 3.
#### 3.1
$$\boxed{\begin{array}{l}
M(f) &= \frac{1}{2}(\delta(f-f_{1}) + \delta(f+f_{1})  \\
&+ 1.8(\delta(f-f_{2}) + \delta(f+f_{2}))  \\
&+ 0.9(\delta(f-f_{3}) + \delta (f+f_{3})))
\end{array}}$$

Fréquences : $f_{1}, f_{2}, f_{3}$

##### 3.2
$$S(f) = \frac{1}{2}(\delta(f)+ k M(f)) * (\delta(f-f_{0})+\delta(f+f_{0}))$$
$$=\frac{1}{2}(\delta(f-f_{0})+\delta(f+f_{0}) + k(M(f-f_{0}) + M(f+f_{0})))$$

$$\boxed{S(f) = \frac{1}{2}\left( \delta(f-f_{0})+\delta(f+f_{0}) + k(M(f-f_{0})+M(f+f_{0}))\right)}$$

Fréquences : $f_{0}$, $f_{0}+f_{1}$, $f_{0}-f_{1}$, $f_{0}+f_{2}$, $f_{0}-f_{2}$, $f_{0}+f_{3}$, $f_{0}-f_{3}$


##### 3.3.
$$ 2\times(f_{0} + f_{3})  = 109920 kHz < f_{e, \min} = 109930 Hz$$
$$\frac{1}{f_{e, \min}} = T_{\min}$$

##### 3.4
$$\frac{109930}{10} = 10993 \text{ pts}$$

##### 3.5

# 4.
