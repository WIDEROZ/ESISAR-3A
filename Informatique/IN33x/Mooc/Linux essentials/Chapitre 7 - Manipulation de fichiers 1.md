## I. Types de fichiers
#### d (Directory)

#### -
File

#### l (symbolic link)
Pointe vers un autre fichier

#### s (socket) - process
Permet à deux processus de communiquer entre eux (Le deux processus peuvent grâce à ce fichier recevoir ou s'envoyer des donnés entre eux)

#### p (pipe) - process
Fichier utilisé comme sortie d'un processus qui peut être utilisé pour être l'entrée d'un autre processus

#### b (Block file) - hardware
Relatif à des blocs envoyés / lus par le composant. 

#### c (character file) - hardware
Relatifs a des octets envoyés / lus par le composant. 


## II. Options de ls
#### -h
Affiche la taille du fichier en l'ayant converti en une valeur plus lisible. 
DOIT ABSOLUMENT ÊTRE UTILISÉ AVEC $-l$

#### -d
Liste les dossiers

#### -R
Listing récursif

#### -S
Trie les fichiers par taille

#### -t
Trie les fichier par timestamp décroissant en partant du haut

#### --full-time
Affiche l'heure exacte de la dernière modification du fichier

#### -r
Execute un listing des fichiers en reverse. 

