# Signaux déterministes à temps discret
## Exercice 3
### 1.
Impulsionnelle : 
$$\boxed{y(n) = \delta(n) + \delta(n-L)}$$

$${H(z) = 1+z^{-L}}$$
Fréquentielle : 
$$H(f) = 1+ e^{ -2j\pi fT_{e}L } = e^{ - j\pi fT_{e}L}(e^{ j\pi fT_{e}L } + e^{ -j\pi fT_{e}L })$$
Ainsi, 
$$\boxed{H(f) = 2\cos(\pi fT_{e}L) e^{ -j\pi fT_{e}L }}$$

Amplitude : 
$$\boxed{\left| H(f) \right| = 2 \left| \cos(\pi fT_{e}L)\right|}$$
Phase :
$$\boxed{\arg(H(f)) = -\pi fT_{e}L}$$

#### 2.
Impulsionnelle
$$\boxed{h(n) = \delta(n) + 2 \delta(n-1) + \delta(n-2)}$$
Fréquentielle : 
$$H(f) = 1+2e^{ -2\pi jfT_{e} }+e^{ -4\pi jfT_{e} } $$
$$= e^{ -2\pi jfT_{e} }(e^{ 2\pi jfT_{e} } + e^{ -2\pi jfT_{e} }) + 2e^{ -2\pi jfT_{e} }$$
$$= 2e^{ -2\pi jfT_{e} }(\cos(2\pi fT_{e}) + 1) = 4\cos ^{2}(\pi fT_{e})e^{ -2\pi jfT_{e} }$$
Ainsi, 
$$\boxed{H(f) = 4\cos ^{2}(\pi fT_{e}) e^{ -2\pi jfT_{e} }}$$


Ampli : 
$$\boxed{\left| H(f)\right| = 4\cos ^{2}(\pi fT_{e})}$$

Phase : 
$$\boxed{\arg(H(f)) = -2\pi fT_{e}}$$

#### 3.


## Exercice 4
#### 1.
$$\frac{f_{e}}{f_{c}} = 0.25$$
On pose : $n_{0} = \left\lfloor \frac{N-1}{2} \right\rfloor$
$$\sum_{n = -n_{0}}^{n_{0}}  $$