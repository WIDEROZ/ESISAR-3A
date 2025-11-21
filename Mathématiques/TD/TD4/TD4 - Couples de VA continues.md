# Exercice 1




# Exercice 2
## 1.
$$f_{R}(t) = \begin{cases}
\frac{1}{4}&\text{si }t \in [1, 5] \\
0 &\text{sinon}
\end{cases}$$
$$f_{F}(t) = \begin{cases}
e^{ -\frac{t}{5} }& \text{si }t \in \mathbb{R}_{+} \\
0&\text{sinon}
\end{cases}$$

$$\forall r \in [1, 5],\mathbb{P}(R \leq F) = \mathbb{P}(R \leq r;F\geq r) = \mathbb{P}(R \leq r)(1-\mathbb{P}(F \leq r))$$
car $R$ et $F$ sont indépendantes. 
$$\mathbb{P}(R \leq F) = \int_{1}^{r} \frac{1}{4} \, dt\left( 1-\left( 1-e^{ -\frac{r}{5} } \right)  \right) $$
$$\boxed{\forall r \in [0, 5], \mathbb{P}(R \leq F) = \frac{r-1}{4}e^{ -\frac{r}{5} } }$$
$$\boxed{\forall r \in \mathbb{R}_{+} \setminus [0, 5], \mathbb{P}(R \leq F) = 0}$$
#### 2.
$$\iint_{\Delta} f(x, y)dxdy = $$



# Exercice 3
