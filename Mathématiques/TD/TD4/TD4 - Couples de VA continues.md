# Exercice 1




# Exercice 2
## 1.
$$f_{R}(t) = \begin{cases}
\frac{1}{4}&\text{si }t \in [1, 5] \\
0 &\text{sinon}
\end{cases}$$
$$f_{F}(t) = \begin{cases}
\frac{1}{5}e^{ -\frac{t}{5} }& \text{si }t \in \mathbb{R}_{+}^{*} \\
0&\text{sinon}
\end{cases}$$

$$\mathbb{P}(R \leq F) = \iint_{\Delta} f_{R, F}(r, f) drdf$$
avec : 
$$\Delta = \{ (r, f) \in [\![1, 5]\!] \times \mathbb{R}_{+}^{*} | r \leq f \}$$
comme $R$ et $F$ sont indépendantes. 
$$\mathbb{P}(R \leq F) = \iint_{\Delta} f_{R}(r) f_{F}(f) \, drdf $$
$$\mathbb{P}(R \leq F) =  \int_{1}^{5} \int_{r}^{+ \infty} \frac{1}{20}e^{ -\frac{f}{5} } \, df  \, dr $$
$$= \frac{1}{4}\int_{1}^{5} e^{ -\frac{r}{5} } \, dr = -\frac{5}{4} \left( e^{ -1 }-e^{ -\frac{1}{5} } \right) $$
Ainsi, 
$$\boxed{\mathbb{P}(R \leq F) = \frac{5}{4}\left( e^{ -\frac{1}{5} } - \frac{1}{e} \right)}$$


#### 2.

$$\mathbb{P}(R \leq F) = \iint_{\Delta} f_{R, F}(r, f) drdf$$
avec : 
$$\Delta = \{ (r, f) \in (\mathbb{R}_{+}^{*})^{2} | r \leq f \}$$
comme $R$ et $F$ sont indépendantes. 
$$\frac{\lambda}{5}\int_{0}^{+ \infty} e^{ -\lambda r } \int_{r}^{+ \infty} e^{ -\frac{f}{5} } \, df  \, dr =\lambda\int_{0}^{+ \infty} e^{ -\left( \frac{1}{5}+\lambda \right)r } \, dr  $$
Ainsi, 
$$\boxed{\mathbb{P}(R \leq F) = \frac{\lambda}{\frac{1}{5}+\lambda}}$$




# Exercice 3
## 1.
$$\forall x \in \mathbb{R}, f_{X}(x) = \frac{1}{\sqrt{2\pi}} e^{ -\frac{x^{2}}{2} }$$

$$Z(\Omega) \in \mathbb{R}$$
$$\forall z \in \mathbb{R}, \mathbb{P}(Z \leq z) = \mathbb{P}(XY \leq z) = $$

# Exercice 1
## 2.
$$f_{U}(u) = \begin{cases}
1 & \text{si }u \in [0, 1] \\
0&\text{sinon}
\end{cases}$$
$$f_{V}(v) = \begin{cases}
\lambda e^{ -\lambda v }&\text{si } v \in \mathbb{R}_{+}^{*} \\
0&\text{sinon}
\end{cases}$$

$$U+V \in \mathbb{R}_{+}^{*}$$
$$\mathbb{P}(U+V \leq t) = \iint_{\Delta}f_{U}(u)f_{V}(v) \, dudv  $$
Car les VA sont $\amalg$
$$\Delta = \{ (u, v) \in [0, 1] \times \mathbb{R}_{+}^{*} | \forall t \in \mathbb{R}_{+}^{*}, u+v \leq t \}$$
$$= \{  \}$$
$$\mathbb{P}(U + V \leq t) = \int_{\mathbb{R}_{+}^{*}} (\mathbb{1}_{[0, 1]}(x)f_{U}(x))(f_{V}(t-x)\mathbb{1}_{]- \infty, 0[}) \, dx $$
Alors, 
$$\int_{- \infty}^{0}  dx $$