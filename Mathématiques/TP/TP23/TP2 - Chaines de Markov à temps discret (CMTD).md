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
Ainsi, par Chapman-Kolmogorof : 
$$\pi^{(4)} = \pi^{(0)}P^{4} = \begin{pmatrix}
0.3125&0.1875&0.125&0.125&0.125&0.125
\end{pmatrix}$$
$$\boxed{\mathbb{P}(X_{4} = 2 | X_{0} = 2)  = 0.1875}$$

##### 2.
$$\mathbb{P}(X_{4} = 2 | X_{0} = 2) = p_{2, 4, 3, 1, 2} + p_{2, 1, 2, 1, 2} + p_{2, 1, 1, 1, 2} $$
$$ \begin{array}{rl}
\mathbb{P}(X_{4} = 2 | X_{0} = 2)=&p_{2,  4} p_{4, 3}p_{3, 1}p_{1, 2} \\
+& p_{2, 1}p_{1, 2}p_{2, 1}p_{1, 2} \\
+&p_{2, 1}p_{1, 1}p_{1, 1}p_{1, 2} 
\end{array} $$
Ainsi, 
$$\boxed{\mathbb{P}(X_{4} = 2 | X_{0} = 2) = 0.1875}$$


##### 3.
```R
pi0 <- c(0, 1, 0, 0, 0, 0);

P <- matrix(0, 6, 6);
P[,1] <- c(0.5, 0.5, 0.25, 0, 0, 0);
P[,2] <- c(0.5,   0, 0.25, 0, 0, 0);
P[,3] <- c(  0,   0,    0, 1, 0, 0);
P[,4] <- c(  0, 0.5,    0, 0, 0, 0);
P[,5] <- c(  0,   5, 0.25, 0, 1, 0);
P[,6] <- c(  0,   0, 0.25, 0, 0, 1);


P2 = P %*% P;  
t(pi0) %*% P2 %*% P2  
  
liste_etat = 1:6;  
N <- 1000;  
count = 0;  
  
for (i in 1:N){  
  Etat <- 2  
  for (j in 1:4){  
    Etat <- sample(liste_etat, 1, prob = P[Etat, ]);  
  }  
  if(Etat == 2){  
    count = count + 1;  
  }  
}  
  
count/N  
count
```

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
En premiers lieux calculons : 
$$f_{1, 2}^{(n)} = \sum_{k \in \{ 1, 3, 4, 5, 6 \}} \mathbb{P}(X_{1} = k | X_{0} = 1) f_{k, 2}^{(n-1)}$$
$$= \frac{1}{2}f_{1, 2}^{(n-1)}$$
Comme $f_{1, 2}^{(1)} = \frac{1}{2}$ on a par récurrence rapide : 
$$\boxed{f_{1, 2}^{(n)} = \frac{1}{2^{n}}}$$



$$f_{2, 2}^{(n)} = \sum_{k \in \{ 1, 3, 4, 5, 6 \}} \mathbb{P}(X_{1} = k | X_{0} = 2)f_{k, 2}^{(n-1)}$$
$$= \mathbb{P}(X_{1} = 1 | X_{0} = 2) f_{1, 2}^{(n-1)} + \mathbb{P}(X_{1} = 4 | X_{0} = 2) f_{4, 2}^{(n-1)}$$
$$= \frac{1}{2}\left( \frac{1}{2^{n-1}} + f_{4, 2}^{(n-1)} \right) $$
$$= \frac{1}{2}\left( \frac{1}{2^{n-1}} +  \sum_{k \in \{ 1, 3, 4, 5, 6 \}} \mathbb{P}(X_{1} = k | X_{0} = 4) f_{k, 2}^{(n-2)} \right)$$
$$= \frac{1}{2}\left( \frac{1}{2^{n-1}} + f_{3, 2}^{(n-2)} \right)$$
$$= \frac{1}{2}\left( \frac{1}{2^{n-1}}+\sum_{k \in \{ 1, 3, 4, 5, 6 \}}\mathbb{P}(X_{1} = k | X_{0} = 3)f_{k, 2}^{(n-3)} \right)$$
$$= \frac{1}{2}\left( \frac{1}{2^{n-1}} + \frac{f_{1, 2}^{(n-3)}}{2^{2}} \right)$$
$$= \frac{1}{2}\left( \frac{1}{2^{n-1}} + \frac{1}{2^{n-1}} \right) = \frac{1}{2^{n-1}}$$
Ainsi, 
$$\boxed{f_{2, 2}^{(n)} = \frac{1}{2^{n-1}}}$$

