# Théorème centrale limite
Soient $(X_{i})_{i \in [\![1,n]\!]}$ des VAR indépendantes et identiquement distribués suivant la même loi que $X$
On pose : $\mu = \mathbb{E}(X)$ et $\sigma^{2} = \mathrm{Var}(X)$ et 
$$S_{n} = \sum_{i = 1}^{n} X_{i}$$
On a alors, 
$$\mathbb{E}(S_{n}) = n \mu \text{ et } \mathrm{Var}(S_{n}) = \sigma^{2}n$$
Alors, pour $Y \sim \mathcal{N}(0, 1)$, 
$$\boxed{\mathbb{P}\left( \frac{S_{n} - n\mu}{\sigma \sqrt{n}} \leq z \right) \underset{n \to +\infty}{\longrightarrow} \mathbb{P}(Y \leq y)}$$


### Exercice 1
#### 4.
##### a.

Soit $f$ la fonction de densité de la loi : $\mathcal{U}[0,1]$
$$f_{U}(u) = \begin{cases}
1 & \text{si } u \in [0, 1] \\
0 & \text{sinon}
\end{cases}$$
alors, 
$$\forall u \in [0, 1], \mathbb{P}(U \leq u) = \int_{0}^{u} \, dx = u $$
donc, comme : 
$$\mathbb{P}\left( X \leq x \right) = \mathbb{P}(U \geq e^{ -\lambda x } ) = 1-\mathbb{P}(U \leq e^{ -\lambda x })=1-e^{ -\lambda x }$$
Ainsi, 
$$\boxed{X \sim Exp(\lambda)}$$

### Exercice 2
#### 1.
Comme l'aire d'un cercle est $\pi R^{2}$ la probabilité qu'un point se trouve dans le quart de cercle est : 
$$\frac{\frac{\pi}{4}}{1} = \boxed{\frac{\pi}{4}}$$

#### 3.
Soit $n$ le nombre de lancers, 
Soit $(X_{i})_{i \in [\![1, n]\!]}$, les variables aléatoires qui valent $1$ si le point est dans le quart de cercle et $0$ sinon. 
Alors, 
$$\mu = \frac{\pi}{4} \text{ et } \sigma = \frac{\sqrt{3\pi}}{4}$$
$$\mathbb{P}(X_{i} = 1) = \frac{\pi}{4} \text{ et } \mathbb{E}(S_{n}) = \frac{n\pi}{4} \text{ et } \mathrm{Var}(S_{n}) = \frac{3n\pi}{16}$$
Et 
$$\mathbb{P}\left( \frac{S_{n} - n\mu}{\sigma \sqrt{n}} \leq x \right) $$

Soit $(X_{i})_{i \in [\![1, n]\!]} \in [0, 25]$ les VAR qui représentent la norme d'un point dans le carré de $0.5 \times 0.5$ définie par : 
Soit $x \in [0, 25]$ tel que si $x_{i}, y_{i}$ sont les coordonnées du point $i$, $x_{i}^{2} + y_{i}^{2} \leq x^{2}$
$$\mathbb{P}(X_{i} \leq x) = \frac{\pi}{4} $$
Alors,
$$\mu = \int \, dx  \text{ et } \sigma = \frac{\sqrt{3\pi}}{4}$$