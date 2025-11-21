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
$$\boxed{\mathbb{P}()}$$


#### 2.

$$\mathbb{P}(R \leq F) = \iint_{\Delta} f_{R, F}(r, f) drdf$$
avec : 
$$\Delta = \{ (r, f) \in (\mathbb{R}_{+}^{*})^{2} | r \leq f \}$$
comme $R$ et $F$ sont indépendantes. 
$$\frac{\lambda}{5}\int_{0}^{+ \infty} e^{ -\lambda r } \int_{r}^{+ \infty} e^{ -\frac{f}{5} } \, df  \, dr =\lambda\int_{0}^{+ \infty} e^{ -\left( \frac{1}{5}+\lambda \right)r } \, dr  $$
Ainsi, 
$$\boxed{\mathbb{P}(R \leq F) = \frac{\lambda}{\frac{1}{5}+\lambda}}$$




# Exercice 3
