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
$$s(t) = x(t) \times \left( \sum_{n \in \mathbb{Z}} Rect_{\frac{T_{0}}{2}}\left( t-nT_{0} \right) \right)$$
$$ = x(t) \times Rect_{\frac{T_{0}}{2}}\left( \frac{t}{\frac{T_{0}}{2}} \right) * \sum_{n \in \mathbb{Z}} \delta\left( t-nT_{0} \right)$$

#### 3.
$$TF[s(t)] = TF[x(t)]*TF\left[ Rect_{\frac{T_{0}}{2}}\left( \frac{t}{\frac{T_{0}}{2}}\right) \right] \times TF\left[ \sum_{n \in \mathbb{Z}}\delta\left( t-nT_{0} \right) \right] $$
Or : 
$$TF[x(t)] = A\left( \delta\left( f+F \right) - \delta\left(f-F\right) \right) \text{ avec } F = \frac{2}{T_{0}}$$
$$TF\left[ Rect_{\frac{T_{0}}{2}}\left( \frac{t}{\frac{T_{0}}{2}} \right) \right] = \frac{2}{T_{0}} \mathrm{sinc}\left( \frac{\pi fT_{0}}{2} \right) $$
$$TF\left[ \sum_{n \in \mathbb{Z}} \delta\left( t-nT_{0} \right) \right]= \frac{1}{T_{0}}  \sum_{n \in \mathbb{Z}} \delta\left( f-\frac{n}{T_{0}} \right)$$

Ainsi, 
...

# Exercice 1
$$C_{xy} = \int_{\mathbb{R}} x(\tau)y(\tau-t) \, d\tau $$
$$= \int_{0}^{t+1}1 \times \sin(2\pi F(\tau-t))  \, d\tau + \int_{t}^{t+1} 1 \times \sin(2\pi F(\tau-t)) \, d\tau  $$
$$+ \int_{t}^{4} 1 \times \sin(2\pi F(\tau-t)) \, d\tau + \int_{4}^{t+1} -1 \times \sin(2\pi F(\tau-t)) \, d\tau $$
$$+ \int_{t}^{t+1} -1 \times \sin(2\pi F(\tau-t)) \, d\tau + \int_{t}^{6} -1 \times \sin(2\pi F(\tau-t)) \, d\tau  $$
$$= \frac{1}{2\pi F}(\cos(2\pi F)-\cos(-2\pi Ft)) + \cos(2\pi F(4-t))-1 - \cos(2\pi F) + \cos(2\pi F(4-t)) - \cos(2\pi F) + 1 - \cos(2\pi F(6-t)) + 1 $$
Ainsi, 
$$\boxed{C_{xy} = \frac{1}{2\pi F}(2\cos(2\pi F(4-t))-\cos(2\pi Ft)- \cos(2\pi F(6-t))- \cos(2\pi F) + 1  )}$$
