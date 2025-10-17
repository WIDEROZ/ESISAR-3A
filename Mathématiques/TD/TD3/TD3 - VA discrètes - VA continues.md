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


#### 4.
$$\mathbb{E}(X) = \sum_{i = 0}^{+ \infty}\sum_{n = 1}^{+ \infty}\alpha^{n-1}(1-\alpha) \binom{n}{i} p^{i}(1-p)^{n-i}$$

$$= \sum_{i = 0}^{+ \infty} \frac{1-\alpha}{\alpha} \sum_{n = 1}^{+ \infty} \binom{n}{i} (\alpha p)^{i}(\alpha(1-p))^{n-i} $$
$$= \sum_{n = 1}^{+ \infty} (1-\alpha)\alpha^{n-1} \sum_{i = 0}^{+ \infty} \binom{n}{i} p^{i}(1-p)^{n-i} = \sum_{n = 1}^{+ \infty} (1-\alpha)\alpha^{n-1} $$
$$= (1-\alpha) \frac{1}{1-\alpha} = 1$$
$$\boxed{\mathbb{E}(X) = 1}$$
