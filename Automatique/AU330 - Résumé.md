#### Définition de l'énergie d'un signal $x$
$$\boxed{E_{x} = \int _{- \infty}^{+ \infty} \left| x(t)\right|^{2} \, dt }$$
Unité : Joule

#### Définition de la puissance moyenne d'un signal $x$
$$\boxed{P_{x} = \lim_{ T \to \infty } \frac{1}{T} \int _{T} \left| x(t)\right|^{2} \, dt }$$
Unité : $\text{Joules.s}^{-1} \equiv \text{Watt}$ 

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
####
$$\boxed{TF[\delta(t)] = 1}$$
