# Chapitre I - Espace probabilisé et probabilités conditionnelles
#### Exemple
##### 1.
On note : 
$$A  : \text{"Obtenir 2 boules de même parité"} = P \sqcup I$$
avec : 
$$P : \text{"Obtenir deux boules paires"}$$
$$I : \text{"Obtenir deux boules impaires"}$$

#### Définition : SCE
Une famille $(A_{i})_{i \in I}$ d'événements, ou $I$ est au plus dénombrable est appelé système complet d'événements lorsque : 
$$\begin{cases}
\forall i \neq j \in I, \mathbb{P}(A_{i}\cap A_{j}) = 0 \\
 \bigcup_{i \in I}A_{i} =\Omega
\end{cases}$$

#### Exercice
$$\mathbb{P}(A) = \frac{5}{100} \text{ et }\mathbb{P}(D) = \frac{60}{100} \text{ et } \mathbb{P}(\overline{D}|\overline{A}) = \frac{98}{100}$$

# Chapitre 2 - V.A.R. Discrète 
#### Exercice
$${\begin{array}{c|c}
x_{k} & -8 & -3 & 2 & 7 & 12 \\ \hline
\mathbb{P}(X = x_{k})& \frac{1}{4} & \frac{1}{4} & \frac{5}{16} & \frac{1}{8}&\frac{1}{16}
\end{array}}$$
On a des boules dans les urnes qui valent flemme d'écrire la suite...

#### Définition Fonction de répartition
Soit $(\Omega, \mathcal{A}, \mathbb{P})$ un espace probabilisé
On appelle fonction de répartition de la variable $X$ la fonction définie sur $\mathbb{R}$ par : 
$$\forall x \in \mathbb{R}, F_{X}(x) = \mathbb{P}(X \leq x)$$
$$F_{X} : \begin{cases}
\mathbb{R} \to [0, 1] \\
x \mapsto \mathbb{P}(X \leq x)
\end{cases}$$

#### Définition : Moment
Soit $\alpha \in \mathbb{N}$, 
On appelle moment d'ordre $\alpha$ de $X$, le nombre réel : 
$$m_{\alpha}(X) = \mathbb{E}(X^{\alpha})$$
#### Définition
Soit $X$ une variable aléatoire réelle finie, si $\sigma(X) \neq 0$ alors on appelle variable aléatoire centrée réduite par rapport à $X$ :
$$X^{*} = \frac{X-\mathbb{E}(X)}{\sigma(X)}$$

# Chapitre III. Variables aléatoires à densité
## I. VAR à densité
#### Définition
Soit $X$ une VAR. 
On dit que $X$ est une variable aléatoire à densité ou que $X$ admet une densité $f$ si sa fonction de répartition $F_{X}$ est continue et peut s'écrire sous la forme : 
$$\boxed{\forall x \in \mathbb{R}, F_{X}(x) = \int _{- \infty}^{x} f(t) \, dt }$$
Avec : 
- $\forall x \in \mathbb{R}, f(x) \geq 0$
- $f$ possède un nombre fini de points de discontinuité dénombrable.
- $\lim_{ x \to +\infty } F_{X}(x) = 1$


#### Exemple
![[Pasted image 20250910145956.png]]
Soit $f$ une fonction définie par : 
$$f(x) = \begin{cases}
\frac{1}{2}\sin(x)  \text{ si } x \in [0, \pi] \\
0 \text{ sinon}
\end{cases}$$
Montrer que $f$ est une densité de probabilité. 
Démonstration : 
$$\forall x \in [0, \pi], \sin(x) \geq 0$$
De plus, 
$$0 = \frac{1}{2}\sin(0) = \frac{1}{2}\sin(\pi) = 0$$
On a aucun point de discontinuité, donc :
$$\int_{0}^{\pi} \frac{1}{2}\sin(x) \, dx = -\frac{1}{2}(\cos(\pi)-\cos(0)) = 1$$
Ainsi, $f$ est bien une densité. $\square$

#### Définition
Soit $X$ une VAR de densité $f$. 
$$\mathbb{E}(X) = \int_{- \infty}^{+ \infty} tf(t) \, dt $$

