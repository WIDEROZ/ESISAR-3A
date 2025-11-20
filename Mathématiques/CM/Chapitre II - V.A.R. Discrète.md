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

