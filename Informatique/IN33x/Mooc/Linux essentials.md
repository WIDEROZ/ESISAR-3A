# Lien pour accéder au Mooc
https://www.netacad.com/courses/linux-essentials?courseLang=en-US&instance_id=67590867-97ec-4686-bb99-20aae6947cd2

# Chapitre 3
## I. Réseau
### 1. DNS (Domain Name System)
Transforme https://ww.wikipedia.org/ en une adresse IP
#### Exemple
bind : nom du server DNS le plus populaire

### 2. DHCP (Dynamic Host Configuration Protocol)
Protocole d'allocation d'une adresse IP libre. 
#### Exemple
ISC DHCP : Le plus populaire des server DHCP

### 3. Web servers 
#### Web sever
Stock les fichiers du site web
- Apache
- NGINX

#### Daemon
C'est un processus qui s'execute en arrière plan et il n'y a pas d’interaction directe avec l'utilisateur. 
- Apache HTTPD (Écoute les requêtes entrantes envoyé au server web et y répond)

### 4. Pare-feu
Filtre le trafic du réseau
#### Exemple
- ufw (Uncomplicated FireWall) : Version graphique gufw
- iptables


## II.File sharing
#### 1. Interopérabilité (communication entre deux systèmes/OS différents)
- Samba : Permet aux ordinateurs d'accéder aux fichiers des ordi/imprimantes sous UNIX et permet aux servers Unix de se comporter comme des servers windows. 
- Netatalk : Même chose mais pour Apple Mac
- NFS (Network FIle System) : Entre UNIX et Linux (directement parti du kernel)

#### 2. Stockage de fichiers d'informations utilisateurs / rôles de sécurité
- LDAP (Lightweight Directory Access Protocol) : Les directories sont stockés dans les arbres qui représentent les priorités d'accès (Gère Windows Active Directory)
- OpenLDAP : Gère les informations des utilisateurs / rôles de sécurité pour Linux



## III. Email Servers
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


## IV. Langages de programmations
### 1. Langages Compilés / Interprétés
#### Compilé
Le code est traduit en langage machine d'un coup

#### Interprété
Le code est traduit en langage machine ligne par ligne
Il offre plus de possibilités que le langage compilé (ie : on a besoin d'écrire moins de code)

### 2. Exemples de Langages de programmation
#### Perl
Langage interprété. 
Bon pour la manipulation de texte.

#### Ruby
Dérivé de Perl.
Les programmes compliqués sont plus simples à lire.



## V. Cloud
### 1. Types de Cloud
#### Public Cloud
Des fournisseurs de services de cloud mettes des ressources à disposition pour que les utilisateurs puissent les exploiter. 
- Google Drive
- ChatGPT

#### Private Cloud
Une organisation possède son propre système physique. 
- NAS

#### Community Cloud
Ressemble au cloud privé mais il est utilisé par plusieurs organisation. 

#### Hybrid Cloud
Un cloud Hybride est composé d'au moins deux Clouds de types différents. 
Cela permet a des organisation de tirer parti des ressources de ce Cloud tout en gardant un maximum de confidentialité.


### 2. Virtualisation
Permet de diviser un système physique (Host) en plusieurs systèmes virtuels (Guest). 

### 3. Cloud Services
- ownCloud (private cloud) $\Rightarrow$ Nextcloud

## VI. Package Management
#### RPM
Sert pour les distributions dérivés de Red-Hat (ou autre)
- yum $\equiv$ apt (pour les autres distributions que Debian)
 

## VIII. Database Servers
#### Database Servers
- MySQL $\Rightarrow$ MariaDB

#### Database
- Firebird
- PostgreSQL



## IV. Shells
#### Exemple
Les deux principaux sur Linux : 
- Bourne shell (Il existe pas mal de dérivés de ce shell)
- C shell



# Chapitre 5
## I. Shell
### Environm
