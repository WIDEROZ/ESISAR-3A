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


x
#### るあ　のるまる
Une variable aléatoire $X$ suit une loi normale de paramètre $(m, \sigma)$, noté : $X \sim \mathcal{N}(m, \sigma)$, si $X$ admet pour densité la fonction $f$ définie par : 
$$f(x) = \frac{1}{\sigma \sqrt{2\pi}} e^{ - \frac{\left( \frac{x-m}{\sigma} \right)^{2}}{2} }$$

##### えすぺらんす　も　ゔぁりあんす
$$\mathbb{E}(X) = m$$
$$V(X) = \sigma^{2}$$

##### ぷろぷりえて
$$X \sim \mathcal{N}(m, \sigma) \Leftrightarrow X^{*} = \frac{X-m}{\sigma} \sim \mathcal{N}(0, 1)$$

##### そむ　で　るあ　のるまる


$$\mathbb{P}(X \leq 50) = 0.25$$

$$\mathbb{P}\left( X^{*} \leq -\frac{m-50}{\sigma} \right) = 0.25 \Leftrightarrow \mathbb{P}\left( X^{*} \leq \frac{m-50}{\sigma}  \right) = 0.75$$
$$\mathbb{P}(X \geq 75) = 0.1 \Leftrightarrow \mathbb{P}\left( X^{*} \leq \frac{75-m}{\sigma} \right) = 0.9$$

$$\begin{cases}
\frac{75-m}{\sigma} = 1.29 \\
\frac{m-50}{\sigma} = 0.68
\end{cases} \Leftrightarrow \boxed{\begin{cases}
m = 58.63 \\
\sigma = 12.69
\end{cases}}$$


## III. Loi conjointe
La loi conjointe d'un couple $(X, Y)$ est définie par une fonction de $\mathbb{R}^{2} \to \mathbb{R}^{+}$ telle que : 
$$\begin{array}{cl}
f \text{ est continue presque partout } \\
\text{(il y a un nombre dénombrables de pts continus)} \\
\iint_{\mathbb{R}^{2}}f(x, y) \, dx\,dy = 1
\end{array}$$

#### Exemple
$$f(x, y) = \begin{cases}
\frac{3(x^{2}+y^{2})}{8} & \text{ si }(x, y) \in ([-1, 1])^{2} \\
0 &\text{sinon}
\end{cases}$$
$$\iint_{[-1, 1]^{2}} \frac{3(x^{2}+y^{2})}{8} \, dx \, dy = \frac{1}{8} (1^{3}+ 1^{3})(1+1) + \frac{1}{8}(1+1)(1^{2}+1^{2})=1$$
$$\mathbb{P}(0 < X < Y) = \iint_{D} f(x, y) dx dy \text{ ou } D = \{ (x, y) \in \mathbb{R}^{2} | 0 < x <y \}$$
$$= \int_{0}^{1} \left( \int_{0}^{y} f(x, y) \, dx \right)dy =\frac{1}{8}$$

#### Définition
$$\forall (\alpha, \beta) \in \mathbb{R}^{2}, F_{(X, Y)}(\alpha, \beta) = \mathbb{P}(X < \alpha, Y < \beta)$$
$$F_{(X, Y)}(\alpha, \beta) = \int_{- \infty}^{\alpha} \int_{- \infty}^{\beta} f_{(X, Y)}(x, y) \, dy  \, dx $$

#### Propriété
Densité marginale de $x$
$$\forall x \in \mathbb{R}, f_{X}(x) = \int_{\mathbb{R}} f(x, y) \, dy$$

Démonstration : 
Soit $\alpha \in \mathbb{R}$, 
$$\mathbb{P}(X < \alpha) = \mathbb{P}(X < \alpha, Y \in \mathbb{R}) = \int_{-\infty}^{\alpha} \int_{\mathbb{R}} f(x, y) \, dy  \, dx $$
Ainsi, 
$$f_{X}(\alpha) = \int_{\mathbb{R}} f(\alpha, y) \, dy$$

#### Exemple
Soit $Z = (X, Y)$, la loi uniforme sur le disque unité.
$$\forall x \in [-1,1] , f_{X}(x) = \int_{-\sqrt{1-x^{2}}}^{\sqrt{1-x^{2}}} \frac{1}{\pi} \, dt  = \frac{2}{\pi}\sqrt{1-x^{2}} = f_{Y}(x) $$
$$\forall (x, y) \in \mathbb{R}^{2} \setminus \mathcal{D}(0, 1), f_{X}(x) = f_{Y}(y) = 0$$


#### Exemple
$$\mathbb{P}(X < Y) = \iint_{\Delta}  \, dx \, dy = \frac{2}{5} $$

#### Somme de deux VA
$$F_{X+Y}(t) = \mathbb{P}(X+Y < t) = \iint_{\mathcal{D}} f_{(X, Y)}(x, y) \,dx\,dy $$
$$\text{ ou } D = \{ (x, y) \in \mathbb{R}^{2} | x+y < t \}$$

