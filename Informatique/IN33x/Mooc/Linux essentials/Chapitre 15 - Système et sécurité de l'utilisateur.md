# Comptes utilisateurs
Les informations des comptes utilisateurs et des groupes sont dans le fichier : `/etc`.
Pour avoir quelques informations sur les comptes utilisateurs lire le fichier : `/etc/passwd`
#### Fichier `/etc/passwd`
Voici une ligne de ce fichier :
```
sysadmin:x:1001:1001:System Administrator,,,,:/home/sysadmin:/bin/bash
```
- 1 : Nom de l'utilisateur
- 2 : Mot de passe ($x$ signifie que le mot de passe est dans le fichier `/etc/shadow`)
- 3 : User ID
- 4 : Primary Group ID
- 5 : Commentaire
- 6 : Home directory
- 7 : Shell

#### Fichier `/etc/shadow`
Voici une ligne de ce fichier :
```
sysadmin:$6$c75ekQWF$.GpiZpFnIXLzkALjDpZXmjxZcIll14OvL2mFSIfnc1aU2cQ/221QL5AX5RjKXpXPJRQ0uVN35TY3/..c7v0.n0:16874:5:30:7:60:15050::
```
- 1 : Nom de l'utilisateur
- 2 : Mot de passe (les comptes systèmes ont un $*$ a cet endroit)
- 3 : Dernier changement (En nombre de jours après le 01/01/1970 $\sim$ Epoch)
- 4 : Nombre de jours minimums entre lequel le mot de passe peut être changé
- 5 : Nombre de jours maximum de la validité du mot de passe (sinon le compte est bloqué max : 99999 jours)
- 6 : Avertissement : Donne un avertissement pour changer de mot de passe à chaque connection si le mot de passe expire dans les $n$ jours
- 7 : Inactivité : Si l'utilisateur a dépassé la date réinitialisation du mot de passe alors son compte sera bloqué mais il pourra toujours changer son mot de passe si il se connecte dans les $n$ jours
- 8 : Expiration : Jour qui représente le blocage du compte (à partir de Epoch)
- 9 : Réservé : Non utilisé


#### Commande `getent`
Permet de retrouver les informations d'un utilisateur si il à été défini localement ou sur un server réseau.
```bash
getent passwd root

getent shadow root
```

# Comptes systèmes
Leur User ID est compris entre $1$ et $499$.

# Comptes de groupe
```
mail:x:12:mail,postfix
```
- 1 : Nom du groupe
- 2 : Mot de passe de groupe (`etc/gshadow`)
- 3 : Group ID
- 5 : Liste des utilisateurs (Les membres primaires sont indiqués dans le fichier `/etc/passwd` et les autres dans le fichier `/etc/group`)

# Informations utilisateurs
```bash
id [options] username
```

```bash
uid=1001(sysadmin) gid=1001(sysadmin) groups=1001(sysadmin),4(adm),27(sudo)
```
Le $3^{\text{eme}}$ champ correspond au groupes auquel l'utilisateur appartient. 

#### Options
- -g : Affiche le GID du groupe primaire
- -G : Affiche tous les GID des groupe auquel apparient l'utilisateur

# Observer les utilisateurs
### Commande `who`
```bash
who
```
Lit le fichier : `/var/log/utmp`

#### Options
- -b : Temps de la dernière fois que le système a boot
- -r : Temps du runlevel (état dans lequel linux fonctionne) courant 

```
root     	tty2        2013-10-11 10:00
sysadmin	tty1        2013-10-11 09:58 (:0)
sysadmin 	pts/0       2013-10-11 09:59 (:0.0)
sysadmin 	pts/1       2013-10-11 10:00 (example.com)
```
Le deuxième champ correspond au terminal que l'utilisateur utilise : 
- tty : L'utilisateur utilise un terminal classique
- pts : L'utilisateur execute un processus qui agit comme un terminal. 

Si le quatrième champ est une adresse de domaine alors l'utilisateur s'est connecté à distance. 
Si il y a deux points alors l'utilisateur utilise un terminal graphique localement. 
Si il n'y a aucune information cela signifie que l'utilisateur s'est connecté avec une commande. 


### Commande `w`
```bash
w
```

![[Pasted image 20251112191729.png]]

| Column   | Example       | Description                                                          |
| -------- | ------------- | -------------------------------------------------------------------- |
| `USER`   | `root`        | The name of the user who is logged in.                               |
| `TTY`    | `tty2`        | Which terminal window the user is working in.                        |
| `FROM`   | `example.com` | Where the user logged in from.                                       |
| `LOGIN@` | `10:00`       | When the user logged in.                                             |
| `IDLE`   | `43:44`       | How long the user has been idle since the last command was executed. |
| `JCPU`   | `0.01s`       | The total cpu time used by all processes run since login.            |
| `PCPU`   | `0.01s`       | The total cpu time for the current process.                          |
| `WHAT`   | `-bash`       | The current process that the user is running.                        |

### Commande `last`
```bash
last
```
Lit l'historique de connection dans le fichier : `/var/log/wtmp`
