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
