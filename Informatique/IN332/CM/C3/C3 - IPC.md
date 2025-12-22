# I. Files de messages
## 1. Structure
Table d'entrée de la file de message
```C
struct msqid_ds{
	/*droits d’accès à l’objet*/
	struct ipc_perm msg_perm;
	/*pointeur sur le premier message*/
	struct _ _msg *msg_first;
	/*pointeur sur le dernier message*/
	struct _ _msg *msg_last;
	/*nombre de messages dans la file*/
	unsigned short int msg_qnum;
	/*nombre maximum d’octets*/
	unsigned short int msg_bytes;
	/*pid du dernier processus émetteur*/
	pid_t msg_lspid;
	/*pid du dernier processus récepteur*/
	pid_t msg_lrpid;
	/*date de dernière émission (msgsnd)*/
	time_t msg_stime;
	/*date de dernière réception (msgrcv)*/
	time_t msg_rtime;
	/*date de dernier changement (msgctl)*/
	time_t msg_ctime;
	/*nombre total actuel d’octets*/
	unsigned short int msg_cbytes;
};
```

## 2. Créer ou recevoir la file de messages
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

#### Types de message
- $type = 0$ : 
  Le message le plus ancien est extrait
- $type>0$ : 
  le message le plus ancien égal à type est extrait de la file
- $type < 0$ : le message le plus ancien dont le type est le plus petit entier ≤ à $|type|$ est extrait.

## 3. SEND MESSAGE
#### a. Définir une structure message
```C
struct msg{
	long type;
	struct contenu_message;
}


struct contenu_message{
	...
}
```

#### b. Envoyer le message
```C
// Envoyer un message
int msgsend(int msg_id, const void* msg, size_t msgz, int msgflag);

```
Paramètres : 
- L'id du message
- Une structure que le développeur définit
- sizeof(struct msg)-sizeof(long) 
- Les flags définis précédemment


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


#### Modifier les caractéristiques d'une file
```C
int msgctl(int msgid, int op, /* strucut msqid_ds *p_msqid */) ;
```
Opérations : 
- IPC_STAT : L'adresse de la table de msgid est écrit dans p_msqid
- IPC_SET : L'objet pointé par p_msqid est écrit dans la table de msgid (Les seuls paramètres que l'on peut modifier sont : msg_perm.uid, msg_perm.gid et msg_perm.mode)
- IPC_RMID : Supprime la file de messages


