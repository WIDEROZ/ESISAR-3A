# Exercice 4
$$\overline{TF}[1_{[-B, B]}] = \int_{-B}^{B} e^{ 2j\pi ft } \, df = \frac{1}{2j\pi t}(e^{ 2j\pi Bt }-e^{ -2j\pi Bt }) =  2B\mathrm{sinc}(2\pi Bt) $$
#### 2.
$$1 = X(0) = \int_{- \infty}^{+ \infty} 2B\mathrm{sinc}(2\pi Bt) \, dt = \int_{- \infty}^{+ \infty} \frac{\sin(2\pi Bt)}{\pi t} \, dt =\int_{- \infty}^{+ \infty} \frac{\sin(t)}{\pi t} \, dt $$
On a posé $B = \frac{1}{2\pi}$
Ainsi, 
$$\int_{- \infty}^{+ \infty} \frac{\sin(t)}{t} \, dt = \pi $$
de plus, 
$$TF[4 B^{2}\mathrm{sinc}^{2}(2\pi Bt)] = 4B^{2}TF[\mathrm{sinc}(2\pi Bt)]  * TF[\mathrm{sinc}(2\pi Bt)]$$
$$= 4B^{2} Tri_{[-B, B]}(2\pi Bt)$$
Avec : 
$$Tri_{[-B, B]}(x) = \begin{cases}
0 \text{ si }x  \not\in [-B, B] \\
2(x +B)  \text{ si } x \in [B, 0] \\
2(B-x) \text{ si } x \in [0, B]
\end{cases}$$
Alors, en évaluant la transformée de fourrier en $0$ : comme $\hat{X}(0) = 2B$
$$4B^{2}\int_{-\infty}^{+ \infty} \mathrm{sinc}(2\pi B t)^{2} \, dt = 2B $$
Ainsi, 
$$\int_{-\infty}^{+ \infty} \mathrm{sinc}(t)^{2} \, dt = \pi $$

# Exercice 5
#### 1.
$$TF[x(t)e^{ j \omega_{m}t }] = \int _{- \infty}^{+ \infty} x(t) e^{- 2j\pi(f-f_{m})t } \, dt = X(f-f_{m})$$
#### 2.
$$TF^{-1}[X(f-f_{m})e^{ -j\omega_{m}t }] = e^{ -j\omega_{m}t }TF^{-1}[X(f-f_{m})] = x(t) $$

#### 3.
$$TF[z(t)\cos(2\pi f_{m}t)] = Z(f) * \frac{1}{2}(\delta(f-f_{m}) + \delta(f+f_{m}))$$
Alors, 
$$\frac{Z(f-f_{m}) + Z(f+f_{m})}{2} = \frac{1}{2}X(f) + \frac{1}{2}(X(f-2f_{m})+X(f+2f_{m}))$$



# Exercice 6
#### 1.
$$m(t) = (2F\mathrm{sinc}(2\pi Ft) + 4F^{2}\mathrm{sinc}^{2}(2\pi Ft)) + (\cos(2\pi f_{0}t)) + (2F\mathrm{sinc}(2\pi Ft) - 4F^{2}\mathrm{sinc}^{2}(2\pi Ft))\cos(4\pi f_{0}t)$$


#### 2.
$$X_{1}(f) \times \frac{1}{2}(\delta(2f - f_{0}) + \delta(2f+f_{0})) = \frac{1}{2}(X_{1}(2f-f_{0}) + X_{1}(2f+f_{0})) $$

$$ = \frac{1}{4}(M_{d}(f-4f_{0}) - M_{g}(f-4f_{0}) +2M_{d}(f) - 2M_{g}(f) +\cancel{ M_{d}(f)-M_{g}(f)} + M_{f}(f+4f_{0}) - M_{g}(f+4f_{0}))$$

-> Filtre passe bas $0$ -> $15$ KHz
$$= \frac{1}{2}(M_{d}(f) - M_{g}(f))$$
# Exercice 7
