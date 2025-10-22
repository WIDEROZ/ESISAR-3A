# Éléments d'analyse spectrale
## Exercice 2
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
$$= Tri_{[-2a, 2a]}$$