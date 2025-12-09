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
$$f_{2, 6} =  \sum_{k \in \{ 1, 2, 3, 4, 5 \}} p_{2, k} f_{k, 6} = \frac{1}{2}f_{1, 6} + \frac{1}{2} f_{4, 6}$$
$$f_{1, 6} = \sum_{k \in \{ 1, 2, 3, 4,5 \}} p_{1, k} f_{k, 6} = \frac{1}{2}f_{1, 6} + \frac{1}{2} f_{2, 6} \Leftrightarrow f_{1, 6} = f_{2, 6}$$
$$f_{4, 6} = \sum_{k \in \{ 1, 2, 3, 4, 5 \}} p_{4, k}f_{k, 6} = f_{3, 6}$$
$$f_{3, 6} = \frac{1}{4}+\sum_{k \in \{ 1, 2, 3,4, 5 \}} p_{3, k} f_{k, 6} =  \frac{1}{4}+0+0+\frac{1}{4}(f_{1, 6}+f_{2, 6}) $$
$$= \frac{1}{4}+\frac{1}{2}f_{2, 6} $$
Alors, 
$$f_{2, 6} = \frac{1}{2}\left( f_{2, 6} +\frac{1}{4}+\frac{1}{2}f_{2, 6} \right) = \frac{1}{8}+\frac{3}{4}f_{2, 6} $$
Ainsi, 
$$\boxed{f_{2, 6} = \frac{1}{2}}$$

###### b.
```R
liste_etat = 1:6;
N <- 100000;
sortie = rep(0, N);

for(i in 1:N){
  Etat <- 2;
  Etat <- sample(liste_etat, 1, prob = P[Etat, ]);
  
  while((Etat != 6) & (Etat != 5)){
    Etat <- sample(liste_etat, 1, prob = P[Etat, ]);
  }
  sortie[i] = (Etat == 6);
}

sum(sortie)/N
```

##### 3.
###### b.
$$R_{i, j} = \sum_{n \in \mathbb{N}^{*}} n \mathbb{P}(n \text{ passages par }j | X_{0} = i)$$
$$\begin{array}{rl}
\underset{n \in \mathbb{N}^{*}}{\sum}n \times&\mathbb{P}(\text{aller en }j | X_{0} = i)  \\
\times&\mathbb{P}(\text{renvenir }n \text{ fois en }j) \\
\times&\mathbb{P}(\text{ne plus revenir en }j)
\end{array}$$
$$=f_{i,j}(1-f_{j, j}) \sum_{n \in \mathbb{N}^{*}}n(f_{j, j})^{n-1} = f_{i,j}(1-f_{j, j}) \times \frac{1}{(1-f_{j, j})^{2}}$$
Ainsi, 
$$\boxed{R_{i, j} =  \frac{f_{i, j}}{1-f_{j, j}} }$$

###### c.
$$R_{2, 3} = \frac{f_{2, 3}}{1-f_{3, 3}}$$
$$f_{3, 3} = \frac{1}{4}(f_{1, 3} + f_{2, 3})$$
$$f_{1, 3} = \frac{1}{2}(f_{1, 3} + f_{2, 3}) \Leftrightarrow f_{1, 3} = f_{2, 3}$$
$$f_{3, 3} = \frac{1}{2}f_{2, 3}$$

$$f_{2, 3}= \frac{1}{2}(f_{1, 3} + f_{4, 3})\Leftrightarrow f_{2, 3} = f_{4, 3} = 1$$
Donc, 
$${f_{2, 3} = 1 \text{ et } f_{3, 3} = \frac{1}{2} }$$
Ainsi, 
$$\boxed{R_{2, 3} = 2}$$

###### d.

```R
liste_etat = 1:6;
N <- 100000;
passages = rep(0, N);
count = 0;

for(i in 1:N){
  Etat <- 2;
  Etat <- sample(liste_etat, 1, prob = P[Etat, ]);
  
  while((Etat != 6) & (Etat != 5)){
    Etat <- sample(liste_etat, 1, prob = P[Etat, ]);
    count = count + (Etat == 3);
  }
  passages[i] = count;
  count = 0;
}

sum(passages)/N
```

