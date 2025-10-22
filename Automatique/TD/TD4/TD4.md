# Éléments d'analyse spectrale
## Exercice 2
### 1. Signaux d'énergie finie
#### 1.
$$\int_{- \infty}^{+ \infty} \left| x(t)\right|^{2} \, dt = \int_{- \infty}^{+ \infty} \left| X(f)\right|^{2} \, df  $$
On pose : $f = 0$ alors,
$$\int_{- \infty}^{+ \infty} \left| x(t)\right|^{2} \, dt = \int_{- \infty}^{+ \infty} x(t) e^{ -2\pi jft } x^{*}(t)  \, dt = TF[x(t)x^{*}(t)]_{f = 0}$$
$$ = TF[x(t)]_{f = 0} * TF[x^{*}(t)]_{f = 0} = X(f)_{f = 0}* X^{*}(-f)_{f = 0} $$
Ainsi, 
$$= \int_{- \infty}^{+ \infty} X(\tau)X^{*}(\tau-0) \, d\tau  = \int_{- \infty}^{+ \infty} \left| X(f)\right|^{2} \, df $$

#### 2.
$$C_{xx}(t) = x(t) * x^{*}(-t) = TF^{-1}[X(f)] * TF^{-1}[X^{*}(f)] $$
$$= TF^{-1}[X(f)X^{*}(f)] = TF^{-1}[S_{X}(f)]$$


$$C_{xx}(0) = E_{x} = \int_{- \infty}^{+ \infty} 
S_{X}(f) \, df $$
#### 3.
$$E_{rect_{2a}(t)} = \int_{-a}^{a} \, dt = 2a $$
$$C_{rect_{2a}rect_{2a}}(t) = rect_{2a}(t) * rect_{2a}(-t) = rect_{2a}(t) * rect_{2a}(t) $$
$$= Tri_{[-2a, 2a]}(t) = \begin{cases}
2a & t \in [-2a, 0] \\
-2a& t \in [0, 2a] \\
0 & \text{sinon}
\end{cases}$$

### 2. Signaux de puissance finie
#### 1.
On pose : $T= \frac{1}{f_{0}}$
$$P_{s} = \frac{2}{T} \int_{0}^{\frac{T}{2}} \cos(2\pi f_{0}t)^{2} \, dt = \frac{1}{T} \int_{0}^{\frac{T}{2}} (1+\cos(4\pi f_{0}t)) \, dt  $$
$$= \frac{1}{T}\left( \frac{T}{2} -\left( \sin\left( 2\pi \right) - \sin(0) \right) \right) = \frac{1}{2}$$

$$s(t) = \sum_{n \in \mathbb{Z}} s_{n}\cos\left( 2\pi nf_{0}t \right) = \left| \cos(2\pi f_{0}t)\right| $$
$$s_{n} = \frac{2}{T} \int_{-\frac{T}{4}}^{\frac{T}{4}} \cos(2\pi f_{0}t) e^{ -2\pi jt \frac{2n}{T} } \, dt $$
$$= \frac{1}{2Tj\pi (f_{0}-2nT)}\left[ e^{ 2j\pi t \left( f_{0}-\frac{2n}{T} \right) } \right]_{-\frac{T}{4}}^{\frac{T}{4}} + \frac{1}{2j\pi T \left( f_{0}+\frac{2n}{T} \right)} \left[ e^{ 2j\pi t \left( f_{0}+\frac{2n}{T} \right) } \right]_{-\frac{T}{4}}^{\frac{T}{4}}$$
$$= \frac{1}{T}e^{ }\left( e^{ j \frac{\pi}{2} T f_{0}-  j \pi n} - e^{ j \pi n -j \frac{\pi}{2} T f_{0}} + e^{ j\pi n+j \frac{\pi}{2} T f_{0} } - e^{ -j\pi n - j \frac{\pi}{2} T f_{0} } \right) $$
Donc,
$$s_{n} = \frac{1}{2T^{2}}\left( \mathrm{sinc}\left( \pi\left( \frac{}{2} - n \right) \right) + \mathrm{sinc}\left( \pi\left( \frac{1}{2} + n \right) \right) \right)$$
$$\frac{1}{}$$
