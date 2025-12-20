#### Structure signal
| Signal X                                                                      |                                                               |
| ----------------------------------------------------------------------------- | ------------------------------------------------------------- |
| 0 → 1 (traitement) → 0                                                        | Indicateur du signal pendant                                  |
| 0 : Si on veut recevoir un signal<br>1 : Si on veut ne pas recevoir ue signal | Indicateur du signal masqué                                   |
| Pointeur vers une fonction                                                    | Traitement que le processus effectue à la reception du signal |


#### Émettre un signal
```C
#include <signal.h>
int kill(pid_t pid, int sig);
```
si sig = 0 c'est un texte d’existence du processus.

```C
int raise(int sig);
```
Le processus s'envoie un signal à lui même

#### Changer le comportement d'un signal
```C
void (*signal(int sig, void (*action)(int) ))(int);
```
Paramètres : 
- sig : Signal dont on veut changer le comportement
- action : Comportement que l'on veut installer
Renvoie : 
- En cas de succès l'ancien comportement
- En cas d'échec **SIG_ERR**

# Norme POSIX
#### Ensembles de signaux
```C
int sigemptyset(sigset_t *p_ens);

int sigaddset(sigset_t *p_ens, int sig);

int sigdelset(sigset_t *p_ens, int sig);

int sigismember(sigset_t *p_ens, int sig);
```

#### Masque
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

```C
int sigpending(sigset_t *p_ens);
```
Renvoie la liste des signaux bloqués lorsque l'indicateur pendant est sur $1$


#### Sigaction
```C
int sigaction(int sig,
			  const struct sigaction *p_action,
			  struct sigaction *p_action_ancien);
```

```C
struct sigaction{
	void (*sa_handler)(int); // Comportement
	sigset_t sa_mask; // Signaux supplémentaires à bloquer
	int sa_flag; // Options
}
```