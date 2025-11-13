# Changement de Groupes
#### Changement de groupe principal de l'utilisateur temporairement
```bash
newgrp [-] groupname
```
- \- Réinitialise l'environnement de l'utilisateur
- groupname : bien mettre le nom du groupe et pas le GID

>[!ATTENTION]
> La commande ouvre un nouveau shell, tant que l'utilisateur reste dans ce shell son groupe principal est celui qu'il a choisi de redéfinir pour revenir sur son ancien groupe principal il faut que l'utilisateur tape : `exit`

#### Changement de groupe principal de l'utilisateur permanent
```bash
usermod -g groupname username
```







```bash

```