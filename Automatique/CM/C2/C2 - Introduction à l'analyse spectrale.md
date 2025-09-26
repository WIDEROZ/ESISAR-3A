# I. Densité d'énergie spectrale
$${E}_{x} = \int_{\mathbb{R}} \left| x(t)\right|^{2} \, dt = \int_{\mathbb{R}} \left| X(f)\right|^{2} \, df = \int_{\mathbb{R}}S_{X}(f) \, df  $$
On note alors : 
### Densité spectrale d'énergie
$$\boxed{S_{X}(F) = \left| X(f)\right|^{2}}$$
### Fonction d'autocorrélation
$$\boxed{C_{x}(t) = TF^{-1}[X(f)^{2}] = x(t) * x^{*}(-t)} $$

Démonstration : 
$$TF^{-1}[X(f)^{2}] = TF^{-1}[X(f) X^{*}(f)]  = x(t)* x^{*}(-t)$$

#### Propriété
$$\boxed{\begin{array}{c}
C_{x}(t) = C_{x}^{*}(-t) \\
\left| C_{x}(t) \right|\leq C_{x}(0) = E_{x} \\
TF[C_{x}(t)] = S_{x}(f)
\end{array}}$$

#### Degré de self-cohérence
Il sert à normaliser de degré de correlation : 
$$\boxed{\Gamma(t) = \frac{C_{x}(t)}{C_{x}(0)}}$$
### Densité spectrale d'énergie croisée ou d'intercorrélation
$$\boxed{S_{XY}(f) = X(f) \cdot Y^{*}(f)}$$
Le module de cette fonction est significatif de la puissance d’interaction des deux signaux et son argument
du déphasage des deux signaux. 

#### Fonction d'intercorrélation
$$\boxed{C_{XY} = \int _{\mathbb{R}} x(\tau)y(\tau-t) \, d\tau = x(t) * y^{*}(-t) }$$

#### Propriété
$$\boxed{\begin{array}{c}
C_{XY}(t) = C_{XY}^{*}(-t) \\
TF[X_{XY}(t)] = S_{XY}(f) \\
\left| C_{XY}(t)\right|^{2} \leq C_{X}(0) \cdot C_{Y}(0) = E_{X} \cdot E_{Y}
\end{array}}$$

#### Degré de self-cohérence
$$\boxed{\Gamma_{XY}(t) = \frac{C_{XY}(T)}{\sqrt{C_{X}(0)C_{Y}(0)}}}$$


#### Exercice
Soit $u$ un signal de courte durée emis
Soit $x(t)$ le signal réfléchi affaiblit et bruité : 
$$x(t) = a u(t-t_{2}) + b(t)$$
Alors, 
$$ \begin{array}{c}
C_{UX}(t) = u(t)*au^{*}(-t-t_{2}) &+&\underbrace{u(t) * b^{*}(-t)} \\
&&0
\end{array}$$
$$= u(t)*au^{*}(-t+t_{2}) = a u(t) * \delta(t-t_{2}) * u^{*}(-t) = a C_{U}(t-t_{2}) $$
Or le maximum de cette fonction est en $t=  t_{2}$ 
Ainsi, il suffit de trouver le max de la fonction