$$\boxed{f_{(X+Y)}(t) = (f_{X} * f_{Y})(t)}$$
Démonstration : 
On pose : 
$$\begin{cases}
u = x \\
v = x+y
\end{cases}$$
alors, 
$$\mathbb{P}(X+Y < t) = \int_{\mathbb{R}} \int_{- \infty}^{t} f_{(X, Y)}(u, v-u) \, du  \, dv $$

#### Exercice
$$Y^{*} = \frac{Y-0.6\sqrt{n}}{2n}$$

$$Y \leq 25 \Leftrightarrow Y^{*} \leq \frac{25-2n}{0.6\sqrt{n}}$$
$$\mathbb{P}\left( Y^{*} \leq \frac{25-2n}{0.6\sqrt{n}} \right) \leq 0.99$$
$$2.3\leq Y^{*} \leq \frac{25-2n}{0.6\sqrt{n}} \leq 3.8$$

#### Exercice

$$\mathbb{P}(X \geq x) = 1-\int_{- \infty}^{x}\frac{1}{\sqrt{2\pi}} e^{ - \frac{ x^{2}}{2} } \, dx \leq \frac{1}{} $$
$$\frac{1}{2}\mathbb{P}(\left| X\right| \geq x ) \leq  \frac{1}{2x^{2}}$$

#### Loi forte des grands nombres
Soit $X_{1}, \dots, X_{n}$ de même lois et d'espérance $m$ alors en posant : 
$$\tilde{X}_{n} =  \frac{1}{n} \sum_{k = 1}^{n} X_{n} \underset{n \to +\infty}{\longrightarrow} m 1_{\Omega}$$

#### Convergence en loi
Soit $(F_{X_{n}})_{n \in \mathbb{N}}$ une suite de fonction et $F_{X}$ leur fonction de répartition
On dit que $(X_{n})_{n \in \mathbb{N}}$ tend en loi vers $X$ lorsque : 
$$\forall t \in \mathbb{R}, \lim_{ n \to \infty } F_{X_{n}}(t) = F_{X}(t)$$

#### Approximation d'une loi binomiale par une loi de poisson
Soit $(X_{n})_{n \in \mathbb{N}}$ une suite de VAR de loi $\mathcal{B}\left( n, \frac{\lambda}{n} \right)$.
$X_{n}$ Converge en loi vers $X \sim \mathcal{P}(\lambda)$. 

#### Théorème central limite
Soit $(X_{n})_{n \in \mathbb{N}}$ une suite de VAR indépendantes et de même loi, d'espérance $m$ et d'écart type : $\sigma$
$$S_{n} = \sum_{k = 1}^{n} X_{k}$$
$$Z_{n} = \frac{S_{n} - nm}{\sigma \sqrt{n}}$$
Converge en loi vers une VAR : $X^{*} \sim \mathcal{N}(0, 1)$
ie : 
$$\forall a, b \in \mathbb{R}, \lim_{ n \to +\infty } \mathbb{P}(a \leq Z_{n} \leq b) = \int_{a}^{b} \frac{1}{\sqrt{2\pi}} e^{ -\frac{t^{2}}{2} } \, dt
$$


# Chapitre 6 - Estimation
Soit $\Omega$, 
On prend un échantillon de $n \in \mathbb{N}^{*}$ individus et l'on obtiens des donnés sur eux : $(x_{k})_{k \in [\![1, n]\!]}$, 
On pose : 
$$\hat{m} = \frac{1}{n} \sum_{k = 1}^{n} x_{k}$$
$$\hat{s}^{2} = \frac{1}{n} \sum_{k = 1}^{n} (x_{n} - \hat{m})^{2}$$
Soient $(X_{i})_{i \in [\![1, n]\!]}$ des VA indépendantes avec comme moyenne $m$ et de variance $s^{2}$
$$\overline{X_{n}} = \frac{1}{n}\sum_{k = 1}^{n} X_{k}$$
$$S_{n}^{2} = \frac{1}{n} \sum_{k = 1}^{n} (X_{k} - \overline{X_{n}})^{2}$$

## Estimateur
#### Définition
Soit $(X_{i})_{i \in [\![1, n]\!]}$, une suite de VA indépendant de paramètre $\theta$.
Soit $Y_{n} = g_{n}(X_{1}, \dots, X_{n})$ avec $g_{n}$ fonction de $n$ variables
###### $Y_{n}$ est un estimateur de $\theta$ si
$$\lim_{ n \to \infty } \mathbb{E}(Y_{n}) = \theta$$
$g_{n}(x_{1}, \dots, x_{n})$ est appelé estimation de $\theta$

###### $Y_{n}$ est un estimateur sans biais si
$$\forall n \in \mathbb{N}, \mathbb{E}(Y_{n}) = \theta $$

###### $Y_{n}$ est convergent lorsque
$$\lim_{ n \to \infty } \mathrm{Var}(Y_{n}) = 0 $$


