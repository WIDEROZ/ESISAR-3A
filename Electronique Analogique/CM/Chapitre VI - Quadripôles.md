#### Définition
![[Pasted image 20251016083426.png]]
Les fléchages sont toujours les mêmes

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


