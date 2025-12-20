```C
#include <unistd.h>

pid_t fork(void);
pid_t resultat_fork = fork();
if (resultat_fork == -1){
	// Erreur de création des fork
}
else if (resultat_fork == 0){
	// Faire les instructions du fils
}
else{
	// Faire les instructions du père
}
```
