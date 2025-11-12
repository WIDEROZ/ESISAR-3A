# /proc
> [!Attention]
> root ne peut pas écrire dans les fichiers de proc
> Si on veut écrire des changements temporaires (jusqu'au redémarrage du PC) dans le kernel il faut modifier des fichiers dans : /proc/sys
> Si on veut que cela soit permanent il faut écrire dans le fichier : /etc/

- /proc/cmdline : Informations donnés au kernel lorsqu'il à été boot
- /proc/meminfo : Information sur la mémoire utilisé par le kernel
- /proc/modules : Modules supplémentaires utilisés par le kernel

# Après le boot
#### System-V
- /sbin/init : Après que le kernel ait fini le boot le processus init est lancé

#### Systemd
- /bin/systemd -> /lib/systemd/systemd : Après que le kernel ait fini le boot le processus init est lancé

#### Arbre des processus
```bash
pstree
```

# `ps`
Permet de voir des processus à un instant $t$
#### Options
- `--forest` : Même chose que `pstree`
- `-e` $\sim$ `aux` : Voir tout les processus de la machine
- `-u` : Recherche l'utilisateur du processus

```bash
ps -ef | head
```
Affiche les 10 premières lignes.
```bash
ps -ef | less
```
Affiche page par page. 

# `top`
Permet de voir les processus dynamiquement. 
Dans l'interface de top, taper au clavier : 
- $h$ : help
- $k$ : kill
- $r$ : Ajuster la priorité d'un processus ($-20 \to 19$)

# Load average
Le load average représente à quel point un cœur du CPU est utilisé. (si il est $>$ à $1$ cela signifie que le premier cœur délaie au deuxième les autres processus à exécuter)

On peut voir le load average du CPU en tapant les commandes : 
- `top`
- `uptime`
- `cat /proc/loadavg`

Le premier (resp. deuxième, troisième) nombre décimal représente le load average durant la dernière minute (resp. $5$, $15$)

Lorsqu'on execute : 
```bash
cat /proc/loadavg
```
On a $5$ champ : 
- Les trois premiers sont le load average
- Le $4^{\text{eme}}$ est c/p. avec : 
  + c : Le numéro du cœur du CPU
  + p : Le nombre de processus qui s'exécutent sur le cœur numéro c
- Le $5^{\text{eme}}$ est la valeur du dernier PID exécuté par le cœur c



# Logs
#### Daemons
Le daemon des logs qui combine : `syslogd` et `klogd` est : `rsyslogd`
Pour les distributions de systemd : 
```bash
journalctl
```

#### /var/log
- `boot.log`
- `cron` : Taches à exécuter de manière récurrente
- `dmesg` : Noyau démarrage système
- `maillog`
- `messages` / `syslog` : Messages du noyau et d'autres processus qui ne relèvent pas d'un autre répertoire. 
- `secure` : Messages qui nécessitent une autorisation pour les regarder. 
- `journal` : Messages de la configuration par défaut du service systemd-journald.service
- `Xorg.0.log` : Messages du serveur X Windows