##### 4.
##### a.
$$T_{1} = \mathbb{E}(T_{F} | X_{0} = 1) = 1+\frac{1}{2}T_{1} +\frac{1}{2}T_{2}$$
###### b.
$$T_{2} = 1+ \frac{1}{2}T_{1} + \frac{1}{2} T_{4}$$
$$T_{3} = 1+ \frac{1}{4}T_{6} + \frac{1}{4}T_{5} + \frac{1}{4}T_{2}+\frac{1}{4}T_{1}$$
$$T_{4} = 1+T_{3}$$
$$T_{5} = 0$$
$$T_{6} = 0$$
Ainsi, 
$$\boxed{\begin{array}{l}
T_{1} = 1+\frac{1}{2}T_{1}+\frac{1}{2}T_{2} \\
T_{2} = 1+\frac{1}{2}T_1 + \frac{1}{2}T_{4} \\
T_{3} = 1+ \frac{1}{4}T_{1} + \frac{1}{4}T_{2} \\
T_4 = 1+ T_{3} \\
T_{5} = 0 \\
T_{6} = 0
\end{array}}$$
Produit matriciel...


$$0 = \begin{pmatrix}
1 \\
1 \\
1 \\
1
\end{pmatrix} + (P - I_{4})\begin{pmatrix}
T_{1} \\
T_{2} \\
T_{3} \\
T_{4}
\end{pmatrix} \Leftrightarrow \begin{pmatrix}
T_{1} \\
T_{2} \\
T_{3} \\
T_{4}
\end{pmatrix} = -(P-I_{4})^{-1}\begin{pmatrix}
1 \\
1 \\
1 \\
1
\end{pmatrix}$$
Alors, comme : 
$$P-I_{4} = \begin{pmatrix}
-\frac{1}{2} & \frac{1}{2} & 0 & 0 \\
\frac{1}{2} & -1 & 0 & \frac{1}{2} \\
\frac{1}{4} & \frac{1}{4} & -1 & 0 \\
0 & 0 & 1 & -1
\end{pmatrix}$$
$$(P-I_{4})^{-1} = -\begin{pmatrix}
7 & 4 & 2 & 2 \\
5 & 4 & 2 & 2 \\
3 & 2 & 2 & 1 \\
3 & 2 & 2 & 2
\end{pmatrix}$$
Ainsi, 
$$\boxed{\begin{pmatrix}
T_{1} \\
T_{2} \\
T_{3} \\
T_{4}
\end{pmatrix} = \begin{pmatrix}
15 \\
13 \\
8 \\
9
\end{pmatrix}}$$

###### c.
$$\mathbb{E}(T_{F} | X_{0} \in [\![1, 4]\!]) = \sum_{n \in \mathbb{N}} n \mathbb{P}(T_{F} = n | X_{0} \in [\![1, 4]\!] ) $$

$$\mathbb{P}(T_{F} = n | X_{0} \in [\![1, 4]\!]) $$
$$= \frac{\mathbb{P}((T_{F} = n) \cap ((X_{0} = 1) \sqcup (X_{0} = 2) \sqcup (X_{0} = 3)\sqcup (X_{0} = 4)))}{\mathbb{P}(X_{0}=1) + \mathbb{P}(X_{0}=2) + \mathbb{P}(X_{0}=3) + \mathbb{P}(X_{0}=4)}$$
Or $\mathbb{P}(X_{0} = 1) = \mathbb{P}(X_{0} = 2)= \mathbb{P}(X_{0} = 2)= \mathbb{P}(X_{0} = 4) = \frac{1}{4}$
Alors, 
$$\mathbb{P}(T_{F} = n | X_{0} \in [\![1, 4]\!]) = \frac{1}{4}\sum_{k = 1}^{4} \mathbb{P}(T_{F} = n | X_{0} = k)$$
Ainsi, 
$$\boxed{\mathbb{E}(T_{F} | X_{0} \in [\![1, 4]\!]) = \frac{1}{4}(T_{1} + T_{2} + T_{3} + T_{4}) = 11.25}$$


