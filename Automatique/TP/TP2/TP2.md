# 1.
#### 1.1
On voit que la transformée de fourrier avec une fréquence d’échantillonnage à $8kHz$ et une sinusoïde de fréquence $1kHz$ possède deux pics : un à $1kHz$ et un $à$ $7kHz$ comme le signal est échantillonné la fréquence théorique va se retrouver décalée par rapport à la fréquence réelle : $\left| f_{e}-f_{0}\right| = \left| 8000 - 1000\right| = 7000$



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
