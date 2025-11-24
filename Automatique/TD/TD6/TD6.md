# Signaux déterministes à temps discret
## Exercice 3
### 1.
Impulsionnelle : 
$$\boxed{y(n) = \delta(n) + \delta(n-L)}$$

$${H(z) = 1+z^{-L}}$$
Fréquentielle : 
$$\boxed{H(f) = 1+ e^{ -2j\pi fT_{e}L }}$$
Amplitude : 
$$\left| H(f)\right| = \sqrt{(1+\cos(2\pi fT_{e}L))^{2} + \sin(2\pi fT_{e}L)^{2}} $$
Donc, 
$$\boxed{\left| H(f) \right| = \sqrt{2} \times \sqrt{1 + \cos(2\pi fT_{e}L)}= 2 \left| \cos(\pi fT_{e}L)\right|}$$
Phase :
$$\boxed{\arg(H(f)) = -\arctan\left( \frac{\sin(2\pi fT_eL)}{2\cos ^{2}(\pi fT_{e}L)} \right)}$$

#### 2.
Impulsionnelle
$$\boxed{h(n) = \delta(n) + 2 \delta(n-1) + \delta(n-2)}$$
Fréquentielle : 
$$H(f) = 1+2e^{ -2\pi jfT_{e} }+e^{ -4\pi jfT_{e} } $$
$$= e^{ -\pi jfT_{e} }(e^{ \pi jfT_{e} } + e^{ -\pi jfT_{e} })+e^{ -2\pi jfT_{e}}(1+e^{ -2\pi jfT_{e} }) $$
$$= e^{ -\pi jfT_{e} }2\cos(\pi fT_{e}) + e^{ -2\pi jfT_{e} }H_{1}(f)$$
Avec, 
$$\forall L \in \mathbb{N}, H_{L}(f) = 1+e^{ -2\pi jfT_{e}L }$$
Donc, 
$$H(f) = 2\cos(\pi fT_{e})$$

















Amplitude :
$$\left| H(f) \right| = \sqrt{(1+2\cos(2\pi fT_{e}) + \cos(4\pi fT_{e}))^{2} + (2\sin(2\pi fT_{e}) + \sin(4\pi fT_{e}))^{2}}$$
$$= \sqrt{4+4\cos(2\pi fT_{e})+2\cos(4\pi fT_{e}) + 2\cos(2\pi fT_{e})\cos(4\pi fT_{e})}$$
$$\overline{+ 4\sin(2\pi fT_{e})\sin(4\pi fT_{e})}$$

Phase : 
$$\boxed{\arg(H(f)) = -\arctan\left( \frac{2\sin(2\pi ft_{e})+\sin(4\pi fT_{e})}{1+ 2\cos(2\pi fT_{e}) + \cos(4\pi fT_{e})} \right)}$$
