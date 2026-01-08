$$\mathcal{P}(P \leq 210) \leq \mathbb{P}(T \leq 210)$$

On fait un échantillon de $n$ personnes que l'on veut déterminer alors on pose :
$$S_{n} = \frac{1}{n}\sum_{k = i}^{n} X_{i}$$
$$\mathbb{E}(X) = \mu \text{ et } \mathrm{Var}(X) = \sigma^{2}$$
Alors, 
$$\mathbb{E}(S_{n}) = \mu \text{ et } \mathrm{Var}(S_{n}) = \frac{\sigma^{2}}{n}$$
Alors, 
$$\sqrt{n}\frac{S_{n}-\mu}{\sigma} \underset{n \to +\infty}{\longrightarrow} N \sim \mathcal{N}(0, 1)$$
Par le th centrale limite
On cherche alors $n$ tel que :
$$\mathbb{P}(\left| S_{n} - P\right| \leq 10^{-2}) = 0.95$$
$$\mathbb{P}(S_{n}-P \leq 10^{-2}) + \mathbb{P}(P-S_{n} \leq 10^{-2}) = 0.95$$
