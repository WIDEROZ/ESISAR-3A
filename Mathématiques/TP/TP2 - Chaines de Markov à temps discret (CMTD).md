# 1. Introduction définitions et notations
Soit $\{ X_{n} \}_{n \in \mathbb{N}}$ une CMTD, et $E \subset \mathbb{N}$,
#### Notation
Soient $i, j \in E$, 
$$p_{i, j}  = \mathbb{P}(X_{n+1}=j | X_{n} = i)$$

#### Homogène 
$$\forall n \in \mathbb{N}, \forall i, j \in E, \mathbb{P}(X_{n+1} = x_{j} | X_{n} = x_{i})$$


# 2. Probabilités d'états et probabilités de chemins
#### Définition : probabilité d'état
$$\forall n \in \mathbb{N}, \forall j \in E,  \pi^{(n)}_{j} =  \mathbb{P}(X_{n} = j)$$

#### Définition : Probabilité d'un chemin
$$\forall (x_{k})_{k \in [\![1,n]\!]} \in E^{n}, p_{x_{0}, x_{1}, \dots, x_{n}} = \mathbb{P}\left(  \bigcap_{k = 1}^{n} X_{k} = x_{k} \right)$$

#### Exercice 1
##### 1.
$$\pi^{(0)} = \begin{pmatrix}
0&1&0&0&0&0
\end{pmatrix}$$
Ainsi, 
$$\pi^{(4)} = \pi^{(0)}P^{4} = \begin{pmatrix}
0.3125&0.1875&0.125&0.125&0.125&0.125
\end{pmatrix}$$
$$\boxed{\mathbb{P}(X_{4} = 2 | X_{0} = 2) = 0.1875}$$

##### 2.
$$\mathbb{P}(X_{4} = 2 | X_{0} = 2)  = \frac{\mathbb{P}(X_{4} = 2 \cap X_{0} = 2)}{\mathbb{P}(X_{0} = 2)} = \mathbb{P}(X_{4} = 2) = \pi_{2}^{(4)} $$
La CMTD est sans mémoire $X_{4} \amalg X_{2}$


$$\pi^{(0)} = \begin{pmatrix}
0&1&0&0&0&0
\end{pmatrix}$$
