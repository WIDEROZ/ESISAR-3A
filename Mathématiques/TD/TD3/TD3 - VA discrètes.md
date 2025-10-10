# Exercice 7
#### 1.
###### a.
$$\boxed{X(\Omega) = \{ -1 \} \cup\mathbb{N} \setminus \{ 0, 1 \}}$$
$$\forall n \in X(\Omega), \mathbb{P}(X = n) = \mathbb{P}\left( \bigcap_{k = 1}^{n} B_{k} \right) = \mathbb{P}(\overline{B}_{n})\prod_{k = 2}^{n-1} \mathbb{P}\left( B_{k} | \bigcap_{i=2}^{k-1} B_{k} \right) $$
$$\boxed{\mathbb{P}(X = n)= \left( 1- \frac{1}{n} \right) \prod_{k = 2}^{n-1} \frac{1}{k}}$$

##### b.
$$\mathbb{E}(X) = \sum_{n = 2}^{+ \infty}n \mathbb{P}(X = n) =  \sum_{n = 2}^{+ \infty} \frac{1}{(n-2)!} =  \sum_{n = 0}^{+ \infty} \frac{1}{n!}$$
$$\mathbb{E}(X) = e$$

#### 2.
$$Y(\Omega) =  1000\mathbb{N} \cup \{ -1 \} $$
$$\forall n \in Y(\Omega), \mathbb{P}(Y = n) = $$