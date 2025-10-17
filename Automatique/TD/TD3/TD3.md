# Exercice 7.3
#### a.
$$x(t) = \begin{cases}
2 & \text{Si } t \in [1, 3] \\
0 & \text{Sinon}
\end{cases} = 2 rect_{2}\left( \frac{t-2}{2} \right)$$
$$y(t) = \begin{cases}
t & \text{Si } t \in [0, 1] \\
2-t &\text{Si } t \in [1, 2] \\
0 &\text{Sinon}
\end{cases}$$

#### b.



# Exercice 8
#### 1.
$$\forall n \in \mathbb{N}, s(t) = \begin{cases}
A \sin\left( \frac{2\pi}{T_{0}}t \right) & \text{Si }t \in \left[ nT_{0}, \frac{nT_{0}}{2} \right] \\
0 &\text{Sinon}
\end{cases}$$
EXCAL 1

#### 2.
On pose : $x(t) = A \sin\left( \omega t \right)$ :
$$s(t) = x(t) \times \left( \sum_{n \in \mathbb{Z}} Rect_{\frac{T_{0}}{2}}\left( t-\frac{T_{0}}{4}-nT_{0} \right) \right)$$

#### 3.
$$TF[s(t)] = TF[x(t)]*TF\left[ Rect_{\frac{T_{0}}{2}}\left( t-\frac{T_{0}}{4} -nT_{0} \right) \right] $$
Or : 
$$\sum_{n \in \mathbb{Z}}\int_{nT_{0}}^{nT_{0}}Rect_{\frac{T_{0}}{2}}\left( t-\frac{T_{0}}{4}-nT_{0} \right) e^{ -2j\pi ft } \, dt  $$
En posant : $T = t-\frac{T_{0}}{4} -nT_{0}$
$$= \sum_{n \in \mathbb{Z}} \int_{}^{-\frac{T_{0}}{4}-\frac{nT_{0}}{2}}  e^{ -2j\pi ft } \, dt $$