###### b.
Ici on considère que les cas ou l'on emprunte les chemins : 
- $[2, 4, 3, 2]$
- $[2, 4, 3, 1, 2]$
sont traités. 

$$\begin{array}{l}
f_{2, 2}^{(n)} &= \underbrace{\frac{1}{2} \times \dots \times \frac{1}{2}} \\
&\,\,\,\,\,\,\,\,\,\,\,\,\,n \text{ fois} \\
& + \frac{1}{2}\times 1 \times \left( \frac{1}{4} \times \left( \frac{1}{2} \times \underbrace{\left( \frac{1}{2} \times \dots \times \frac{1}{2} \right)}  \right) \right) \\
& \space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space n-4 \text{ fois}
\end{array}$$
Donc, 
$$f_{2, 2}^{(n)} = \frac{1}{2^{n}} + \frac{1}{2^{4}} \times \frac{1}{2^{n-4}} = \frac{1}{2^{n}} + \frac{1}{2^{n}}$$
Ainsi, 
$$\boxed{f^{(n)}_{2, 2} = \frac{1}{2^{n-1}}}$$

###### c.
$$M_{2} = \sum_{n \in \mathbb{N}^{*}} nf_{2, 2}^{(n)} = \frac{1}{2}+ \sum_{n \in \mathbb{N}^{*} \setminus \{ 1, 2 \}} n \left( \frac{1}{2} \right)^{n-1} $$
$$= \frac{1}{2}-(1+1)+\sum_{n \in \mathbb{N}} n \left( \frac{1}{2} \right)^{n-1} = -\frac{3}{2}+\sum_{n \in \mathbb{N}} n \left( \frac{1}{2} \right)^{n-1}$$
Or comme : 
$$\forall x \in \mathbb{R}, \sum_{n \in \mathbb{N}^{*}} nx^{n-1} = \left( x\mapsto \sum_{n \in \mathbb{N}} x^{n} \right)'(x)$$
$$ = \left( x\mapsto -\frac{1}{1-x} \right)'(x) = \frac{1}{(1-x)^{2}}$$
On a : 
$$ \sum_{n \in \mathbb{N}}n \left( \frac{1}{2} \right)^{n-1} = \frac{1}{\left( 1-\frac{1}{2} \right)^{2}} = 4 $$
Ainsi, 
$$\boxed{M_{2} = \frac{5}{2}}$$

###### d.
```R
P <- matrix(0, 6, 6);
P[,1] <- c(0.5, 0.5, 0.25, 0, 0, 0);
P[,2] <- c(0.5,   0, 0.25, 0, 0, 0);
P[,3] <- c(  0,   0,    0, 1, 0, 0);
P[,4] <- c(  0, 0.5,    0, 0, 0, 0);
P[,5] <- c(  0,   0, 0.25, 0, 1, 0);
P[,6] <- c(  0,   0, 0.25, 0, 0, 1);


liste_etat = 1:6;
N <- 100000;
count = 1;
retour_2 = rep(0, N);
listEtat = rep(0, N);

for(i in 1:N){
  Etat <- 2;
  Etat <- sample(liste_etat, 1, prob = P[Etat, ]);
  
  while((Etat != 6) & (Etat != 5) & (Etat != 2)){
    count = count + 1;
    Etat <- sample(liste_etat, 1, prob = P[Etat, ]);
  }
  listEtat[i] = Etat;
  retour_2[i] = (Etat == 2) * count;
  count = 1;
}

sum(retour_2)/N
```


##### 2.
###### a.
$$f_{2, 6} = p_{2, 6} + \sum_{k \in \{ 1, 2, 3, 4, 5 \}} p_{2, k} f_{k, 6} = \frac{1}{2}f_{1, 6} + \frac{1}{2} f_{4, 6}$$
$$= \frac{1}{2} \sum_{k \in \{ 1, 2, 3, 4, 5 \}}p_{1, k}f_{k, 6} + \frac{1}{2} \sum_{k \in \{ 1, 2, 3,4, 5 \}} p_{4, k}f_{k, 6} $$
$$= \frac{1}{2}\left( \frac{1}{2} f_{1, 6} + \frac{1}{2} f_{2, 6} \right) + \frac{1}{2} f_{3, 6} $$
$$= \frac{1}{4}(f_{1, 6} + f_{2, 6}) + \frac{1}{2}\left( \frac{1}{4}+ \sum_{k \in \{ 1, 2, 3, 4,5 \}} p_{3, k}f_{k, 6} \right)$$
$$= \frac{1}{4}\left( f_{1, 6} + f_{2, 6} \right)+ \frac{1}{2}\left( \frac{1}{4} + \frac{1}{4}f_{1, 6} + \frac{1}{4}f_{2, 6} \right)$$

