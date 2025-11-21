# Signaux déterministes à temps discret
## Exercice 1
Soit $k \in \mathbb N$, 
#### 1.
$$\forall z \in\mathbb{C} \setminus \{ 0 \},  TZ \{ x(n) \} = \sum_{n \in \mathbb{Z}} \delta (n-k) z^{-n} = z^{-k}$$

#### 2.
$$\left| \frac{1}{1}z\right| \underset{n \to +\infty}{\longrightarrow} \left| \frac{1}{z}\right|$$
Alors, par d’Alembert : 
$$\forall \left| z\right| > 1 , TZ \{ x(n) \} = \sum_{n \in \mathbb{N}}  z^{-n} = \frac{z}{z-1}  $$

#### 3.
Soit $\alpha \in \mathbb{C}$, 
$$\left| \frac{\alpha}{z}\right| \underset{n \to +\infty}{\longrightarrow} \left| \frac{\alpha}{z}\right| < 1 \Leftrightarrow \left| z\right| > \left| \alpha\right|$$
Alors, par d’Alembert : 
$$ \forall \left|  z\right| > \left| \alpha\right|, TZ \{ x(n) \} = \sum_{ n \in \mathbb{N}} \left( \frac{\alpha}{z} \right)^{n} = \frac{z}{z-\alpha} $$

#### 4.
$$\left| \frac{n+1}{nz}\right| \underset{n \to +\infty}{\longrightarrow} \left| \frac{1}{z}\right|$$
Alors, par d’Alembert : 
$$\forall \left| z\right| > 1,TZ \{ x(n) \} = z\sum_{n \in \mathbb{N}} nz^{-n-1} = \frac{z}{(1-z)^{2}} $$

#### 5.

$$\left| \frac{(n+1)\alpha}{nz}\right| \underset{n \to +\infty}{\longrightarrow} \left| \frac{\alpha}{z}\right|$$
Alors, par d’Alembert : 
$$ \forall \left|  z\right| > \left| \alpha\right|, TZ \{ x(n) \} = \sum_{ n \in \mathbb{N}}n \left( \frac{\alpha}{z} \right)^{n} = \frac{\alpha}{z} \sum_{n \in \mathbb{N}} $$
$$$$