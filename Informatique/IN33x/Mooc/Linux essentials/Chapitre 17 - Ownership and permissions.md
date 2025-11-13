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

##### La méthode octale / numérique

| 7   | `rwx` |
| --- | ----- |
| 6   | `rw-` |
| 5   | `r-x` |
| 4   | `r--` |
| 3   | `-wx` |
| 2   | `-w-` |
| 1   | `--x` |
| 0   | `---` |

# `umask`
Le umask (user mask) sert à créer des restrictions sur un fichier / dossier créé par un utilisateur : 
Il est composé de $4$ chiffres en base $8$ : 
$$0002$$
Liste de signification des chiffres : 
- $0$ si le umask est donné sous la forme d'un nombre octal
- Permissions Utilisateur : chiffre issu de la méthode octale
- Permissions Groupe : chiffre issu de la méthode octale
- Permissions Autres : chiffre issu de la méthode octale

Les permissions maximales par défaut sont : 

| file        | `rw-rw-rw-` | 666 |
| ----------- | ----------- | --- |
| directories | `rwxrwxrwx` | 777 |



#### Exemple

```bash
touch test.txt
ls -l
```
Si c'est l'utilisateur qui a un umask de $0002$ qui lance cette commande alors la sortie sera : 
```bash
-rwxrw-r-- blabla... test.txt
```
Si c'est root qui a un umask de $0027$ qui lance cette commande alors la sortie sera : 
```bash
-rwxr----- blabla... test.txt
```
