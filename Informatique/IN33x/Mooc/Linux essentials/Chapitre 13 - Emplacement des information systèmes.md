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
Le load average représente à quel point un cœur est utilisé. 

On peut voir le load average d'un cœur du CPU en tapant les commandes : 
- `top`
- `uptime`
- `cat /proc/loadavg`

