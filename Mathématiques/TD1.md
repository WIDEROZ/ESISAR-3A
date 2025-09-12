# Exercice 1
#### 1.
On note : 
$$\begin{cases}
\Omega : \text{"le groupe de personnes"} \\
I : \text{"La personne écrit de manière illisible"} \\
Me : \text{"La personne est un medecin"} \\
Ma : \text{"La personne est un prof de maths"} \\
N : \text{"La personne est normale"}
\end{cases}$$
$$\begin{cases}
\mathbb{P}(I|Me) = 0.7 \\
\mathbb{P}(I|Ma) = 0.5 \\
\mathbb{P}(I|N) = 0.3
\end{cases} \text{ et } \begin{cases}
\mathbb{P}(Me) = 0.08 \\
\mathbb{P}(Ma) = 0.15 \\
\mathbb{P}(N) = 0.77
\end{cases}$$
Alors, comme : 
$$\begin{cases}
\mathbb{P}(I | Me) = \frac{P(I \cap Me)}{P(Me)} \\
\mathbb{P}(I | Ma) = \frac{P(I \cap Ma)}{P(Ma)} \\
\mathbb{P}(I | N) = \frac{P(I \cap N)}{P(N)}
\end{cases}$$
On a que : 
$$\begin{cases}
\mathbb{P}(I\cap Me) = \mathbb{P}(I | Me)P(Me) = 0.056 \\
\mathbb{P}(I\cap Ma) = \mathbb{P}(I | Ma)P(Ma) = 0.075 \\
\mathbb{P}(I\cap N) = \mathbb{P}(I | N)P(N) = 
\end{cases}$$
$(Me, Ma, N)$ est un SCE car les événements sont 2 a deux disjoints et leur réunion désigne $\Omega$
Alors, par la formule des probabilités totales : 
$$\mathbb{P}(I) = \mathbb{P}(I\cap Me) + \mathbb{P}(I \cap Ma) + \mathbb{P}(I \cap N)$$
