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

####