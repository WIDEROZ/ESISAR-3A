# II. Ampli 2
#### a.
On considère une étude des petits signaux. ($V_{cc} = 0$)
EXCAL 1
EXCAL 2

$$A_{u} = \frac{V_{s}}{V_{e}}$$
Or : 
$$\frac{1}{R_{eq}} = \frac{1}{R_{ce}} + \frac{1}{R'_{E}} + \frac{1}{R_{U}} = \frac{R_{ce}R'_{E}R_{u} + R_{ce} + R'_{E}}{(R_{ce}+ R'_{E})R_{u}} $$
Donc, 
$$R_{eq} = \frac{(R_{ce}+ R'_{E})R_{u}}{R_{ce}R'_{E}R_{u} + R_{ce} + R'_{E}}$$
Alors, 
$$V_{S} =  R_{eq}(\beta +1)i_{b}$$
De plus si on fait une loi des mailles : 
$$V_{e} = R_{be}i_{b} + V_{s} $$
Ainsi, 
$$\boxed{A_{u} = \frac{1}{1+ \frac{R_{be}}{R_{eq}(\beta+1)}} = 0.95 }$$
Cet amplificateur de tension sert à changer les impédances pour éviter le phénomène de sauts de tensions. 

#### b.
EXCAL 3
$$\boxed{R_{in} = [R_{1} // R_{2}' // \beta [R_{e}  + R_{E}' // R_{u}]]}$$
Ainsi, 
$$\boxed{R_{in} = 2.7 \, k \Omega}$$

$$\boxed{R_{out} = \left[ R_{E}' // {R}_{CE} // \left[ R_{e} + \frac{1}{\beta}[R_{1}' // R_{2}'] \right] \right]}$$
$$\boxed{R_{out} =  55\, \Omega}$$