# Exercice 1
### Question 0 - Etude statique
Calculer le point de repos.
Conditions de l'étude statique :
- les sources de tension variables sont éteintes
- On cherche $I_{c_{0}}$ et $V_{CE_{0}}$

$V_{e_{1}} =0$ 

Tout dipole peut être remplacé par une source de tension et une résistance. 

##### Première configuration
Montage à vide ie $i_{b} = 0$, 
On fait un pont diviseur de tension sur le schema $A$, 
$$V_{BM} = \frac{R_{2}}{R_{1}+R_{2}}V_{cc}$$
$i_{b} = 0$ alors, $R_{th}= 0$,  Donc
$$V_{BM} = e_{th} = \frac{R_{2}}{R_{1}+R_{2}}V_{cc}$$

##### Deuxième configuration
On éteint $V_{cc}$ et on calcule l'impédance vue de $BM$ : 
$$\frac{1}{R_{BM}} = \frac{1}{R_{1}} + \frac{1}{R_{2}} \Leftrightarrow R_{BM} = \frac{R_{1}R_{2}}{R_{1}+R_{2}}$$
$$R_{BM} = R_{th} = \frac{R_{1}R_{2}}{R_{1}+R_{2}}$$

##### Mise en œuvre
On applique la loi des mailles au schema $C$ sur la maille d'entrée : 
$$E_{th} = R_{th}i_{b} + V_{BE} + V_{EM} \Leftrightarrow \frac{R_{2}}{R_{1}+R_{2}}V_{cc} = \frac{R_{1}R_{2}}{R_{1}+R_{2}}i_{b} + V_{BE} + R_{E}i_{c}$$

Alors, 
$$i_{c}\left( \frac{1}{\beta}\frac{R_{1}R_{2}}{R_{1}+R_{2}}+R_{E} \right) = E_{th}-V_{BE} $$
Ainsi, 
$$\boxed{I_{c_{0}} = \frac{E_{th}-V_{BE}}{\frac{R_{th}}{\beta} + R_{E}} = 0.8\, mA }$$

On applique la loi des mailles au schema $C$ sur la maille de sortie : 
$$\boxed{V_{CE_{0}} = V_{cc} - (R_{E} + R_{C})I_{c_{0}}= 7.13 \, V}$$

###### Conclusion
L'hypothèse est validée le transistor est correctement polarisé on peut alors utiliser le modèle des petits signaux su transistor.

### Question a - Etude dynamique
Conditions : 
- Les sources de tension variables existent
- La fréquence est telle que l'on peut négliger les capacité de liaisons (elles sont équivalentes à des fils). de même pour les sources de tension


$$V_{S_{1}} = -R_{c} \beta i_{b}$$
Loi des mailles sur l'entrée :
$$V_{e} = R_{be}i_{b} + R_{E}i_{e} $$
Loi des nœuds sur $E$ : 
$$i_{e} = (\beta+1)i_{b}$$
Donc, 
$$V_{e} = (R_{BE} + R_{E}(\beta+1))i_{b}$$
Ainsi, 
$$\boxed{A_{v} = \frac{V_{s}}{V_{e}} = -\frac{R_{C}\beta }{R_{BE} + R_{E}(\beta+1)}} $$

#### Question b
Donner l'impédance d'entrée : 
$$R_{in_{1}} = \frac{V_{e}}{I_{e}}$$
par la loi des nœuds
$$I_{e}  = i_{b} + i_{th}$$
Alors, 
$$\boxed{R_{in_{1}} = \frac{1}{\frac{i_{b}}{V_{e}}+\frac{i_{th}}{V_{e}}} = \frac{1}{\frac{i_{b}}{V_{e}} + \frac{1}{R_{th}}}}$$


#### Question c
Donner l'impédance de sortie
Voir le dernier schema : 
$$R_{out} = \frac{V_{s_{1}}}{I_{s}} \text{ lorsque }v_{e} = 0 $$
#### Question d
$$\omega_{0} = \frac{1}{R_{in}C_{l_{1}}}$$
