```C
// Files de messages
int msgget(key_t key, int msgflg);

```
Paramètres : 
- La clé de la file de message
- Un flag

Les valeurs que peut prendre msgflg : 
- IPC_CREAT
- IPC_EXCL

Si on met dans msgflg : IPC_CREAT | IPC_EXCL
On aura lors de l'appel de msgget une erreur si la file de message est déjà créé (or si l'on ne met que IPC_CREAT alors on aura la file de message sans erreur)

#### SEND MESSAGE

```C
// Envoyer un message
int msgsend(int msg_id, const void* msg, size_t msgz, int msgflag);

```
Paramètres : 
- L'id du message
- Une structure que le développeur définit
- sizeof(struct msg)-sizeof(long) 
- Les flags définis précédemment

```C
struct msg{
	long type;
	char *message;
	int numero;
}

// ou :

struct msg{
	long type;
	struct contenu_message;
}


struct contenu_message{
	...
}
```

#### Recevoir un message
```C
// Recevoir un message
int msgrcv(int msg_id, void *msg, size_t msg_size,long type, int msgflg);
```
Paramètres : 
- L'id du message
- Une structure de message que le développeur définit
- Type de message
- $0$ ou IPC_NO_WAIT (Bloque lorsqu'on attend un message lorsque l'on met $0$)




