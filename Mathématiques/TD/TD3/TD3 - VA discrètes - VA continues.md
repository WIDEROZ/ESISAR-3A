# VA discrètes
## Exercice 7
#### 1.
###### a.
$$\boxed{X(\Omega) = \{ -1 \} \cup\mathbb{N} \setminus \{ 0, 1 \}}$$
$$\forall n \in X(\Omega), \mathbb{P}(X = n) = \mathbb{P}\left( \bigcap_{k = 1}^{n} B_{k} \right) = \mathbb{P}(\overline{B}_{n})\prod_{k = 2}^{n-1} \mathbb{P}\left( B_{k} | \bigcap_{i=2}^{k-1} B_{k} \right) $$
$$\boxed{\mathbb{P}(X = n)= \left( 1- \frac{1}{n} \right) \prod_{k = 2}^{n-1} \frac{1}{k}}$$

##### b.
$$\mathbb{E}(X) = \sum_{n = 2}^{+ \infty}n \mathbb{P}(X = n) =  \sum_{n = 2}^{+ \infty} \frac{1}{(n-2)!} =  \sum_{n = 0}^{+ \infty} \frac{1}{n!}$$
$$\mathbb{E}(X) = e$$

#### 2.
$$Y(\Omega) =  1000\mathbb{N} \cup \{ -1 \} $$
$$\forall n \in Y(\Omega), \mathbb{P}(Y = n) = $$



# Exercice 8
#### 1.
$$N \sim \mathcal{G}(1-\alpha)$$
On compte le premier succès de la tentative d'évasion
$$\forall n \in \mathbb{N}^{*}, \mathbb{P}(N = n) = \alpha^{n-1}(1-\alpha)$$

#### 2.
Creuser un tunnel est une opération indépendante et identiquement répétée
$$\mathbb{P}((X=i)|(N = n)) = \binom{n}{i} p^{i} (1-p)^{n-i}$$

#### 3.
$$\mathbb{P}(X = i) = \frac{\mathbb{P}((X = i) \cap (N= n))}{\mathbb{P}((X=i)|(N = n))}$$
On prend la loi conjointe de $(X, N)$ : 
$$\mathbb{P}(X = i, N = n) = \mathbb{P}(N = n) \mathbb{P}((X=i)|(N = n)) $$
$$= \alpha^{n-1}(1-\alpha) \binom{n}{i} p^{i}(1-p)^{i}$$
Alors : 
$$\boxed{\mathbb{P}(X = i) = \sum_{n = i}^{+ \infty}\alpha^{n-1}(1-\alpha) \binom{n}{i} p^{i}(1-p)^{n-i}}$$
$$\mathbb{P}(X = i) = \frac{1-\alpha}{\alpha}  \frac{1}{1-(1-p)\alpha} \times \left( \frac{\alpha p}{1-\alpha(1-p)} \right)^{i}$$

#### 4.
$$\mathbb{E}(X) = \sum_{i = 1}^{+ \infty} i\frac{1-\alpha}{\alpha}  \frac{1}{1-(1-p)\alpha} \times \left( \frac{\alpha p}{1-\alpha(1-p)} \right)^{i}$$
$$=\frac{p(1-\alpha)}{(1-(1-p)\alpha)^{2}}\sum_{i = 1}^{+ \infty} i\left( \frac{\alpha p}{1-\alpha(1-p)} \right)^{i-1} $$
$$= \frac{p(1-\alpha)}{(1-(1-p)\alpha)^{2}} \frac{1}{\left( 1-\frac{\alpha p}{1-\alpha(1-p)} \right)^{2}} $$
$$= \frac{p(1-\alpha)}{(1-(1-p)\alpha)^{2}} \frac{1}{\left( \frac{1-\alpha(1-p) - \alpha p}{1-\alpha(1-p)} \right)^{2}} = \frac{p}{1-\alpha}$$


# VA continues
## Exercice 1
#### 1.
$f$ est définie et continue sur $\mathbb{R}$
Pour $k>0$ :
$$\int_{\mathbb{R}} f(x) \, dx = 2k \int_{0}^{+ \infty} e^{ -ax } \, dx = \frac{2k}{a} = 1 \Leftrightarrow \boxed{k = \frac{a}{2}}$$
$k<0$ est impossible car $f<0$
$$\forall x \in ]- \infty, 0], F_{X}(x) = \frac{a}{2}\int_{- \infty}^{x} e^{ a t } \, dt = \frac{1}{2}e^{ ax } $$
$$\forall x \in [0, + \infty[, F_{X}(x) = \frac{a}{2} \left( \int_{- \infty}^{0} e^{ at } \, dt +\int_{0}^{x} e^{ -at } \, dt  \right) $$
$$= \frac{a}{2}\left( \frac{1}{a} -\frac{1}{a}(e^{ -ax }-1) \right) = 1-\frac{e^{ -ax }}{2}$$
ie : 
$$\boxed{\forall x \in \mathbb{R}, F_{X}(x) = \begin{cases}
\frac{e^{ -a\left| x\right| }}{2}&\text{ si }x \in ]- \infty, 0] \\
1-\frac{e^{ -ax }}{2}&\text{ sinon}
\end{cases}}$$
$$\boxed{\mathbb{E}(X) = \int_{\mathbb{R}} x\frac{e^{ -a\left| x\right| }}{2} \, dx = 0 } (\text{fonction impaire centrée en 0})  $$
Donc, 
$$\mathrm{Var}(X) = \mathbb{E}(X^{2})$$
$$\mathbb{E}(X^{2}) = \int_{\mathbb{R}} t^{2}f(t) \, dt = -\frac{1}{a}[x^{2}e^{ -ax }]_{0}^{+ \infty} + 2\int_{0}^{+ \infty} \frac{x}{a}e^{ -ax } \, dx =   $$
$$= -\frac{2}{a^{2}}[x e^{ -ax }]_{0}^{+ \infty} - \frac{2}{a^{2}}[e^{ -ax }]_{0}^{+ \infty} = \frac{2}{a^{2}}$$
Ainsi, 
$$\boxed{\mathrm{Var}(X) = \frac{2}{a^{2}}}$$

