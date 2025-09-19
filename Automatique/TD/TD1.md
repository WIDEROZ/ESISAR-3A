# Exercice 1
$$e^{ -2at } \text{ est intégrable sur} [0, + \infty[$$
Car : 
$$e^{ -2at } = o\left( \frac{1}{t^{2}} \right)$$
par les croissances comparés

$$E(x(t)) = \int_{0}^{+ \infty}  e^{ -2at } \, dt = \frac{1}{2a} $$

# Exercice 2
### 1.
On utilise la propriété sur la convolution
$$TF[\cos(2\pi f_{0}t)] * TF[Rect_{T}(t)] = TF[\cos(2\pi f_{0}t) Rect_{T}(t)]  $$

$$\int_{- \infty}^{+ \infty} \cos(2\pi f_{0}t)e^{ -2j\pi ft } \, dt = \frac{1}{2} \int_{- \infty}^{+ \infty} (e^{ 2j\pi(f_{0}-f)t }+e^{ -2j\pi (f_{0}+f)t }) \, dt $$
$$= \frac{1}{2} (TF_{f-f_{0}}[1] + TF_{f+f_{0}}[1]) = \frac{1}{2}(\delta(f-f_{0}) + \delta(f+f_{0})) $$
De plus, 
$$TF[Rect_{T}(t)] = \int_{-\frac{T}{2}}^{\frac{T}{2}} e^{ -2j\pi ft } \, dt = -\frac{1}{2j\pi f} (e^{ -j\pi fT }-e^{ j\pi fT }) = T\mathrm{sinc}\left( \pi fT \right) $$
Donc, 
$$\frac{T}{2}(\delta(f-f_{0}) + \delta(f+f_{0})) * \mathrm{sinc}\left( \pi fT \right) $$
Ainsi, 
$$\boxed{TF[x(t)] = \frac{T}{2}(\mathrm{sinc}(\pi(f-f_{0})T) + \mathrm{sinc}(\pi(f+f_{0})T))}$$

### 2. 
$$TF[tri_{T}(t)] = \int_{-T}^{0} (t+T)e^{ -2j\pi ft } \, dt + \int_{0}^{T} (T-t)e^{ -2j\pi ft } \, dt  $$
Ignoble

### 3.
$$TF[te^{ -at }u(t)] = \int_{0}^{+ \infty} te^{ -(2j\pi f+a)t } \, dt   $$
$$=  \frac{1}{2j\pi f+a} + \frac{1}{2j\pi f+a} \int_{0}^{+\infty} e^{ -(2j\pi f+a)t } \, dt$$

$$= \frac{1}{(2j\pi f+a)}\left( 1+ \frac{1}{(2j\pi f+a)} \right)$$
$$= \frac{1}{}$$