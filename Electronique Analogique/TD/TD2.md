# Exercice 1
#### Question 0 - Etude statique
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
On applique la loi des mailles au schema $C$ : 
$$E_{th} = R_{th}i_{b} + V_{BE} + V_{EM} \Leftrightarrow \frac{R_{2}}{R_{1}+R_{2}}V_{cc} = \frac{R_{1}R_{2}}{R_{1}+R_{2}}i_{b} + V_{BE} + R_{E}i_{e}$$

Alors, 
$$$$