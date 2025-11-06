# I. Source de courant
## 3.
#### a.
$$V_{cc} - V_{E} = V_{d} + V_{BE}$$
$$V_{cc} = V_{d} + V_{be} +V_{ch}-V_{CE} $$
$$V_{cc} = 2.7 -1.3 + 10 +0.4 = 11.8$$

#### b.
##### Gain de courant
$V_{CE} = -10V$ et $I_{C} = -0.1$ : $\beta = 75$
$I_{C} = -1mA$ : $\beta = 100$
$I_{C} = -10 mA$ : $\beta = 100$
$I_{C} = -150 mA$ : $100 \leq \beta \leq 300$
##### $V_{CE, sat}$
Pour $I_{C} = -150 mA$ et $I_{B} = -15 mA$
$$V_{CE, sat} = -0.4 V$$
##### $V_{BE, avl}$
Pour $I_{C} = -150 mA$ et $I_{B} = -15 mA$
$$V_{BE, avl} = -1.3 V$$
##### $V_{CE, claq}$
$$V_{CE, claq} = -40 V$$

##### Puissance dissipé maximum du transistor
$$P = V_{CC}I_{C} = 12 \times 0.1 = 1.2\, W \gg 0.6 \, W$$
Le transistor ne résiste pas. wtf

#### c.
- $2.5 \, V\leq U_{zt} \leq 2.9\, V$
- $U_{zk} \leq 60 \, V$
- $I_{st} \ll 10 \mu A$
- $I_{sk} \ll 10 \mu A$
- $I_{z, \max} = \frac{0.5}{2.7} =0.185 \, mA$

#### d.
Loi des mailles : 
$$R_{E}I_{E} = U_{Z} -V_{BE}$$
Or $I_{E} = I_{ch}-I_{B} = (\beta-1)I_{B} \approx \beta I_{B}$ de plus, $I_{ch}=\beta {I_{B}}$ 
Alors, 
$${R_{E} \approx \frac{U_{Z}-V_{BE}}{\beta I_{ch}}}$$
Donc, $R_{E}$ dépend de $1 \leq I_{ch} \leq 100 mA$
Ainsi 
$$0.4 \Omega=R_{E, \min} = \frac{U_{Z}-V_{BE}}{\beta I_{ch, \max}}\leq R_{E} \leq \frac{U_{Z}-V_{BE}}{\beta I_{ch, \min}} =R_{E, \max}= 40\Omega$$
En normalisé on a : 
$$\boxed{\begin{array}{c}
R_{E, \min} = 0.39 \Omega \\
R_{E, \max} = 39 \Omega
\end{array}}$$

#### e.
$$I_{Z} = I_{1} + I_{B} \approx I_{1}$$
D'après la datasheet pour que la diode soit polarisée $I_{1} \geq 1 mA$
Comme : 
$$R_{1} = \frac{V_{1}}{I_{1}} = \frac{V_{ch}-V_{BC}}{I_{1}} = \frac{R_{ch}I_{ch} - V_{BC}}{I_{1}} \leq (R_{ch}I_{ch} - V_{BC}) \times 10^{3
} \Omega$$
Or : 
$$V_{BC} = V_{BE} - V_{CE} = -1.3+0.4 = -0.9$$
Alors, 
$$\boxed{R_{1} \leq 900 \Omega \approx 820 \Omega}$$

# II. AOP en commutation — Trigger de Schmitt et comparateur à fenêtre
## 3.
#### AOP Parfait
$$\begin{array}{c}
i_{+} = i_{-} = 0 \\
\varepsilon = V_{+}-V_{-} \text{ est une source de tension parfaite} \\
\begin{cases}
\varepsilon >0 \Rightarrow V_{s} \approx V_{cc} \\
\varepsilon < 0 \Rightarrow V_s \approx -V_{cc}
\end{cases}
\end{array}$$
#### Types de réaction
$R_{1}$ et $R_{2}$ sont en série



# Le chat

## Partie 2 : AOP en commutation — Trigger de Schmitt et comparateur à fenêtre  
  
### Données du montage  
- AOP parfait, alimentation : ±15 V    
-$R_a = 2{,}1\ \text{k}\Omega$
-$R_b = 1\ \text{k}\Omega$
-$R_1 = 100\ \text{k}\Omega$
-$R_2 = 470\ \text{k}\Omega$
- Signal d’entrée :$e(t)$de 12 V d’amplitude, période$T = 1\ \text{ms}$
  
### Objectif  
Étudier et tracer :  
-$v_1(t)$: signal d’entrée
-$V^+$: tension de référence à l’entrée non-inverseuse    
-$v_2(t)$: sortie de l’AOP    
et représenter la **caractéristique entrée–sortie**$v_2 = f(v_1)$.  
  
---  
  
### Analyse théorique  
  
Le montage forme un **trigger de Schmitt non inverseur** avec rétroaction positive.  
  
La fraction de la tension de sortie réinjectée sur l’entrée de référence est :  
  
