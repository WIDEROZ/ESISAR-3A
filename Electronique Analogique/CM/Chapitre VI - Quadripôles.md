#### Définition
![[Pasted image 20251016083426.png]]
Les fléchages sont toujours les mêmes


$$\begin{pmatrix}
i_{1} \\
i_{2}
\end{pmatrix} = \begin{pmatrix}
y_{1, 1}&y_{1, 2} \\
y_{2, 1}&y_{2, 2}
\end{pmatrix} \begin{pmatrix}
v_{1} \\
v_{2}
\end{pmatrix}$$

$$y_{1, 1} = \frac{y_{1}y_{4}}{y_{1}+y_{4}}$$
$$y_{2, 1} = \frac{y_{1}y_{4}}{y_{1}+y_{4}}$$
$$v_{1}-v_{2}= z_{1}i_{1}$$
$$v_{1} = -z_{4}i_{2} \Leftrightarrow y_{4}= -\frac{i_{2}}{v_{1}}$$

$$y_{1, 1} = \frac{i_{1}}{v_{1}}=y_{1}$$
$$y_{2, 1} =  $$


# TD
$$K = \begin{pmatrix}
k_{1, 1}&k_{1, 2} \\
k_{2, 1}&k_{2,2}
\end{pmatrix}$$
On pose $v_{2} = 0$
$i_{1} = -i_{2}$
$$ v_{1}= -k_{1, 2} i_{2} \Leftrightarrow k_{1, 2} = -\frac{v_{1}}{i_{2}} = -Z_{1}\frac{i_{1}}{i_{2}} = Z_{1}$$
$$i_{1} = -k_{2, 2}i_{2} \Leftrightarrow k_{2, 2 } = - \frac{i_{1}}{i_{2}} \Leftrightarrow k_{2, 2 } = \frac{v_{1}}{Z_{1}i_{1}} = 1 $$


On pose $i_{2} = 0$, 
$$v_{1} = k_{1, 1}v_{2} \Leftrightarrow k_{1, 1} = \frac{v_{1}}{v_{2}} = \frac{Z_{1}+Z_{2}}{Z_{2}} $$
$$i_{1} = k_{2, 1} v_{2} \Leftrightarrow k_{2, 1} = \frac{i_{1}}{v_{2}} = \frac{Z_{1} + Z_{2}}{Z_{1}Z_{2}(Z_{1}+Z_{2})} = \frac{1}{Z_{2}}$$

Ainsi, 
$$\boxed{K = \begin{pmatrix}
\frac{Z_{1}+Z_{2}}{Z_{2}}&Z_{1} \\
\frac{1}{Z_{2}} & 1
\end{pmatrix} }$$

$$\boxed{K^{2} = \begin{pmatrix}
\left( \frac{Z_{1} +Z_{2}}{Z_{2}}  \right)^{2}+ \frac{Z_{1}}{Z_{2}}& (Z_{1}+Z_{2}) \frac{Z_{1}}{Z_{2}} + Z_{1} \\
\frac{Z_{1}+Z_{2}}{Z_{2}^{2}} + \frac{1}{Z_{2}}& \frac{Z_{1}}{Z_{2}}+1
\end{pmatrix}}$$

