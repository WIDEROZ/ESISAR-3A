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
$$\mathbb{P}(Z \in X_{n}) = \mathbb{P}\left( \exists (a_{k})_{k = 1}^{n} \in \{ 1, 2, 4, 8 \}, \bigcap_{k = 1}^{n}(Z = a_{k})  \right)$$
$$\mathbb{P}(Z \in X_{n}) = \mathbb{P}()$$

$$\mathbb{E}(Z) = \sum_{k = 0}^{15}k \mathbb{P}(Z = k) = 15 \times \mathbb{P}(X = 15) + \sum_{k = 1}^{3} \mathbb{P}(Z \in X_{k}) $$
