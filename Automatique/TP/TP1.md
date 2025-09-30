Translation : 
$$\int_{\mathbb{R}} x(t-t_{0})e^{ -2i\pi ft }  \, dt = \int_{\mathbb{R}} x(T) e^{ -2i\pi f(T+t_{0}) }  \, dT = e^{ -2i\pi ft_{0} } TF[x(t)] $$
Modulation : 
$$\int x(t) e^{ 2\pi if_{0}t }e^{ -2\pi ift } \, dt = \int x(t) e^{ -2\pi i(f-f_{0})t } \, dt  = X(f-f_{0}) $$

Dilatation : 
$$TF[x(at)] = \int_{- \infty}^{+ \infty} \frac{1}{\left| a\right|} \times x(t) e^{ -2j\pi f t/a } \, dt = \frac{1}{\left| a\right|} \hat{X}\left( \frac{f}{\left| a\right|} \right) $$
xx
Linéarité : 
$$TF[ax(t) + y(t)] = \int_{\mathbb{R}}(ax(t) + y(t))e^{ -2j\pi ft } \, dt =  a TF[x(t)] + TF[y(t)]$$
$$\square$$
œ