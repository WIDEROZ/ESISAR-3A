# Aspect énergétique
#### Définition de l'énergie d'un signal $x$
$$\boxed{E_{x} = \int _{- \infty}^{+ \infty} \left| x(t)\right|^{2} \, dt }$$
Unité : Joule

#### Définition de la puissance moyenne d'un signal $x$
$$\boxed{P_{x} = \lim_{ T \to \infty } \frac{1}{T} \int _{T} \left| x(t)\right|^{2} \, dt }$$
Unité : $\text{Joules.s}^{-1} \equiv \text{Watt}$ 

# Transformée de Fourrier
#### Transformée de Fourrier
Soit $x$ une fonction à énergie finie (Amplitude bornée et tend vers $0$ en $\pm \infty$)
$$\boxed{X(f) = TF[x(t)]= \int _{\mathbb{R}} x(t) e^{ -2\pi jft } \, dt } $$

#### Propriétés
- Transposition : $TF[x(-t)] = X(-f)$
- Conjugaison : $TF[x^{*}(t)]=X^{*}(-f)$
- Translation (Théorème du retard) : $TF[x(t-t_{0})] = e^{ -2\pi jft_{0} }X(f)$
  Le module ne change pas
  La phase elle change
- Modulation : $TF[x(t)e^{ 2\pi if_{0}t }] = X(f-f_{0})$

- Dilatation / Contraction : $TF[x(at)] = \frac{1}{\left| a\right|} X\left( \frac{f}{a} \right)$
- Dérivation par rapport à $t$ : $TF[x'(t)] = jf X(f)$
- Dérivation par rapport à $f$ : $TF[t \times x(t)] = j TF[x'(f)]$

# Dirac
#### Transformée de Fourrier et Peignes de Dirac
$$\boxed{TF[\delta(t)] = 1}$$
$$\boxed{\delta_{T}(t) = \sum_{n \in \mathbb{Z}} \delta(t-nT)}$$
$$\boxed{TF[\delta_{T}(t)] = \frac{1}{T} \delta_{\frac{1}{T}}(f) = \frac{1}{T}\sum_{n \in \mathbb{Z}} \delta\left( f-\frac{n}{T} \right) }$$

# Convolution
#### Convolution et Dirac
$$\boxed{x(t) * \delta(t) = x(t)} \text{ et } \boxed{x(t) * \delta(t-t_{0}) = x(t-t_{0})}$$

#### Propriété Banger
La transformée de Fourrier est un morphisme de groupe pour la loi de convolution vers la multiplication. 

# Représentation des signaux périodiques
$$\boxed{x_{p}(t) = x_{0}(t) * \sum_{n \in \mathbb{Z}}\delta(t-nT)}$$
Alors, 
$$\boxed{X_{p}(f) = FX_{0}(f) \sum_{n \in \mathbb{Z}} \delta\left( f-nF \right)}$$

# Séries de Fourrier
$$x(t) = \sum_{n = - \infty}^{+ \infty} c_{n} e^{ 2j\pi nFt }$$
$$c(2\pi nF) = \frac{1}{T}\int_{-\frac{T}{2}}^{\frac{T}{2}} x(t) e^{ -2j\pi nFt } \, dt = c_{n}$$
$$X(f) = \sum_{n = - \infty}^{+ \infty} c_{n} \delta(f-nF)$$

#### Théorème de Parseval
$$\boxed{\int _{\mathbb{R}} \left| x(t)\right|^{2} \, dt = \int_{\mathbb{R}}\left| X(f)\right|^{2} \, df  }$$
