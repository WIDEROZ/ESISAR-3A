# Exercice 1
#### 1.

| X    | 0   | 1   | 2   | 3   |
| ---- | --- | --- | --- | --- |
| Gain | -1  | 1   | 2   | 3   |
$$\Omega = \{ (a, b, c) \in [\![1, 6]\!]^{3} \}$$
$$\begin{cases}
\mathbb{P}(X = 3) = \frac{1}{6^{3}} \\
\mathbb{P}(X = 2) = \frac{\binom{3}{2}5 \times 1^{2}}{6^{3}}  = \frac{15}{6^{3}} \\
\mathbb{P}(X = 1) = \frac{\binom{3}{1} 5^{2}\times1}{6^{3}} = \frac{75}{6^{3}} \\
\mathbb{P}(X = -1) = \frac{5^{3}}{6^{3}}
\end{cases}$$

$$\mathbb{E}(X) = -\frac{17}{216} <0$$

# Exercice 2
### 1.
$$\Omega = \{ (a, b, c, d) \in \mathbb{B}^{4} \}$$
$$Z(\Omega) = [\![0, 15]\!]$$

On somme par paquets :
On note : 
$$\forall n \in [\![1, 3]\!], X_{n} = \{ (a, b, c, d) \in \mathbb{B}^{4} | a+b+c+d = n \}$$
$$\mathbb{P}(Z \in X_{n}) = \mathbb{P}\left( \exists (a_{k})_{k = 1}^{n} \in \{ 1, 2, 4, 8 \}, \bigcap_{k = 1}^{n}(Z = a_{k})  \right) = p^{n}(1-p)^{4-n}$$

On note : $\forall n \in [\![0, 3]\!], B_{n}$ la VA associé a la valeur du bit $n$
Alors, comme : $B_{n}\sim \mathcal{B}(p)$ :
$$Z=  B_{0} + 2B_{1} + 4B_{2} + 8B_{3}$$
On a finalement : 
$$\mathbb{E}(Z) = p+2p+4p+8p = 15p$$
Comme on répète indépendamment ces $4$ événements
$$\mathrm{Var}(Z) = \mathrm{Var}(B_{1}) + 4 \mathrm{Var}(B_{2}) + 16 \mathrm{Var}(B_{3}) + 64 \mathrm{Var}(B_{3}) = 85p(1-p)$$

# Exercice 3
$$\left| \Omega\right| = \binom{4n}{2p+1}$$
$$X_{n}(\Omega) = [\![0, 2p+1]\!]$$
$$\forall k \in [\![0, 2p+1]\!], \mathbb{P}(X_{n} = k) = \frac{\binom{n}{k} \times \binom{3n}{2p+1}}{\binom{4n}{2p+1}}$$
Alors, 
$$\mathbb{P}(X_{n} = k) =  \binom{2p+1}{k} \frac{n!}{(n-k)!} \frac{(3n)!}{(3n-(2p+1k-))!} \frac{(4n-(2p+1))!}{(4n!)} $$
$$\underset{n \to + \infty}{\sim} \binom{2p+1}{k} \left( \frac{1}{4} \right)^{k} \left( \frac{3}{4} \right)^{2p+1}  $$
Loi binomiale de paramètre $\frac{1}{4}$




# Exercice 6
## 1.
$$N \sim \mathcal{P}(\lambda)$$

$$Y = N-X$$

## 2.
Experience de Bernoulli répétés identiquement et indépendantes entre elles : 
$$\mathbb{P}(X = k | N = n) = \binom{n}{k}p^{k}(1-p)^{n-k}$$ Alors comme : 
$$(X = k) = \bigcup_{n = 0}^{+ \infty} (X = k \cap N= n)$$
On a : 
$$\mathbb{P}(X = k) = \sum_{n = 0}^{+ \infty} \mathbb{P}(N = n) \mathbb{P}(X = k | N = n)$$
Donc, 
$$\mathbb{P}(X = k) = \sum_{n = 0}^{+ \infty} \frac{\lambda^{n}}{n!} e^{ -\lambda }\binom{n}{k} p^{k}(1-p)^{n-k}$$
$$= e^{ -\lambda } \frac{p ^{k}}{k!}\sum_{n = 0}^{\infty} \frac{\lambda^{n}}{(n-k)!} (1-p)^{n-k} $$
$$=e^{ -\lambda } \frac{p ^{k}}{k!} \sum_{N = k}^{+ \infty} \frac{\lambda^{N+k}}{N!} (1-p)^{N} $$
Ainsi, 
$$\boxed{\mathbb{P}(X = k) = e^{ -\lambda p } \frac{(\lambda p)^{k}}{k!} } \text{ i.e. } \boxed{X \sim \mathcal{P}(\lambda p)}$$

#### 3.
De même pour $Y$ : 
$$\boxed{Y \sim \mathcal{P}(\lambda(1-p))}$$

#### 4.
$$\mathbb{P}(X = i \cap Y = j) = \mathbb{P}(X = i \cap N = i+j)  $$
$$= \mathbb{P}(N = i+j) \mathbb{P}(X = i | N = i+j)$$
$$= e^{ -\lambda } \frac{\lambda^{i+j}}{(i+j)!} \binom{i+j}{i}p^{i}(1-p)^{j}$$
$$= e^{ -\lambda } \lambda^{i+j} \frac{1}{j!i!} p^{i}(1-p)^{j}$$
$$\mathbb{P}(X = i) \mathbb{P}(Y = j) = e^{ -\lambda } \frac{\lambda^{i+j}}{i!j!}p^{i}(1-p)^{j}$$
$$\text{Ainsi }\boxed{\mathbb{P}(X=i)\mathbb{P}(Y=j) = \mathbb{P}(X=i \cap Y = j)}$$


