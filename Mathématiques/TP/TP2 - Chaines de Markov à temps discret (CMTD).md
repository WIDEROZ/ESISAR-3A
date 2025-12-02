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
$$\boxed{\mathbb{P}(X_{4} = 2 | X_{0} = 2) = \mathbb{P}(X_{4} = 2) = 0.1875}$$

##### 2.
$$\mathbb{P}(X_{4} = 2 | X_{0} = 2)  = \frac{\mathbb{P}(X_{4} = 2 \cap X_{0} = 2)}{\mathbb{P}(X_{0} = 2)} = \mathbb{P}(X_{4} = 2) = \frac{3}{16}$$

##### 3.
R 

# 3. Classes d'équivalences, états recurrent et transitoires
#### Définition
$$p_{i, j}^{(n)} = \mathbb{P}(X_{n} = j | X_{0} = i) $$
$$i \rightsquigarrow j \Leftrightarrow p_{i, j}^{(n)} \neq 0$$

#### Définition : Probabilité de transition de $i$ à $j$
En un nombre $n$ d'étapes : 
$$f_{i, j}^{(1)} = p_{i, j}$$
$$f_{i, j}^{(n)} = \mathbb{P}(X_{n} =j ; X_{n-1} \neq j ;\dots ; X_{1} \neq j | X_{0} = i)$$
$$f_{i, j}^{(n)} = \sum_{k \neq j} \mathbb{P}(X_{1} = k | X_{0} = i)f_{k, j}^{(n-1)}$$
$$= \sum_{k \neq j} p_{i, k}f_{k, j}^{(n-1)}$$
En un nombre quelconque : 
$$f_{i, j} = \sum_{n \in \mathbb{N}} f_{i, j}^{(n)}$$

#### Définition : Temps moyen du premier retour
$$M_{i} = \sum_{n \in \mathbb{N}} n f_{i, i}^{(n)}$$


#### Définition
Soit $\{ X_{n} \}_{n \in \mathbb{N}}$ une CMTD homogène ie : 
$$\forall n \in \mathbb{N}, \forall i, j \in E, \mathbb{P}(X_{n+1} = x_{j} | X_{n} = x_{i})$$
Un état $j$ est transitoire ssi : 
$$\boxed{f_{j, j}< 1}$$
Sinon il est récurrent.
$j$ est dit récurrent non nul si $M_{j}$ est fini

#### Propriétés
![[Pasted image 20251107165612.png]]


#### Exercice 2
##### 1.
###### a.
$$\begin{array}{l}
\text{Pour} & n = 0 :& f_{2, 2}^{(0)} = 1 \\
\text{Pour} & n = 1 :& f_{2, 2}^{(1)} = 0 \\
\text{Pour} & n = 2 :& f_{2, 2}^{(2)} = \frac{1}{4} \\
\text{Pour} & n = 3 :& f_{2, 2}^{(3)} = \frac{1}{4}
\end{array} $$
$$f_{2, 2}^{(n)} = \sum_{k \in \{ 1, 3, 4, 5, 6 \}} \mathbb{P}(X_{1} = k | X_{0} = 2)f_{k, 2}^{(n-1)}$$
$$= \mathbb{P}(X_{1} = 1 | X_{0} = 2) f_{1, 2}^{(n-1)} + \mathbb{P}(X_{1} = 4 | X_{0} = 2) f_{4, 2}^{(n-1)}$$
$$= \frac{1}{2}(f_{1, 2}^{(n-1)} + f_{4, 2}^{(n-1)}) $$
$$= \frac{1}{2}\left( \sum_{k \in \{ 1, 3, 4, 5, 6 \}} \mathbb{P}(X_{1} = k | X_{0} = 1)f_{k, 2}^{(n-2)} +  \sum_{k \in \{ 1, 3, 4, 5, 6 \}} \mathbb{P}(X_{1} = k | X_{0} = 4) f_{k, 2}^{(n-2)} \right)$$
$$= \frac{1}{2}\left( \frac{f_{1, 2}^{(n-2)}}{2} + f_{4, 2}^{(n-2)} \right)$$
$$= \frac{1}{2}\left( \frac{1}{2^{n-2}}+\sum_{k \in \{ 1, 3, 4, 5, 6 \}}\mathbb{P}(X_{1} = k | X_{0} = 4)f_{k, 2}^{(n-3)} \right)$$


###### b.
$$f_{2, 2}^{(n)} = \frac{1}{2}\left( \frac{1}{2^{n-1}}+\frac{1}{4}+1/ \right)$$
$$= \frac{1}{8\times 2^{n-2}}$$