#### Estimation ponctuelle
$$\mathbb{E}(\overline{X_{n}}) = m $$
$\hat{m}$ est donc une estimation ponctuelle dans biais de $\mathbb{E}(X)$
$$\mathbb{E}(S_{n}^{2}) = \frac{n-1}{n}s^{2}$$
Ainsi, $\frac{n-1}{n}\hat{s}^{2}$ est une estimation ponctuelle sans biais de $\mathrm{Var}(X)$

Démonstration égalité 2 : 
$$S_{n}^{2} = \frac{1}{n}\sum_{i = 1}^{n} (X_{i}-\overline{X}_{n})^{2}$$
Alors, 
$$S_{n}=\frac{1}{n}\left( \sum_{i = 1}^{n} (X_{i}-m)^{2} + {n} (\overline{X_{n}} - m)^{2} - 2(X_{n}-m)\sum_{i = 1}^{n} (X_{i} - m) \right)$$
Donc, comme : 
$$\sum_{i = 1}^{n} (X_{i} - m) = n(\overline{X_{n}} -m)$$
On a : 
$$S_n^{2} = \frac{1}{n} \sum_{i= 1}^{n} (X_{i} -m)^{2} -(\overline{X_{n}}-m)^{2}$$
Ainsi,
$$\mathbb{E}(S_{n}^{2}) = \frac{n-1}{n}s^{2}$$

## Maximum de vraisemblance
On choisit comme estimation de $\theta$ la valeur qui maximise la
probabilité de provoquer l’apparition de l'échantillon
effectivement observé.

Soit, $(x_{i})_{i \in [\![1,n]\!]}$ un échantillon, 
$$p = \prod_{i = 1}^{n} \mathbb{P}(x_{i}, \theta) = L(x_{1}, \dots, x_{n}, \theta)$$
Dans le cas continu : 
$$p = \prod_{i = 1}^{n} f(x_{i}, \theta)dx_{i}$$
où $f$ est la densité des VAR
On cherche alors à résoudre : 
$$L(x_{1}, \dots, x_{n}, \hat{\theta}) = \max_{\theta} L(x_{1}, \dots, x_{n}, \theta)$$

#### Propriété
L'estimateur du maximum de vraisemblance du paramètre $\theta$ est la solution de : 
$$\begin{cases}
\frac{\partial \ln(L(X, \theta))}{\partial \theta} = 0 \\
\frac{\partial^{2}\ln(L(X, \theta))}{\partial \theta^{2}}  < 0 
\end{cases}$$

#### Exercice
$$\ln(L(X, \lambda)) = -n\lambda + \ln(\lambda)\sum_{i = 1}^{n} x_{i} - \sum_{i = 1}^{n} \sum_{k = 0}^{x_{i}} (x_{i}-i) $$
$$\frac{\partial \ln(L(X, \lambda))}{\partial \lambda} = -n + \frac{1}{\lambda}\sum_{i = 1}^{n} x_{i} = 0 \Leftrightarrow \lambda = \frac{1}{n} \sum_{i = 1}^{n} x_{i} $$

$$\frac{\partial^{2} \ln(L(x, \lambda))}{\partial \lambda^{2}} = -\frac{1}{\lambda^{2}} \sum_{i = 1}^{n} x_{i} < 0$$

#### Exercice
$$\ln(L) = \frac{n}{2 \pi} -  n\ln \sigma - \frac{1}{2\sigma^{2}}\sum_{i = 1 }^{n} (x_{i} - m)^{2}{}  $$
Estimateur de $\sigma$ : 
$$\frac{\partial \ln(L)}{\partial \sigma} = -\frac{n}{\sigma} + \frac{1}{\sigma^{3}} \sum_{i = 1}^{n}(x_{i} -m)^{2} = 0$$
Alors, 
$$\boxed{\sigma^{2} = \frac{1}{n}\sum_{i = 1}^{n} (x_{i}-m)^{2} }$$
$$\frac{\partial^{2} \ln(L)}{\partial \sigma^{2}} = \frac{n}{\sigma^{2}} -\frac{3}{\sigma^{4}} \sum_{i = 1}^{n}(x_{i} - m)^{2} < 0 $$
Estimateur de $m$ : 
$$\frac{\partial \ln(L)}{\partial m} = \frac{1}{\sigma^{2}} \sum_{i = 1}^{n} (x_{i}-m) = 0 \Leftrightarrow \boxed{m = \frac{1}{n} \sum_{i = 1}^{n} x_{i} }$$

#### Loi  $\chi$ deux
Soient, $(X_{i})_{i = 1}^n$, VA indépendantes aléatoires normales centrés-réduites : 
On pose : 
$$U = \sum_{i = 1}^{n} X_{i}^{2}$$
On dit que $U$ suit une loi du Khi deux à $n$ degrés de liberté (ddl), on note : $U  \rightsquigarrow \chi_{n}^{2}$
On a : 
$$E(U) = n \text{ et } \mathrm{Var}(U) = 2n$$

