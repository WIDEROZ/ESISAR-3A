# 1. Synthèse d'un filtre
## 1.
$$f_{c} = 1 kHz \text{ et } f_{e} = 8 \, kHz$$
$$H(f) = Rect_{[-1, 1] kHz}(f)$$
On pose : 
$$T = \frac{1}{f_{e}}$$
$$h(n) = \frac{1}{f_{e}} \int_{-f_{c}}^{+f_{c}} H(f) e^{ -2j\pi fT } \, df = \frac{1}{-2j\pi T}e^{ -2j\pi f_ } $$
