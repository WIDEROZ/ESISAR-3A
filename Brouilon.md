$$\delta_{T}(t) = \sum_{n \in \mathbb{Z}} \delta(t - nT)$$
$$\delta_{\frac{1}{T}}(f) = TF[\delta_{T}(t)] = \int_{\mathbb{R}}\sum_{n \in \mathbb{Z}} e^{ -2\pi jfnT }  \delta(t)e^{ -2\pi jft  } \, dt $$
$$= \sum_{n \in \mathbb{Z}} TF[e^{ -2\pi jfnT }\delta(t)] = \sum_{n \in \mathbb{Z}} TF[e^{ -2\pi jfnT }]= \sum_{n \in \mathbb{Z}}\delta\left( f-\frac{1}{nT} \right)$$
