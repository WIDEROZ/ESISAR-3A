# Changement des permissions de Groupes
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

#### Changement du groupe qui possède un fichier
```bash
chgrp groupname file
```
- -R : recursively (tout les fichiers dans le dossier donné en paramètre)

#### Voir des informations précises sur un fichier / dossier
```bash
stat file
```


# Changement des permissions d'utilisateurs
#### Pour un fichier
```bash
chown user file
```

```bash
chown user:group file
chown user.group file
```

```bash
chown :group file
chown .group file
```


# Changement des permissions rwx pour des fichiers / dossiers
>[!ATTENTION]
> On peut accéder à un dossier si on a la permission `x` sur celui-ci
> Les permissions des dossiers précédents doivent être pris en compte pour voir quel utilisateur a quelle permission sur un fichier



```bash
chmod new_permission file_name
```

```bash
chmod a+w file_name
```




```bash

```