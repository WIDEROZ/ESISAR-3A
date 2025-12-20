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
- Le processus passe à l'état zombie (il attend que le père appelle wait ou waitpid pour passer à un autre état)
- Envoie du signal : <b>SIGCHLD</b> au processus père
- Réveil du père s'il est bloqué sur ``wait()``



#### Wait
```C
#include <sys/types.h>
#include <sys/wait.h>
pid_t wait(int *pointer_status);

pid_t waitpid(pid_t pid, int *pointer_status, int options);
```
Renvoient le pid du fils zombie. 
- pid : pid du fils que l'on veut exécuter
- pointer status : 
- options