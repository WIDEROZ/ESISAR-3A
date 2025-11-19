# Exercice 1
## Calcul sur les pipelines
#### 1.
La durée minimale de cycle d'horloge est de $120$ ps

Le débit maximal de ce pipeline est de : $1$ opération pour $120$ ps, ainsi, 
$$\frac{1}{120}  = 8.\overline{3} \, Gop.s^{-1} $$

La latence de ce pipeline est de 360 ps. 

#### 2.
Temps minimal pour le cycle d'horloge est de $150 + 20 = 170$
Le débit maximal de ce pipeline est de : $1$ opération pour $170$ ps, ainsi, 
$$\frac{1}{170} = 5.9 \, Gop.s^{-1}$$
La latence de ce pipeline est de : $3 \times 170 =510$ ps

#### 3.
La latence de ce pipeline augment de $60$ ps et le débit augmente jusqu'à $14.3 Go.s^{-1}$.

#### 4.
Le temps pour laisser le registre se stabiliser restreindra la capacité maximale que le pipeline peut faire : $50 \, Gop.s^{-1}$

## Calibrage d'un pipeline
#### 1.
$$\frac{10}{k} ns/étage$$
$$\begin{cases}
5 \, ns \\
2.5 \, ns \\
1.25 \, ns \\
0.625 \, ns
\end{cases}$$

#### 2.
On souhaite trouver $k$ tel que : 
$$\frac{10}{k} = 2 \, ns$$
alors, 
$$\frac{10}{2} = 5 \text{ étages}$$
