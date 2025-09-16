# I. Partie programmation système
## 1. Processus
#### Définition : Processus
Un processus (entité dynamique) est un programme (entité statique) en execution. 

#### État d'un processus
Au cours de son existence, un processus passe par un certain nombre d'états : 
- Nouveau : processus en cours de création, le système lui affecte les ressources dont il a besoin.
- Actif : Le processus à accès à un processeur et il execute ses instructions. 
- Prêt : Le processus attend d'être affecté au processeur. 
- Bloqué (ou en attente) : Le processus attend qu'un événement se produise. 
- Terminé : Le processus à fini son exécution. 

![[Pasted image 20250909110918.png]]
1. Création -> actionnement
2. Affectation du processeur
3. Réquisition du processeur
4. Blocage
5. Réveil
6. ATTENTION : Tous les états peuvent mener à la terminaison


#### Les composants d'un processus
##### Segment code
Suite d'instruction pour les processus. 

##### Segment données
Données accessibles par le processus. 

##### Segment pile
Pour les appels de fonctions et les appels de certains paramètres. 

##### Tas
Pour le stockage des données dynamique. 

##### Création du processus
Quand le processus est créé, un espace mémoire est alloué pour : 
- Code
- Data
- Stack
- Heap

![[Pasted image 20250909112521.png]]

#### Description du PCB (Process control block)
C'est une structure de données au niveau du noyau dans laquelle est stocké toutes les informations nécessaires à la gestion des processus. 

#### Opération sur les processus
##### 1. La création
La création d'un processus se fait à travers un call sys. de création de processus. 
On appelle processus père celui qui créé, et processus fils celui qui est créé. 

###### Culture G
Sur LINUX, l'opération de création s'appelle $fork()$. 
Et le processus fils est une copie du processus père. 
```C
#include <unistd.h>

pid_t fork(void);
pid_t resultat_fork = fork();
if (resultat_fork == 0){
	// Faire les instructions du fils
}
else{
	// Faire les instructions du père
}
```
Le processus père récupère l'ID du processus fils. 
Le processus fils récupère l'ID de $0$.
En cas d'échec
```C
resultat_fork == -1
```

#### Terminaison
La fonction exit permet de terminer le processus
```C
void exit(int valeur);
```
- Elle ferme tous les fichiers ouverts associé au processus
- La mémoire tampon est vidée

La fonction appelle une autre fonction : 
```C
void _exit(int valeur);
```
- Elle libère les ressources système
- Le processus passe à l'état zombie
- Envoie du signal : <b>SIGCHLD</b> au processus père
- Réveil du père s'il est bloqué sur ``wait()``

#### Synchronisation père-fils
Le fils qui se termine passe à l'état zombie. 
Les informations conservés pour un processus zombie sont : 
- Le code de retour
- Le temps d'execution dans les $2$ modes 
- Son PID et celui de son père

Le père peut récupérer ces informations en se synchronisant sur la terminaison de son fils à travers les appels wait `wait()` et `waitpid()` :
Tout d'abord il faut inclure les librairies suivantes : 
```C
#include <sys/types.h>
#include <sys/wait.h>
```

```C
pid_t wait(int *pointer_status);
```
active une opération de blocage du père en attente de l'execution du fils. 
Pour le réveil il faut utiliser le réveil <b>SIGCHLD</b>


`wait` renvoie le pid du fils zombie et prend en paramètre un pointeur int qui est modifié et donne les infos du processus zombie

```C
pid_t waitpid(pid_t pid, int *pointer_status, int options);
```
`waitpid` renvoie le pid du fils zombie et prend en paramètre :
- le pid du fils que l'on veut executer
- un pointeur int qui est modifié et donne les infos du processus zombie
- Des options...

#### Obtenir le PID

```C
#include <sys/types.h>
#include <unidtd.h>

pid_t getpid(void);
pid_t getppid(void);
pid_t fork(void);
```
- `getppid` renvoie le PID du père
- `getpid` renvoie le PID de son propre processus
- `fork` renvoie le PID du fils


## 2. Signaux
#### Définition
Un <u>signal</u> correspond à un <u>événement</u>. 
Lorsque l’événement se produit le signal est émis et reçu seulement par un processus (peut être émis par le système).

Au niveau de chaque processus se trouve une structure qui permet de gérer les signaux


| 1   | 2   | …   | X                                                                             | …   | NSIG |                                                               |
| --- | --- | --- | ----------------------------------------------------------------------------- | --- | ---- | ------------------------------------------------------------- |
|     |     |     | 0 → 1 (traitement) → 0                                                        |     |      | Indicateur du signal pendant                                  |
|     |     |     | 0 : Si on veut recevoir un signal<br>1 : Si on veut ne pas recevoir ue signal |     |      | Indicateur du signal masqué                                   |
|     |     |     | Pointeur vers une fonction                                                    |     |      | Traitement que le processus effectue à la reception du signal |


#### Identification des signaux
Le fichier `signal.h` comprend toutes les constantes et les structures nécessaires à l'utilisation des signaux. 

Il existe <b>NSIG</b> signaux différents
Faire `kill -l` dans le terminal pour les voir

#### Fonctions de traitement du processus
- <b>SIG_DFL</b> : Comportement par défaut (quand le processus reçoit un signal cette fonction est lancée)
- <b>SIG_IGN</b> : Le processus ignore le signal.
- Fonction au choix du programmeur :
  `void function(int num_sig);`

##### 1. Envoi d'un signal
```C
#include <signal.h>
```

```C
int kill(pid_t pid, int sig);
```

Paramètres : 
- pid $\in \mathbb{N}$
- sig $\in [\![1, NSIG]\!]$

Retour : $-1$ ou $0$ selon échec ou succès

CAS PARTICULIER : Si sig $= 0$ cela correspond à un test d'existence du processus

```C
int raise(int sig);
```
Le processus s'envoie un signal à lui même

##### 2. Installation d'un comportement
```C
void (*signal(int sig, void (*action)(int) ))(int);
```
Paramètres : 
- sig : Signal dont on veut changer le comportement
- action : Comportement que l'on veut installer
Renvoie : 
- En cas de succès l'ancien comportement
- En cas d'échec **SIG_ERR**


## 3. Les IPC (Inter Process Comunication)
### Les Threads



### Les ensembles de sémaphore





### Les segments de mémoire partagés