```R
liste_etat = 1:6;
N <- 100000;
temps_dans_laby = rep(0, N);
count = 1;

for(i in 1:N){
  Etat <- sample(1:4, 1, prob=t(c(1/4, 1/4, 1/4, 1/4)));
  Etat <- sample(liste_etat, 1, prob = P[Etat, ]);
  
  while((Etat != 6) & (Etat != 5)){
    Etat <- sample(liste_etat, 1, prob = P[Etat, ]);
    count = count + 1;
  }
  temps_dans_laby[i] = count;
  count = 1;
}

sum(temps_dans_laby)/N
```


#### Exercice 3
##### 1.
EXCAL
$$P = \begin{pmatrix}
0.65&0.2&0.15&0 \\
0&1&0&0 \\
0&0.3 & 0.6 & 0.1 \\
0 & 0 & 0 & 1
\end{pmatrix}$$

##### 2.
$$\pi^{(0)} = \begin{pmatrix}
1 & 0 & 0 & 0
\end{pmatrix}$$
On souhaite savoir : 
$$\pi^{(5)} = \pi^{(0)}P^{5} = \begin{pmatrix}
0.116 & 0.703 & 0.115 & 0.066
\end{pmatrix}$$
Ainsi, 
$$\boxed{\pi^{(5)} = \begin{pmatrix}
0.116 & 0.703 & 0.115 & 0.066
\end{pmatrix}}$$

##### 3.
Montrons que :  
$$\pi_{1}^{(n)} + \pi_{3}^{(n)} = \mathbb{P}(X_{n}= 1)+\mathbb{P}(X_{n} = 3) \underset{n \to +\infty}{\longrightarrow} 1$$
$$\pi^{(n)}_{j} = \sum_{i = 0}^{3} p_{i, j}\pi^{(n-1)}_{i}$$
$$\pi_{1}^{(n)} = 0.2\pi_{0}^{(n-1)} + \pi_{1}^{(n-1)} + 0.3\pi_{2}^{(n-1)} $$
$$\pi_{0}^{(n)} = 0.65 \pi_{0}^{(n-1)} \Rightarrow 0.65^{n} \text{ car } \pi_{0}^{(0)} = 1$$
$$\pi_{2}^{(n)} = 0.6 \pi_{2}^{(n-1)} + 0.15\pi_{0}^{(n-1)}$$
alors, 
$$\pi_{2}^{(n)} = 0.6\pi_{2}^{(n-1)}+ 0.15\times0.65^{n-1}$$
Donc, par récurrence rapide :
$$\pi_{2}^{(n)} = 0.15\sum_{k = 0}^{n-1}0.6^{n-k-1}0.65^{k}$$
Or comme : 
$$(0.65-0.6)\sum_{k = 0}^{n-1}0.6^{n-k-1}0.65^{k} = 0.65^{n}-0.6^{n}$$
On a alors,
$$\pi_{2}^{(n)} = 0.15 \times \frac{1}{0.05} \times (0.65^{n}-0.6^{n}) = 3(0.65^{n}-0.6^{n})$$
Donc, 
$$\pi_{1}^{(n)} = 0.2 \times 0.65^{n-1} + \pi_{1}^{(n-1)} + 0.9(0.65^{n-1} - 0.6^{n-1})$$
Alors, 
$$\pi_{1}^{(n)} = \pi_{1}^{(n-1)} + 0.2 \times 0.65^{n-1} + 0.9(0.65^{n-1} - 0.6^{n-1})$$
Encore par récurrence rapide : 
$$\pi_{1}^{(n)} = 0.2\sum_{k = 0}^{n-1}0.65^{k} + 0.9\sum_{k = 0}^{n-1}0.65^{k} - 0.9 \sum_{k = 0}^{n-1} 0.6^{k}$$
Alors, 
$$\pi_{1}^{(n)} = \frac{0.2}{0.35}(1-0.65^{n}) + \frac{0.9}{0.35}(1-0.65^{n}) - \frac{0.9}{0.4}(1-0.6^{n})$$
Donc, 
$$\boxed{\pi_{1}^{(n)} = \frac{22}{7}(1-0.65^{n}) - \frac{9}{4}(1-0.6^{n}) \underset{n \to +\infty}{\longrightarrow} \frac{25}{28}}$$
___
$$\pi^{(n)}_{j} = \sum_{i = 0}^{3} p_{i, j}\pi^{(n-1)}_{i}$$
$$\pi_{3}^{(n)} = \pi_{3}^{(n-1)} + 0.1\pi_{2}^{(n-1)} = \pi_{3}^{(n-1)} + 0.3(0.65^{n-1}-0.6^{n-1})$$
Alors, 
$$\pi_{3}^{(n)} = 0.3 \sum_{k = 0}^{n-1}0,65^{k} - 0.3 \sum_{k = 0}^{n-1}0.6^{k} = \frac{0.3}{0.35}(1-0.65^{n})-\frac{0.3}{0.4}(1-0.6^{n}) $$
Donc, 
$$\boxed{\pi_{3}^{(n)} = \frac{6}{7}(1-0.65^{n}) - \frac{3}{4}(1-0.6^{n}) \underset{n \to +\infty}{\longrightarrow} \frac{3}{28}}$$
Ainsi, 
$$\boxed{\pi_{1}^{(n)} + \pi_{3}^{(n)} \underset{n \to +\infty}{\longrightarrow} \frac{3}{28} + \frac{25}{28} = 1}$$
On cherche alors $T_{0}$
$$\begin{cases}
T_{0} = 1 + 0.65T_{0} + 0.15T_{2} \\
T_{2} = 1+0.6T_{2}
\end{cases}$$
Donc, 
$$\boxed{T_{0} \approx 3.93}$$

