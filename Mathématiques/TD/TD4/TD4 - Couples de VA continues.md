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

$$\forall r \in [1, 5],\mathbb{P}(R \leq F) = \iint_{\Delta} f_{R, F}(r, f) drdf$$
avec : 
$$\Delta = \{ (r, f) \in [\![1, 5]\!] \times \mathbb{R}_{+}^{*} | r \leq f \}$$
comme $R$ et $F$ sont indépendantes. 
$$\mathbb{P}(R \leq F) = \iint_{\Delta} f_{R}(r) f_{F}(f) \, drdf $$
$$\mathbb{P}(R \leq F) =  \int_{1}^{5} \int \, dx  \, dr $$


#### 2.
$$\mathbb{P}({R} \leq F) = \mathbb{P}(R \leq r)(1-\mathbb{P}(F \leq r)) = \left( 1-e^{ -\lambda r } \right)e^{ -\frac{r}{5} }$$



# Exercice 3