$$f_{1, 6} = \sum_{n \in \mathbb{N}}  $$




#### Exercice 3


# IV. Comportment sur le long terme d'une CMTD
## 1. Périodicité d'une CMTD
#### Définition - Périodicité
L'état $j \in E$ est périodique ssi
$$\exists k > 1, \forall m \not\in \{ kp; p \in \mathbb{N} \}, p_{j, j}^{(m)} = 0$$
$k$ est appelée période d'état de $j$.
$k$ est le PGCD de la période de chacun de ses états.

## 2. Régime stationnaire et distribution limite
#### Propriété
Soit $(X_{n})_{n \in \mathbb{N}}$ une CMTD irréductible et apériodique, alors, 
$$\pi^{(\infty)}_{i} = \lim_{ n \to \infty } \pi_{i}^{(n)} \text{ existe}$$
Si tous les états sont récurrents ou récurrents nuls alors,
$$\forall i \in E, \pi_{i}^{(\infty)} = 0$$
Si tous les états sont récurrents non nuls alors,
$$\pi^{(\infty)} = \pi$$
où :
$$\pi = \pi P \text{ et } \left|\left| \pi \right|\right|_{1} = 1 $$

#### Exercice 4
##### 1.
$$P = \begin{pmatrix}
0.6 & 0.4 & 0 \\
0.2 & 0.6 & 0.2 \\
0 & 0.4 & 0.6
\end{pmatrix}$$


$$\pi = \pi P = \begin{pmatrix}
0.6\pi_{1}+0.2\pi_{2} \\
0.4\pi_{1} + 0.6\pi_{2} + 0.4 \pi_{3} \\
0.2\pi_{2}+0.6\pi_{3}
\end{pmatrix}$$

$$\pi_{1}+\pi_{2}+\pi_{3} = 1$$
Alors, 
$$\pi_{1} = \frac{1}{5\times 0.4}\pi_{2} = \frac{1}{2}\pi_{2}$$
$$\pi_{3} = \frac{1}{2} \pi_{2} $$
$$\pi_{1} = \pi_{3}$$
Alors,
$$\pi_{2} = 1-2\pi_{1}$$
De plus, 
$$\pi_{2} = \pi_{1} + \pi_{3}$$
Donc, 
$$\pi_{2} = 1-2\pi_{1} = 2\pi_{1}$$
et
$$\pi_{1} = \frac{1}{4} $$
Ainsi, 
$$\boxed{\begin{array}{c}
\pi_{1} = \frac{1}{4} \\
\pi_{2} = \frac{1}{2} \\
\pi_{3} = \frac{1}{4}
\end{array}}$$

##### 2.
Comme on a une CMTD apériodique et irréductible $\pi^{(\infty)}_{i}$ existe
Alors, par ce programme $R$ : 
$$\pi^{(\infty)} = \begin{array}{c}
0.25&0.5&0.25
\end{array}$$

#### 3.
```R

```

##### 4.
Si $X_{0} = 1$ : 
$R$ est pas très précis

Si $X_{0} = 2$ : 
Exact

Si $X_{0} = 3$ : 
$R$ est pas très précis

#### Exercice 5
##### 1.
![[Pasted image 20251203113212.png]]
$$P = \begin{pmatrix}
0& \frac{1-p}{2}&\frac{1-p}{2}&0&0 \\
\frac{1-p}{2}&0&\frac{1-p}{2}&0&0 \\
\frac{1-p}{3}&\frac{1-p}{3}&0&0&\frac{1-p}{3} \\
1-p&0&0&0&0 \\
0&0&0&0&0
\end{pmatrix} + \begin{pmatrix}
\frac{p}{5}&\frac{p}{5}&\frac{p}{5}&\frac{p}{5}&\frac{p}{5} \\
\frac{p}{5}&\frac{p}{5}&\frac{p}{5}&\frac{p}{5}&\frac{p}{5} \\
\frac{p}{5}&\frac{p}{5}&\frac{p}{5}&\frac{p}{5}&\frac{p}{5} \\
\frac{p}{5}&\frac{p}{5}&\frac{p}{5}&\frac{p}{5}&\frac{p}{5} \\
\frac{p}{5}&\frac{p}{5}&\frac{p}{5}&\frac{p}{5}&\frac{p}{5} \\

\end{pmatrix}$$


##### 2.
Cette CMTD est irréductible car $\forall i, j \in [\![1, 5]\!], p_{i, j} \neq 0$ et apériodique car (État 4)

Comme tous les états sont récurrents non nuls : 
$$\pi^{(\infty)} = \pi$$
##### 3.
$$\pi = \pi P$$
