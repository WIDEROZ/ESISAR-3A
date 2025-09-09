# I. Classification des signaux
## 1. Classification des signaux
Un signal peut être : 
- Aléatoire
ou 
- Déterministe
(et encore plus)
![[Pasted image 20250909141514.png]]
Ce signal est aléatoire

### Classification énergétique
#### Définition de l'énergie d'un signal $x$
$$\boxed{E_{x} = \int _{- \infty}^{+ \infty} \left| x(t)\right|^{2} \, dt }$$
Unité : Joule

#### Définition de la puissance moyenne d'un signal $x$
$$\boxed{P_{x} = \lim_{ T \to \infty } \frac{1}{T} \int _{T} \left| x(t)\right|^{2} \, dt }$$
Unité : $\text{Joules.s}^{-1} \equiv \text{Watt}$ 

###### Cas particulier
Lorsque $x$ est périodique
$$\boxed{P_{T} = \frac{1}{T} \int_{-\frac{T}{2}}^{\frac{T}{2}} \left| x(t)\right|^{2} \, dt }$$
#### Signaux à puissance / énergétique finis
- Signal à énergie finie : 
  + Signaux de durée finie
  + Signaux de puissance nulle

- Signal à puissance finie :
  + Signaux périodiques
  + Signal d'énergie infinie

#### Exemple avec un signal périodique
![[Pasted image 20250909143441.png]]
$$x(t) = a\cos(2\pi f_{0}t)$$
La puissance moyenne de ce signal est : 
$$P_{\frac{1}{f_{0}}} =  a^{2}f_{0} \int_{-\frac{1}{2f_{0}}}^{\frac{1}{2f_{0}}} \cos(2\pi f_{0} t)^{2} \, dt =\frac{ a^{2}f_{0} }{2}\times \left(  \int_{- \frac{1}{2f_{0}}}^{\frac{1}{2f_{0}}} \cos(4\pi f_{0}t) \, dt + \frac{1}{f_{0}} \right) $$
$$\frac{a^{2}f_{0}}{2}\times \left( \frac{1}{4\pi f_{0}}(\sin(2\pi)-\sin(-2\pi)) +\frac{1}{f_{0}} \right)$$
Ainsi, 
$$\boxed{P_{\frac{1}{f_{0}}} = \frac{a^{2}}{2}}$$


#### Exemple signal
$$y(t) = \begin{cases}
1 \text{ si } t \in \left[ -\frac{\pi}{2}, \frac{\pi}{2} \right] \\
0 \text{ sinon}
\end{cases}$$
$$E_{y} = \int_{-\frac{\pi}{2}}^{\frac{\pi}{2}} 1^{2}  \, dt =  $$






## 2. Espace t-f
