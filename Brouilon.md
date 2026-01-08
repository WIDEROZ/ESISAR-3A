$$\mathbb{P}(X = n) = \frac{\lambda^{n}}{n!} e^{ -\lambda }$$


$$\mathbb{P}_{(N=n)}(X = x) = \binom{n}{k}\alpha^{x}(1-\alpha)^{n-x}$$
$$\mathbb{P}(X = x) = \mathbb{P}((X = x) \cap (N=n)) + \mathbb{P}((X =x) \cap (\overline{N = n}))$$
$$= \mathbb{P}(N = n)\mathbb{P}_{(N = n)}(X =x) + \mathbb{P}(\overline{N = n}) \mathbb{P}_{(\overline{N = n})}(X = x)$$
Or 
$$(\overline{N = n}) = \bigsqcup_{k \in \mathbb{N} \setminus \{ n \}}(N = k)$$
Alors, 
$$\mathbb{P}_{(\overline{N = n})}(X = x) = \sum_{k \in \mathbb{N} \setminus \{ n \}}$$