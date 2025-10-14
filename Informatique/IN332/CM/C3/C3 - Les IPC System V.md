(Inter process communication)
# I. Introduction
## 1. Généralités
Les IPC sont des outils destinés à des processus locaux. 
Leurs deux principales caractéristiques : 
- Extérieurs au système de gestion des fichiers
- Ils sont gérés par le noyau (Le noyau contient une table pour chaque catégorie d'IPC)
- Le noyau attribue un identifiant interne pour chaque objet de type IPC, cet identifiant interne permet aux processus de manipuler les IPC
- Les IPC ont aussi un identifiant externe qui est une clé de type : ```key_t``` défini dans : ```<sys/types.h>```


## 2. ```<sys/ipc.h>```
La constante ```IPC_PRIVATE``` correspond a une clé privée indiquant que l'utilisation de l'objet IPC est restreinte. 

Cette constante s'utilise avec les appels système en $get()$ :
```C
// Files de messages
int msgget(key_t key, int msgflg);

// Ensemble de sémaphore
semget();

// Segment de mémoire partagée
shmget(); 
```


## 2. Gestion des clés
Pour créer des clés on doit utiliser la fonction : 
```C
key_t ftok(const char *ref, int num);
```
Qui permet de relier l'espace de nommage des IPC au système de fichiers. 
Cette fonction génère une clé unique à partir du nom du fichier $ref$ et de l'argument $num$


#### Les droits LINUX
READ : $4$
WRITE : $2$
EXECUTE : $1$

# II. Les files de messages
Ensemble de 