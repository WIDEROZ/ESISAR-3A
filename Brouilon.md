Supposons que :
$$\mathbb{P}(N = n) = \frac{\lambda^{n}}{n!} e^{ -\lambda }$$
$$\mathbb{P}_{(N=n)}(X = x) = \binom{n}{k}\alpha^{x}(1-\alpha)^{n-x}$$
Alors, 
$$\mathbb{P}(X = x) = \sum_{n \in \mathbb{N}}\mathbb{P}((X = x) \cap (N = n))$$
$$= \sum_{n \in \mathbb{N}} P(N =n)\mathbb{P}_{(N = n)}(X = x)$$
$$= e^{ -\lambda }\sum_{n \in \mathbb{N}} \frac{\lambda^{n}}{n!} \binom{n}{x}\alpha^{x}(1-\alpha)^{n-x}$$
$$= \frac{e^{ -\lambda }(\lambda \alpha)^{x}}{x!} \sum_{n \in \mathbb{N}} \frac{\lambda^{n}}{}$$


$$= \mathbb{P}(N = n)\mathbb{P}_{(N = n)}(X =x) + \mathbb{P}(\overline{N = n}) \mathbb{P}_{(\overline{N = n})}(X = x)$$
Or 
$$(\overline{N = n}) = \bigsqcup_{k \in \mathbb{N} \setminus \{ n \}}(N = k)$$
Alors, 
$$\mathbb{P}_{(\overline{N = n})}(X = x) = \sum_{k \in \mathbb{N} \setminus \{ n \}} \binom{k}{x}\alpha^{x}(1-\alpha)^{k-x} = \mathbb{P}_{({N = n})}(X = x) - \binom{n}{x}\alpha^{x}(1-\alpha)^{n-x}$$
Alors, 
$$P(X = x) = \frac{\lambda^{n}}{n!} e^{ -\lambda } \mathbb{P}_{({N = n})}(X = x) + \left( 1-\frac{\lambda^{n}}{n!}e^{ -\lambda } \right)(\mathbb{P}_{(\overline{N = n})}(X = x) _{\binom{n}{x}\alpha^{x}(1-\alpha)^{n-x}})$$