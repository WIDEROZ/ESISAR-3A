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

### 1. Envoi d'un signal
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

### 2. Installation d'un comportement
```C
void (*signal(int sig, void (*action)(int) ))(int);
```
Paramètres : 
- sig : Signal dont on veut changer le comportement
- action : Comportement que l'on veut installer
Renvoie : 
- En cas de succès l'ancien comportement
- En cas d'échec **SIG_ERR**

### 3. Fonctions de la norme POSIX
Cette norme à introduit
- La manipulation des signaux pour ensembles
- Le blocage des signaux

#### Fonctions de manipulation des ensembles de signaux
Type d'un ensemble de signaux : 
```C
sigset_t
```

Permet de créer un ensemble vide : $p\_ens = \varnothing$
```C
int sigemptyset(sigset_t *p_ens);
```

Permet d'ajouter un signal dans un ensemble.
```C
int sigaddset(sigset_t *p_ens, int sig);
```

Permet de supprimer un signal dans un ensemble.
```C
int sigdelset(sigset_t *p_ens, int sig);
```

Test d'appartenance
```C
int sigismember(sigset_t *p_ens, int sig);
```
Renvoie $1$ ou $0$ selon si le signal appartient ou non à l'ensemble.

Ces fonctions renvoient : 
- $-1$ en cas d'erreur
- $0$ en cas de succès

#### Fonction de blocage des signaux
```C
#include <signal.h>

int sigprocmask(int op, const sigset_t *p_ens, sigset_t *p_ens_ancien);
```
Cette fonction créé un masque. 

| Op          | Nouveau masque                     |
| ----------- | ---------------------------------- |
| SIG_SETMASK | \*p_ens                            |
| SIG_BLOCK   | \*p_ens $\cup$ \*p_ens_ancien      |
| SIG_UNBLOCK | \*p_ens_ancien $\setminus$ \*p_ens |

Retourne : 
- $0$ en cas de succès 
- $1$ en cas d'échec

Obtenir la liste des signaux masqués (lorsque l'indicateur pendant est sur $1$)

```C
int sigpending(sigset_t *p_ens);
```
Renvoie la liste des signaux bloqués lorsque l'indicateur pendant est sur $1$

Retourne : 
- $0$ en cas de succès 
- $-1$ en cas d'échec

#### Structure sigaction
```C
struct sigaction{
	void (*sa_handler)(int); // Comportement
	sigset_t sa_mask; // Signaux supplémentaires à bloquer
	int sa_flag; // Options
}
```

```C
void func(int sig);

struct sigaction action;
sigemptyset(&action.sa_mask);
action.sa_flag = 0;
action.sa_handler = func;
```

#### Fonction sigaction
Permet de changer le comportement 
```C
int sigaction(int sig,
			  const struct sigaction *p_action,
			  struct sigaction *p_action_ancien);
```

Retourne : 
- $0$ en cas de succès 
- $-1$ en cas d'échec

```C
struct sigaction *p_action;
p_action->sa_handler = SIG_IGN;
sigemptyset(p_action.sa_handler);
sigcation(SIGINT, p_action, NULL);
```

