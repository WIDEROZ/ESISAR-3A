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

#### Loi student
Soit $X \rightsquigarrow \mathcal{N}(0, 1)$ et $Y_{n} \rightsquigarrow \chi_{n}^{2}$, 
On pose : $T_{n} = \frac{X}{\sqrt{\frac{Y_{n}}{n}}}$
On dit que $T_{n}$ suit une loi de student à $n$ degrés de libertés. 

#### Intervalle de confiance
On cherche $a, b$ tels que : 
$$\begin{cases}
\mathbb{P}(a \leq \theta \leq b) = 1-\alpha \\
\mathbb{P}(a \leq \theta) = \mathbb{P}(b \geq \theta) = \frac{a}{2} 
\end{cases}$$
où $\theta$ est la valeur que l'on veut estimer
- $1-\alpha$ est appelé niveau de confiance de l'intervalle
- On dit que $[a, b]$ est un intervalle de confiance de $\theta$ au risque $\alpha$

#### Intervalle de proportion d'un échantillon
Soit $K_{n}$ variable aléatoire qui compte le nombre d’individu
ayant la propriété P dans un échantillon de taille $n$ non
exhaustif.
$$K_{n} \rightsquigarrow \mathcal{B}(n, f)$$
$F_{n} = \frac{K_{n}}{n}$ peut être approché par une loi normale : 
$$U \rightsquigarrow \mathcal{N}\left( f, \sqrt{\frac{f(1-f)}{n}} \right)$$
On pose alors : 
$$U^{*} = \frac{F-f}{\sqrt{\frac{f(1-f)}{n}}} \rightsquigarrow \mathcal{N}(0, 1)$$
et on détermine $t_{1-\frac{\alpha}{2}}$ tel que : 
$$\mathbb{P}\left( -t_{1-\frac{\alpha}{2}} \leq \frac{F-f}{\sqrt{\frac{f(1-f)}{n}}} \leq t_{1-\frac{\alpha}{2}} \right) = 1- \alpha$$
Ainsi, 
$$\mathbb{P}\left( F- t_{1-\frac{\alpha}{2}} \sqrt{\frac{f(1-f)}{n}} \leq f \leq F + t_{1-\frac{\alpha}{2}} \sqrt{\frac{f(1-f)}{n}} \right) = 1-\alpha$$
Ainsi, on prendra : 
$$\begin{cases}
a = \hat{f} -t_{1-\frac{\alpha}{2}}\sqrt{\frac{\hat{f}(1-\hat{f})}{n}} \\
b = \hat{f} +t_{1-\frac{\alpha}{2}}\sqrt{\frac{\hat{f}(1-\hat{f})}{n}}
\end{cases}$$
où $\hat{f}$ est la proportion de l'échantillon. 
Ainsi, 
$$\boxed{I = [a, b]}$$

#### Intervalle de confiance de la moyenne
Voir le diapo faire cette partie en entier

