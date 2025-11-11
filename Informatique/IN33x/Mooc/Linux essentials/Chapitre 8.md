#### Code ASCII 
```bash
man -s 7 ascii
```

# I. Glob characters
## 1. Liste de ces caractères
- $*$ : string
- $?$ : single char
- $[]$ : single char que l'on peut choisir. ex : \[gu\] recherche les char g et u
- $!$ : utilisé avec \[\] . ex : \[!gu\] recherche les char qui ne sont ni g ni u

## 2. Utilisation avec ls
```bash
ls /etc/x* 
```
Affiche le contenu des fichiers commençant par x si l'on veut qu'il affiche le nom des dossiers commençant par x il faut taper : 
```bash 
ls -d /etc/x* 
```


## 3. ```cp``` command
#### Options 
- -v : On a une sortie si la commande est réussie
- -i : Demande si l'on veut vraiment écraser le fichier destination si il existe
- -n : ne pas écraser les fichiers
- -r $\sim$ -R : copie des dossiers


