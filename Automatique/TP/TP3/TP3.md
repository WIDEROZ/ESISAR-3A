# 1. Synthèse d'un filtre
## 1.
$$f_{c} = 1 kHz \text{ et } f_{e} = 8 \, kHz$$
$$H(f) = Rect_{[-1, 1] kHz}(f)$$
On pose : 
$$T = \frac{1}{f_{e}}$$
$$h(n) = \frac{1}{f_{e}} \int_{-f_{c}}^{+f_{c}} H(f) e^{ 2j\pi n fT } \, df = \frac{1}{2j\pi n f_{e}T}\left( e^{ \frac{j\pi n }{4}}-e^{ -\frac{j\pi n }{4}} \right) $$
$$= \frac{1}{4} \mathrm{sinc}\left( \frac{\pi n}{4} \right)$$

$$\forall n \in [\![0, 34]\!], h_{T}(n) = h(n) \times rect_{35}(n) = h(n)$$

On rend le filtre causal : 
$$\forall n \in [\![0, 34]\!], h_{T_{c}}(n) = h(n-17)$$


## 3.
Le filtre est moins précis que la fenêtre rectangulaire du début, et on obtiens bien une allure similaire pour ce filtre. 

## 4.