#### Exemple
$$\mathbb{E}(X) = \frac{1}{2}\left( \left[ -x\cos(x) \right]_{0}^{\pi} + \int_{0}^{\pi} \cos(x) \, dx  \right) = \frac{1}{2}(\pi+0)=\frac{\pi}{2}$$

#### Propriété
On retrouve les même propriétés sur la variance et l'espérance.

#### Exemple
$$\mathrm{Var}(X) = \int_{0}^{\pi} x^{2} \frac{1}{2}\sin(x) \, dx - \frac{\pi^{2}}{4}$$
$$\int_{0}^{\pi} \frac{x^{2}}{2}\sin(x) \, dx = \left[- \frac{x^{2}}{2}\cos(x) \right]_{0}^{\pi} + \int_{0}^{\pi} x\cos(x) \, dx = \pi^{2}  - \int_{0}^{\pi} \sin(x) \, dx = \pi^{2} -2 $$

## II. Lois usuelles
#### Loi uniforme
On dit que $X$ suit une loi uniforme sur $[\alpha, \beta]$ si la densité $f$ de la variable aléatoire $X$  est définie par : 
$$f(t) = \begin{cases}
\frac{1}{\beta-\alpha} & \text{si } t \in [\alpha, \beta] \\
0 &\text{si } t \not\in [\alpha, \beta]
\end{cases}$$
$$X \sim \mathcal{U}([\alpha, \beta])$$
##### Espérance et Variance
$$\mathbb{E}(X) = \frac{\alpha+\beta}{2}$$
$$\mathrm{Var}(X) = \frac{(\beta - \alpha)^{2}}{12}$$

##### Fonction de répartition
$$F_{X}(t)  = \begin{cases}
0&\text{si }x \leq \alpha \\
\frac{x-\alpha}{\beta-\alpha}&\text{si }x >\alpha
\end{cases} $$

#### Loi exponentielle
On dit que $X$ suit une loi exponentielle de paramètre $\lambda >0$ lorsque $X$ admet pour densité la fonction $f$ définie par : 
$$f(t) = \begin{cases}
\lambda e^{ -\lambda t } & \text{si }t \geq 0 \\
0&\text{si } t < 0
\end{cases}$$
$$X \sim \mathcal{E}(\lambda)$$

##### Espérance et Variance
$$\mathbb{E}(X) = \frac{1}{\lambda}   $$
$$\mathrm{Var}(X) = \frac{1}{\lambda^{2}}$$

##### Fonction de répartition
$$F_{X}(t)  = \begin{cases}
0&\text{si }t \leq0 \\
1- e^{ -\lambda t }&\text{si }t >0
\end{cases} $$

##### Propriété - Caractérisation
$$\boxed{\forall (a, b) \in (\mathbb{R}_{+}^{*})^{2}, \mathbb{P}(X>a+b | X>b) = \mathbb{P}(X>a)}$$
On dit que la variable aléatoire $X$ est une variable aléatoire sans mémoire

Démonstration : 
$$\mathbb{P}(X > a+b | X > b) = \frac{\mathbb{P}(\{ X > a+b \} \cap \{ X >b \})}{\mathbb{P}(X > b)} = \frac{\mathbb{P}(\{ X > a+b \})}{\mathbb{P}(X>b)}$$
$$= \frac{e^{ -\lambda (a+b) }}{e^{ -\lambda b }} = e^{ -\lambda a } = \mathbb{P}(\{ X > a \})$$

#### Loi de Laplace-Gauss
La VA $X$ suit une loi de Laplace Gauss, on dit également loi normale centrée réduite, si $X$ admet pour densité la fonction $f$ définie par : 
$$f(x) = \frac{1}{\sqrt{2\pi}}e^{ -\frac{x^{2}}{2} }$$
$$X \sim \mathcal{N}(0, 1)$$


##### Espérance et Variance
$$\mathbb{E}(X) = 0$$
$$V(X) = 1$$

##### Fonction de répartition
$$\Pi(t) = \mathbb{P}(X \leq t) = \Omega(t)$$

##### Propriété
$$\forall x \in \mathbb{R}, \begin{cases}
\Pi(-x) = 1-\Pi(x) \\
\mathbb{P}(X > x)  =\mathbb{P}(X < -x) = \Pi(-x) \\
\mathbb{P}(-x < X < x) = 2\Pi(x)
\end{cases}$$







#### Loi normale
