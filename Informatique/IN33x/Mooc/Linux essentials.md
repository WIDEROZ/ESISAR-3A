# Lien pour accéder au Mooc
https://www.netacad.com/courses/linux-essentials?courseLang=en-US&instance_id=67590867-97ec-4686-bb99-20aae6947cd2

# Chapitre 3
## Web servers 
#### Web sever
Stock les fichiers du site web
- Apache
- NGINX

#### Daemon
C'est un processus qui s'execute en arrière plan et il n'y a pas d’interaction directe avec l'utilisateur. 
- Apache HTTPD (Écoute les requêtes entrantes envoyé au server web et y répond)

## Cloud services
- ownCloud (private cloud) $\Rightarrow$ Nextcloud

## Database Servers
#### Database Servers
- MySQL $\Rightarrow$ MariaDB

#### Database
- Firebird
- PostgreSQL

## Email Servers
#### MTA (Mail Transfer Agent)
Logiciel utilisé pour transférer des mails entre systèmes
- Sendmail
- Postfix

#### MDA (Mail Delivery Agent) ou LDA (Local Delivery Agent)
$MDA = LDA$
Sert à stocker les mails dans la boîte de reception de l'utilisateur

#### POP (Post Office Protocol) / IMAP Server (Internet Massage Access Protocol)
Ce sont des protocoles qui permettent de laisser le client mail communiquer avec le server qui nous laissera prendre le mail. 

#### Exemple de servers
- Dovecot
- Cyrus IMAP

## File sharing
#### Interopérabilité (communication entre deux systèmes/OS différents)
- Samba : Permet aux ordinateurs d'accéder aux fichiers des ordi/imprimantes sous UNIX et permet aux servers Unix de se comporter comme des servers windows. 
- Netatalk : Même chose mais pour Apple Mac
- NFS (Network FIle System) : Entre UNIX et Linux (directement parti du kernel)

#### Stockage de fichiers d'informations utilisateurs / rôles de sécurité
- LDAP (Lightweight Directory Access Protocol) : Les directories sont stockés dans les arbres qui représentent les priorités d'accès (Gère Windows Active Directory)
- OpenLDAP : Gère les informations des 

## Réseau
- DNS (Domain Name System) : transforme https://ww.wikipedia.org/ en une adresse IP
  + bind (nom du server DNS le plus populaire)
+ 