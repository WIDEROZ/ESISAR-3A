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
Soit $n$ le nombre de lancers, on note $\mathrm{pi}$ l'estimation que l'on veut obtenir à $10^{-2}$ près avec une probabilité de $0.95$ ie : 
$$\mathbb{P}(\left| \mathrm{pi} - \pi\right| \leq 10^{-2}) = 0.95$$
de plus, on note : $\forall i \in [1, n], X_{i}$ la VA qui vaut $1$ si le point est dans le cercle et $0$ sinon. 
Alors, 
$$\frac{\mathrm{pi}}{4} = \frac{1}{n}\sum_{i = 1}^{n} X_{i} = \overline{S_{n}}$$
de plus, 
$$\mu = \frac{\pi}{4} \text{ et } \sigma = \frac{\sqrt{3\pi}}{4}$$
Alors, en posant $z= \frac{\sqrt{n}}{4\sigma} 10^{-2}$
$$\mathbb{P}\left( \frac{S_{n} - n\mu}{\sqrt{n} \sigma} \leq z \right) = \mathbb{P}\left( \sqrt{n}\frac{\overline{S_{n}}-\mu}{\sigma} \leq z \right)$$
Donc, d'après le théorème centrale limite, pour un $n$ assez grand, 
$$\sqrt{n}\frac{\overline{S_{n}}-\mu}{\sigma} \sim N \sim \mathcal{N}(0, 1)$$
On a alors : 
$$\mathbb{P}( \left| \mathrm{pi} - \pi\right|\leq 10^{-2}) = \mathbb{P}(\pi - )$$
$$ \mathbb{P}\left( \sqrt{n}\frac{\overline{S_{n}} - \mu}{\sigma} \leq \sqrt{n}\frac{10^{-2}}{4\sigma} \right) = 0.95$$

donc, 
On souhaite trouver $n$ d'après la feuille de la fonction de répartition de la loi $\mathcal{N}(0, 1)$ : 
$$\sqrt{n} \frac{10^{-2}}{4\sigma} = 1.64 \text{ (pour } 0.9495 \text{)}$$
(on prend plus bas pour être plus précis)
Alors, 
$$n = (1.64 \times 4\sigma \times 10^{2})^{2} \approx 253489$$
