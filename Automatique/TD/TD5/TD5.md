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
$$\forall \left| z\right| > 1,TZ \{ x(n) \} = \frac{1}{z}\sum_{n \in \mathbb{N}^{*}} n {\left( \frac{1}{z} \right)}^{n-1} = \frac{z}{\left( z-1 \right)^{2}} $$




#### 5.

$$\left| \frac{(n+1)\alpha}{nz}\right| \underset{n \to +\infty}{\longrightarrow} \left| \frac{\alpha}{z}\right|$$
Alors, par d’Alembert : 
$$ \forall \left|  z\right| > \left| \alpha\right|, TZ \{ x(n) \} = \sum_{ n \in \mathbb{N}}n \left( \frac{\alpha}{z} \right)^{n} = \frac{\alpha}{z} \sum_{n \in \mathbb{N}} n \left( \frac{\alpha}{z} \right)^{n-1} =  \frac{\alpha z}{\left( z-\alpha \right)^{2}} $$

#### 6.
Soit $\alpha \in \mathbb{C}$ tel que : $\left| a\right| < 1$, 
$$\left| \frac{\cos((n+1)b)\alpha}{z\cos(nb)}\right| = \left| \frac{\alpha}{z} \right| \left| \frac{\cos((n+1)b)}{\cos(nb)}\right|$$
Alors, par d’Alembert : 
$$\frac{\cos((n+1)b)}{\cos(nb)} = \frac{e^{ i(n+1)b }+e^{ -i(n+1)b }}{e^{ inb }+e^{ -inb }} = \frac{e^{ ib }+ e^{ -i(2n+1)b }}{1+e^{ -2inb }} \underset{n \to +\infty}{\longrightarrow}  e^{ ib }$$
Ainsi, 
$$\left| \frac{\alpha}{z} \right| \left| \frac{\cos((n+1)b)}{\cos(nb)}\right| \underset{n \to +\infty}{\longrightarrow}  \left| \frac{\alpha}{z}\right| \left| e^{ ib }\right| = \left|  \frac{\alpha}{z}\right| $$


## Exercice 2
$$\begin{cases}
y(n) = x(n) + by(n-1) \\
y(-1) = a
\end{cases}$$
#### 1.
$x_{1}$ est un Dirac elle est finie (RIF) : 
# Condition de stabilité
$$\boxed{\sum_{n \in \mathbb{N}} y(n) \in \mathbb{R}}$$
Alors, on fait un raisonnement par double récurrence : 
Init : 
$y(0) = 1$ et $y(-1) = 0$ 
Hérédité : 
Soit $n \in \mathbb{N}$ tel que : 
$$y(n) = x(n) + b y(n-1) $$