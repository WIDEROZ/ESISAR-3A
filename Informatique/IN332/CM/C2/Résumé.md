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
