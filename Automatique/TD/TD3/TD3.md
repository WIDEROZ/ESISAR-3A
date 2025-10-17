# Exercice 7.3
#### a.
$$x(t) = \begin{cases}
2 & \text{Si } t \in [1, 3] \\
0 & \text{Sinon}
\end{cases} = 2 rect_{2}\left( \frac{t-2}{2} \right)$$
$$y(t) = \begin{cases}
x & \text{Si } t \in [0, 1] \\
2-x &\text{Si } t \in [1, 2] \\
0 &\text{Sinon}
\end{cases}$$

#### b.
$$z(t) = x(t) * y(t) = \int_{1}^{2} 2 \times (2-t+\tau) \, d\tau = 2(2-t) + 5 = 7 - t$$

# Exercice 8
#### 1.
$$\forall n \in \mathbb{N}, s(t) = \begin{cases}
A \sin\left( \frac{2\pi}{T_{0}}t \right) & \text{Si }t \in [nT_{0}, (n+1)T_{0}] \\
0 &\text{Sinon}
\end{cases}$$