$$ 
\beta = \frac{R_b}{R_a + R_b} = \frac{1{,}0}{2{,}1 + 1{,}0} \approx 0{,}323  
$$ 
  
Pour un AOP parfait saturant à$\pm V_{sat} = \pm 15\ \text{V}$: 
  
$$ 
V_{TH+} = +\beta V_{sat}  
$$ 
  
$$ 
V_{TH-} = -\beta V_{sat}  
$$ 
  
Numériquement :  
  
$$ 
V_{TH+} \approx +4{,}84\ \text{V}, \quad V_{TH-} \approx -4{,}84\ \text{V}  
$$ 
  
---  
  
### Résultats  
  
- **Seuil haut :**$+4{,}84\ \text{V}$ 
- **Seuil bas :**$-4{,}84\ \text{V}$   
- **Largeur de fenêtre :**  
  
$$ 
\Delta V = V_{TH+} - V_{TH-} = 2\,\beta\,V_{sat} \approx 9{,}68\ \text{V}  
$$ 
  
- **Centre de la fenêtre :** 0 V (symétrique)  
  
---  
  
### Chronogramme attendu  
  
- Quand$v_1(t)$dépasse$+4{,}84\ \text{V}$, la sortie commute de –15 V à +15 V.    
- Quand$v_1(t)$redescend sous$-4{,}84\ \text{V}$, la sortie rebascule à –15 V.    
-$V^+$suit la tension de sortie par le pont$R_a, R_b$et oscille entre ±4,84 V.    
- La caractéristique$v_2 = f(v_1)$forme une **boucle d’hystérésis**.  
  
---  
  
### Expression générale de la fenêtre  
  
$$ 
V_{TH\pm} = \pm \beta V_{sat}  
$$ 
  
$$ 
\Delta V = 2\,\beta\,V_{sat}  
$$ 
  
---  
  
## Partie 3 : AOP en linéaire — Amplificateur différentiel  
  
### Données du montage  
- AOP parfait, alimentation ±15 V    
-$R_1 = R_3 = 10\ \text{k}\Omega$ 
-$R_2 = R_4 = 100\ \text{k}\Omega$ 
  
### Objectif  
- Déterminer l’expression de$v_s$en fonction de$v_1$et$v_2$ 
- Tracer les chronogrammes pour deux jeux de signaux d’entrée  
- Vérifier le rôle de l’amplificateur différentiel  
  
---  
  
### Analyse théorique  
  
Pour un montage différentiel équilibré vérifiant :  
  
$$ 
\frac{R_4}{R_3} = \frac{R_2}{R_1}  
$$ 
  
on a :  
  
$$ 
v_s = \frac{R_4}{R_3}\,(v_2 - v_1)  
$$ 
  
Avec les valeurs numériques :  
  
$$ 
\frac{R_4}{R_3} = \frac{100\ \text{k}\Omega}{10\ \text{k}\Omega} = 10  
$$ 
  
d’où :  
  
$$ 
\boxed{v_s = 10\,(v_2 - v_1)}  
$$ 
  
---  
  
### Cas 1 : signaux alternatifs sans offset  
  
-$v_1(t)$: sinusoïde 0,2 V crête,$f = 10\ \text{kHz}$   
-$v_2(t)$: triangle 0,2 V crête,$f = 1\ \text{kHz}$ 
  
La sortie :  
  
$$ 
v_s(t) = 10\,(v_2(t) - v_1(t))  
$$ 
  
Les signaux sont petits, donc pas de saturation.    
La sortie varie dans ±4 V environ.  
  
---  
  
### Cas 2 : signaux avec offset  
  
-$v_1(t)$: sinusoïde 5 mV crête, **moyenne 10 V**    
-$v_2(t)$: sinusoïde 50 mV crête, **moyenne 10 V**, déphasée de 180°    
  
Le montage rejette la composante commune (10 V).    
La différence amplifiée vaut :  
  
$$ 
v_s(t) = 10\,(v_2(t) - v_1(t))  
$$ 
  
soit environ 450 mV crête en sortie.    
En pratique, des déséquilibres de résistances ou les offsets de l’AOP peuvent introduire une petite composante continue résiduelle.  
  
---  
  
### Résumé  
  
| Paramètre | Expression | Valeur numérique |  
|------------|-------------|------------------|  
| Gain différentiel |$A_d = \frac{R_4}{R_3}$| 10 |  
| Sortie |$v_s = 10\,(v_2 - v_1)$| — |  
| Rejet du mode commun | Idéalement infini | (≈ 0 en AOP parfait) |  
  
---  
  
**Conclusion :**  
- Le trigger de Schmitt crée une hystérésis définie par$2\,\beta\,V_{sat}$.    
- L’amplificateur différentiel amplifie uniquement la différence$v_2 - v_1$tout en rejetant le mode commun.    
- Ces deux montages illustrent les deux modes d’utilisation principaux d’un AOP : **commutation** et **régime linéaire**.