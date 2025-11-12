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
Permet de retrouver les informations d'un utilisateur 