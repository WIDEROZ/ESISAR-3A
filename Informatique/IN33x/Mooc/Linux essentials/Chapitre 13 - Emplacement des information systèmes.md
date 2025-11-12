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

#### Voir le type de contenu d'un fichier
```bash
file
```


#### Commandes permettant de lire des fichiers binaires de logs
/var/log/btmp : 
```bash
lastb
```

/var/log/wtmp : 
```bash
last
```


# `dmesg`
Messages du noyau au démarrage système. 
Normalement le kernel n'as pas de fichier de log approprié pour remédier à cela il faut modifier les fichiers : 
<div align="center">/etc/syslog.conf ou /etc/rsyslog.conf</div>


Exécuter la commande `dmesg` peut créer un fichier de taille maximale : $512$ ko

# FHS (Filesystem Hierarchy Standard)
Une norme est un ensemble de règles qu'il est conseillé de suivre
La norme FHS catégorise de deux manière chaque dossier : 
- Partageable ou non suivant s'il peut être partagé sur un réseau et utilisé par plusieurs machines. 
- Le dossier peut être catégorisé par des fichiers statique ou des fichiers variables suivant le contenu de ses fichiers. 

|              | **Non Partageable** | **Partageable** |
| ------------ | ------------------- | --------------- |
| **Variable** | `/var/lock`         | `/var/mail`     |
| **Statique** | `/etc`              | `/opt`          |



| Directory    | Contents                                                                                        |
| ------------ | ----------------------------------------------------------------------------------------------- |
| `/bin`       | Essential binaries like the `ls`, `cp`, and `rm` commands, and be a part of the root filesystem |
| `/etc`       | Essential host configurations files such as the `/etc/hosts` or `/etc/passwd` files             |
| `/opt`       | Optional third-party software installation location                                             |
| `/sbin`      | Essential system binaries primarily used by the root user                                       |
| `/sys`       | Virtual filesystem for information about hardware devices connected to the system               |
| `/usr/local` | Third hierarchy<br><br>Files for software not originating from distribution                     |
| `/var/lock`  | Lock files for shared resources                                                                 |
| `/var/spool` | Spool files for printing and mail                                                               |
| `/var/tmp`   | Temporary files to be preserved between reboots                                                 |

Les dossiers : /var, /usr et /usr/local ne sont pas utiles pour le démarrage du système. 

/usr : est un dossier qui permet de détenir plusieurs logiciels communs a tous les utilisateurs. 
/usr/local : Installer des logiciels non fournis par la distribution. 

# Emplacement des dossiers
## Fichiers binaires pour les utilisateurs
- `/bin`
- `/usr/bin`
- `/usr/local/bin`

Pour les third-party software : 
- `/usr/local/application/bin`
- `/opt/application/bin`

## Fichiers binaires pour root
- `/sbin`
- `/usr/sbin`
- `/usr/local/sbin`

Pour les third-party administrative apps : 
- `/usr/local/application/sbin`
- `/opt/application/sbin`

## Dossier des applications
#### Localisation des paquets
Pour savoir ou se trouve un paquet taper la commande : 
Pour Debian : 
```bash
dpkg -L <package>
```
Pour RedHat : 
```bash
rpm -ql <package>
```

- `/usr/share`
- `/usr/lib`
- `/opt/application`
- `/var/lib`

Les exécutables se trouveront dans les fichier : 
- `/usr/bin`
- `/usr/local/bin`
- `/opt/app_name/bin`

#### Documentation
- `/usr/share/doc`
- `/usr/share/man`
- `/usr/share/info`

## Dossier des librairies
#### /bin et /sbin
- `/lib`
- `/lib64`

#### /usr/bin et /usr/sbin
- `/usr/lib`
- `/usr/lib64`

#### Third party software
- `/usr/local/lib`
- `/opt/app_name/lib`

## Donnés des variables
- `/var`
- 





```bash

```