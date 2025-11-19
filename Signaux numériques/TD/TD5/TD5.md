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
$$\frac{10}{k} + 0.5 \, ns/étage$$
$$\begin{cases}
5.5 \, ns \\
3 \, ns \\
1.75 \, ns \\
1.125 \, ns
\end{cases}$$

#### 2.
On souhaite trouver $k$ tel que : 
$$\frac{10}{k} + 0.5 = 2 \, ns$$
Ainsi, 
$$\boxed{6< k = 6.\overline{6} < 7}$$
$$1\, GHz \equiv 1 \, ns$$
On souhaite trouver $k$ tel que : 
$$\frac{10}{k} + 0.5 = 1 \, ns$$
$$\boxed{k = 20 \text{ étages}}$$

## 3. Pipeline a 4 étages
#### 1.
$$i+3$$