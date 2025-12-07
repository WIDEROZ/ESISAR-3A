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
de plus, on note : $\forall i \in [1, n], X_{i}$ la VA qui vaut $1$ si le point est dans le quart de cercle et $0$ sinon. 
Alors, 
$$\frac{\mathrm{pi}}{4} = \frac{1}{n}\sum_{i = 1}^{n} X_{i} = \overline{S_{n}}$$
de plus, 
$$\forall i \in [1, n], \begin{cases}
\mathbb{E}(X_{i}) = \mu = \frac{\pi}{4} \\
\sqrt{\mathrm{Var}(X_{i})} = \sigma = \sqrt{\frac{\pi}{4} -\left( \frac{\pi}{4} \right)^{2}} = \frac{\sqrt{\pi(4-\pi)}}{4}
\end{cases}$$
On remarque que : 
$$\mathbb{P}(\left| \mathrm{pi} - \pi\right| \leq 10^{-2}) = \mathbb{P}\left( \sqrt{n} \frac{\left| \overline{S_{n}} - \mu\right|}{\sigma} \leq \sqrt{n} \frac{10^{-2}}{4\sigma} \right)$$
Alors, en posant :
$$N_{n} = \sqrt{n}\frac{\overline{S_{n}}-\mu}{\sigma}$$
et d'après le théorème centrale limite, comme les $X_{i}$ sont indépendantes et identiquement distribués, pour un $n$ assez grand : 
$$\boxed{N_{n} \sim \mathcal{N}(0, 1)}$$
De plus, en posant : 
$$z_{n} = \sqrt{n}\frac{10^{-2}}{4\sigma}$$
$$\mathbb{P}(\left| N_{n}\right| \leq z_{n} ) = \mathbb{P}( N_{n} \leq z_{n} ) - \mathbb{P}(N_{n} \leq -z_{n}) $$
$$=\mathbb{P}( N_{n} \leq z_{n} ) - (1-\mathbb{P}( N_{n} \leq z_{n} )) $$
Donc,
$$\mathbb{P}(\left| N_{n}\right| \leq z_{n})= 2\mathbb{P}( N_{n} \leq z_{n} )-1 = 0.95 $$
On souhaite trouver $n$ d'après la feuille de la fonction de répartition de la loi $\mathcal{N}(0, 1)$ : 
$$z_{n} = \sqrt{n} \frac{10^{-2}}{4\sigma} = 1.96 \text{ (pour }\mathbb{P}( N_{n} \leq z_{n} ) = 0.975 \text{)}$$
Ainsi, 
$$\boxed{n = (1.96 \times 4\sigma \times 10^{2})^{2} \approx 103599 }$$

### Exercice 3
#### 1.
$$\begin{cases}
f_{U}(u) = \lambda e^{ -\lambda u } \\
f_{V}(v) = \mu e^{ -\mu v }
\end{cases}$$

On pose : 
$$E = \{ (u, v) \in \mathbb{R}_{+}^{2} | u \leq 2v \}$$
$$\mathbb{P}(U \leq 2V) = \mathbb{P}((u, v) \in E) $$
$$= \iint_{(u, v) \in E} f_{(U, V)}(u, v) \,du\,dv$$
Or comme $U$ et $V$ sont indépendantes : $f_{(U, V)}(u, v) = f_{U}(u)f_{V}(v)$
$$= \lambda \mu\int_{0}^{+ \infty} e^{ -\mu v } \int_{0}^{2v} e^{ -\lambda u } \, du  \, dv =- \mu \int_{0}^{+ \infty} e^{ -\mu v }(e^{ -2\lambda v }-1) \, dv $$
$$= -\mu\left( \frac{1}{\mu+2\lambda} - \frac{1}{\mu} \right) = 1- \frac{1}{\mu+2\lambda} =  $$