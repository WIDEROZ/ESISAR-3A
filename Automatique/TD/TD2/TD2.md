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
x +2B  \text{ si } x \in [B, 0] \\
2B-x \text{ si } x \in [0, B]
\end{cases}$$
Alors, 
$$4B^{2}\int_{-\infty}^{+ \infty} \mathrm{sinc}(t)^{2} e^{ -2j\pi ft } \, dt =  $$