## Exercice 2
#### 1.
$$\forall t \geq 0, \begin{cases}
f_{{1}}(t) = \lambda_{1} e^{ -\lambda_{1} t } \\
f_{{2}}(t) = \lambda_{2} e^{ -\lambda_{2} t }
\end{cases}$$
$$\begin{cases}
\mathbb{P}(T_{1} \leq t) = 1-e^{ -\lambda_{1} x } \\
\mathbb{P}(T_2 \leq t) = 1-e^{ -\lambda_{2} x }
\end{cases}$$
$$F_{Z}(t) = 0 \text{ pour }t<0$$
$$\forall t > 0, F_{Z}(t) = \mathbb{P}(T_{1} \leq t \cup T_{2} \leq t) = 2-(e^{ -\lambda_{2} t }+e^{ -\lambda_{2}t }) - 1-e^{ -(\lambda_{1}+\lambda_{2})t } + e^{ -\lambda_{1}t } + e^{ -\lambda_{2}t } $$
Ainsi, 
$$\boxed{\mathbb{P}(Z \leq t) = 1-e^{ -(\lambda_{1}+\lambda_{2})t }}$$

# Exercice 4
Soit $T$ le moment ou robert arrive
$$\mathbb{P}(T \leq t) = \int_{0}^{t} \frac{1}{30}  \, dt = \frac{t}{30} $$
$$\mathbb{P}(T \ge t) = 1- \frac{t}{30}$$

# Exercice 5
#### 1.
$$\mathbb{E}(\left| X-p\right|) = \int_{0}^{l} \frac{\left| x-p\right|}{l} \, dx = \frac{1}{l}\left( \left[ px-\frac{x^{2}}{2} \right]_{0}^{p}+ \left[ \frac{x^{2}}{2}-px \right]_{p}^{l} \right)  $$
$$= \frac{1}{l}\left( \frac{p^{2}}{2} + \frac{l^{2}}{2}-pl +\frac{p^{2}}{2} \right)= \frac{(p-l)^{2}}{2l}$$

#### 2.
$$p = l$$

# Exercice 6
#### 1.
$$(X \leq 250) \Leftrightarrow \left( X^{*} \leq \frac{247-m}{3} \right)$$
$$\mathbb P(X \leq 250) \leq 0.025 \Leftrightarrow \frac{247-m}{3} = -1.96$$
Ainsi, 
$$\boxed{m \geq 255.88}$$


#### 2.
$$\mathbb{P}\left( (X_{1}+X_{2})^* \leq \frac{500-2m}{2\sqrt{3}} \right) \leq 0.025$$
$$m \geq 254.16$$

# Exercice 7
$$\forall i \in [\![1, 3]\!], \forall t \in \mathbb{R}_{+}, \mathbb{P}(X_{i}\leq t) = 1-e^{ -\lambda t }$$

$$(T \leq t) = \begin{array}{c}
&(X_{1} \leq t) \cap (X_{2} \leq t) \\
\cup &(X_{2} \leq t) \cap (X_{3} \leq t) \\
\cup &(X_{1} \leq t) \cap (X_{3} \leq t)
\end{array} $$
Alors, comme $X_{1} \amalg X_{2} \amalg X_{3}$ 
$$\forall t \in \mathbb{R}_{+}, G(t) = 3\mathbb{P}(X \geq t)^{2}  -2 \mathbb{P}(X_{1} \leq t \cap X_{2} \leq t \cap X_{3} \leq t)$$
Ainsi, 
$$\boxed{\forall t \in \mathbb{R}_{+}, G(t) = 3(1-e^{ -\lambda t })^{2} - 2(1-e^{ -\lambda t })^{3}}$$
#### 2.
Comme $\exp$ est dérivable sur $\mathbb{R}$ de même que pour $x \mapsto x^{2}$ et $x \mapsto x^{3}$

Ainsi, 
$$\boxed{\forall t  \in \mathbb{R}_{+}, f(t) = 6\lambda e^{ -\lambda t }(1-e^{ -\lambda t }) }$$
