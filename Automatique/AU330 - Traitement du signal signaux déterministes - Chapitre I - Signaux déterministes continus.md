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
![[Pasted image 20250909145723.png]]
$$y(t) = \begin{cases}
1 \text{ si } t \in \left[ -\frac{T}{2}, \frac{T}{2} \right] \\
0 \text{ sinon}
\end{cases}$$
$$E_{y} = \int_{-\frac{T}{2}}^{\frac{T}{2}} 1^{2}  \, dt = T $$
$$P_{y} = \lim_{ \bigsqcup \to +\infty } \frac{1}{\bigsqcup} E_{y}  = 0 \text{ car on fait tendre } T \text{ vers } + \infty$$




## 2. Espace t-f
### Temporelle - Fréquentielle
La principale différence est que : 
- Temporelle : Montrer l'instant d'émission ou la durée des événements
- Fréquentielle : Montrer les composantes fréquentielles. 

Pour passer de la représentation temporelle à la fréquentielle on utilise la transformée de Fourier

#### Transformée de Fourier
Soit $x(t)$ UNE FONCTION VRAIMENT LA ??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
$x$ une fonction à énergie finie (Amplitude bornée et tend vers $0$ en $\pm \infty$)
$$\boxed{X(f) = TF[x(t)]= \int _{\mathbb{R}} x(t) e^{ -2\pi jft } \, dt } $$
Ainsi, 
$$X(f) = A(f) + jB(f) = \left| X(j) e^{ j\varphi(f) }\right|$$
#### Exemple
Calcul de $X(y)$ voir exemple précédent pour connaitre $y$
Ici $f \neq \frac{1}{T}$
$$X(y) = \int_{-\frac{T}{2}}^{\frac{T}{2}} e^{ -2\pi jft } \, dt = -\frac{T}{2\pi fTj}(e^{ -\pi jfT }- e^{ \pi jfT  }) = T \mathrm{sinc}(\pi fT) $$
Transformée de fourrier en fonction de la fréquence : 
![[Pasted image 20250909152717.png]]

#### Définition
La transformée de Fourier inverse est définie par : 
$$\boxed{x(t) = \overline{TF}[X(f)] = \int _{\mathbb{R}} X(f) e^{ 2\pi ift } \, df }$$

#### Propriétés
- Linéarité
- Transposition : $TF[x(-t)] = X(-f)$
- Conjugaison : $TF[x^{*}(t)]=X^{*}(-f)$
- Translation (Théorème du retard) : $TF[x(t-t_{0})] = e^{ -2\pi jft_{0} }X(f)$
  Le module ne change pas
  La phase elle l'est
- Modulation : $TF[x(t)e^{ 2\pi if_{0}t }] = X(f-f_{0})$
  
- Dilatation / Contraction : $TF[x(at)] = \frac{1}{\left| a\right|} X\left( \frac{f}{a} \right)$
- Dérivation par rapport à $t$ : $TF[x'(t)] = if X(f)$
- Dérivation par rapport à $f$ : $TF[t \times x(t)] = i TF[x'(f)]$



$$\int_{\mathbb{R}} x(t-t_{0})e^{ -2i\pi ft }  \, dt = \int_{\mathbb{R}} x(T) e^{ -2i\pi f(T+t_{0}) }  \, dT = e^{ -2i\pi ft_{0} } TF[x(t)] $$


$$\int x(t) e^{ 2\pi if_{0}t }e^{ -2\pi ift } \, dt = \int x(t) e^{ -2\pi i(f-f_{0})t } \, dt  = X(f-f_{0}) $$

## 3. Distribution de Dirac
- C'est une impulsion centrée sur $t=0$ de largeur infiniment étroite et de surface unité notée $\delta$ et représentée symboliquement par un vecteur. 
- Mathématiquement la définition se traduit par : 
  $$\int_{-\infty}^{+ \infty} \delta(t) \, dt = 1 $$
![[Pasted image 20250909164654.png]]
- Prélèvement de la valeur d'une fonction en un temps donné :
  $$\boxed{f(t)\delta(t-t_{0}) = f(t_{0})\delta(t-t_{0})}$$

#### La transformée de fourrier d'un Dirac
$$\boxed{TF[\delta(t)] = 1}$$
#### Le peigne de Dirac
$$\boxed{\delta_{T}(t) = \sum_{n \in \mathbb{Z}} \delta(t-nT)}$$
##### Transformée de fourrier du peigne de Dirac
$$\boxed{TF[\delta_{T}(t)] = \delta_{\frac{1}{T}}(f) = \frac{1}{T}\sum_{n \in \mathbb{Z}} \delta\left( f-\frac{n}{T} \right) }$$

###### Calculer
$$TF[\cos(2\pi f_{0}t)] = \frac{1}{2}(\delta(f-f_{0}) + \delta(f+f_{0}))$$
$$TF[\sin(2\pi f_{0}t)] = \frac{1}{2j}(\delta(f-f_{0})-\delta(f+f_{0}))$$
## 4. Convolution
#### Définition
Soient $x, y$ deux fonctions telle que l'une des deux ait un support compact ou que les deux ont un supports bornés du même coté. 
$$\boxed{x(t)* y(t) = \int _{\mathbb{R}} x(\tau)y(t-\tau) \, d\tau }$$

#### Propriété
Convolution avec un Dirac : 
$$\boxed{x(t) * \delta(t) = x(t)} \text{ et } \boxed{x(t) * \delta(t-t_{0}) = x(t-t_{0})}$$

#### Propriété Banger
La transformée de Fourrier est un morphisme de groupe pour la loi de convolution.

#### Exemple
Calculer le spectre d'un signal sinusoïdal observé à travers la fenêtre d'un oscilloscope. 
$$TF[A\cos(2\pi f_{0}t) + B \sin(2\pi f_{0}t)]$$
$$= \frac{A(\delta(f-f_{0})+\delta(f+f_{0})) + B(\delta(f-f_{0})-\delta(f+f_{0}))}{2}$$
$$= \frac{(A+B)\delta(f-f_{0}) + ()}{2}$$