```R
liste_etat = 0:3;
N <- 100000;
temps_mort_ou_vacciné = rep(0, N);
count = 1;

for(i in 1:N){
  Etat <- 0;
  Etat <- sample(liste_etat, 1, prob = P[Etat+1, ]);
  
  while((Etat != 1) & (Etat != 3)){
    Etat <- sample(liste_etat, 1, prob = P[Etat+1, ]);
    count = count + 1;
  }
  temps_mort_ou_vacciné[i] = count;
  count = 1;
}

sum(temps_mort_ou_vacciné)/N
```

##### 4.
On veut calculer : 
$$f_{0, 3} = \sum_{n \in \mathbb{N}^{*}}\mathbb{P}(X_{n} = 3 | X_{0} = 0)$$
$$f_{0, 3} = 0.65f_{0, 3} + 0.2 f_{1, 3} + 0.15f_{2, 3} = 0.65 f_{0, 3} + 0.15f_{2, 3} $$
$$f_{2, 3} = 0.1 + 0.6f_{2, 3} +0.3f_{1, 3} = 0.1 + 0.6 f_{2, 3}\Leftrightarrow f_{2, 3} = 0.25$$
Ainsi, 
$$\boxed{f_{0, 3} = \frac{3}{28} \approx 0.107}$$

```R
liste_etat = 0:3;
N <- 100000;
temps_mort = rep(0, N);

for(i in 1:N){
  Etat <- 0;
  Etat <- sample(liste_etat, 1, prob = P[Etat+1, ]);
  
  while((Etat != 1) & (Etat != 3)){
    Etat <- sample(liste_etat, 1, prob = P[Etat+1, ]);
  }
  temps_mort[i] = (Etat == 3);
}

sum(temps_mort)/N
```


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
Comme on a une CMTD apériodique et irréductible $\pi^{(\infty)}_{i}$ existe et comme tous les états sont récurrents non nuls $\pi^{(\infty)} = \pi$
$$\pi^{(\infty)} = \begin{array}{c}
0.25&0.5&0.25
\end{array}$$

#### 3.
```R

```

##### 4.
Si $X_{0} = 1$ : 
$R$ n'est pas très précis

Si $X_{0} = 2$ : 
Exact

Si $X_{0} = 3$ : 
$R$ n'est pas très précis

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
Cette CMTD est irréductible car $\forall i, j \in [\![1, 5]\!], p_{i, j} \neq 0$ et apériodique car (les chemins page 1 -> page 2 -> page 1 et page 1 -> page 1 ont des probabilités non nulles)

Comme tous les états sont récurrents non nuls : 
$$\pi^{(\infty)} = \pi$$
##### 3.
$$\pi = \pi P\Leftrightarrow \pi^{\top} = P^{\top} \pi^{\top}$$
On cherche alors les valeurs propres de $P^{\top}$
