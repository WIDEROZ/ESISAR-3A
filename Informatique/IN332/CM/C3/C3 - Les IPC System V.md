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


![[Pasted image 20251014090004.png]]

Structure qui identifie les permissions d'un IPC.
```C
struct ipc_perm {
	uid_t          uid; // ID du proprio
	gid_t          gid; // ID du groupe du proprio
	uid_t          cuid; // Créateur
	gid_t          cgid; // Créateur
	unsigned short mode; // Droits linux rwx
	unsigned short _seq; // Nombre d'utilisation de l'entrée
	key_t          key;
}
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
- Ensemble de de messages sous la forme de liste chaînés. 
- Les informations échangés sont des paquets identifiables. 

## 1. Le fichier ```<sys/msg.h>```
- MSG_NOERROR_ : Un message trop long est tronqué et ne renvoie pas d'erreur.

#### Structures associés aux files de messages
```C
struct msqid_ds{
	struct ipc_perm msg_perm; 
	/*droits d’accès à l’objet*/
	struct _ _msg      *msg_first; 
	/*pointeur sur le premier message*/
	struct _ _msg      *msg_last; 
	/*pointeur sur le dernier message*/
	
	unsigned short int msg_qnum; 
	/*nombre de messages dans la file*/
	unsigned short int msg_bytes; 
	/*nombre maximum d’octets*/
	pid_t              msg_lspid; 
	/*pid du dernier processus émetteur*/
	pid_t              msg_lrpid; 
	/*pid du dernier processus récepteur*/
	time_t             msg_stime; 
	/*date de dernière émission (msgsnd)*/
	time_t             msg_rtime; 
	/*date de dernière réception (msgrcv)*/
	time_t             msg_ctime; 
	/*date de dernier changement (msgctl)*/
	unsigned short int msg_cbytes; 
	/*nombre total actuel d’octets*/
};
```


## 2. Obtention de l'identifiant interne d'une file de message : fonction ```msg_get()```
Cet appel système permet : 
- La création d'une nouvelle file de messages et l'obtention de son ID interne.
- Ou l'obtention de l'ID d'une file de message déjà existante. 

```C
// Files de messages
int msgget(key_t key, int msgflg);
```
Arguments : 
- $key$ : Clé qui caractérise la file de message
- $option$ : est construit à partir des constantes :
  + $IPC\_CREATE$ : Créé une nouvelle file si elle n'existe pas
  + $IPC\_EXCL$ : Créé une nouvelle file et si elle existe déjà envoie un message d'erreur. 

Renvoie : 
- $-1$ en cas d'erreur
- L'ID interne d'une file de message en cas de succès.
