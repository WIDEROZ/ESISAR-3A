## I. ```man```
### 1. Sections
```man``` est divisé en plusieurs sections, lorsqu'on tape ```man command```, man va chercher dans l'ordre des sections : 

- 1   Executable programs or shell commands
- 2   System calls (functions provided by the kernel)
- 3   Library calls (functions within program libraries)
- 4   Special files (usually found in /dev)
- 5   File formats and conventions, e.g. /etc/passwd
- 6   Games
- 7   Miscellaneous (including macro packages and conventions), e.g. man(7), groff(7), man-pages(7)
- 8   System administration commands (usually only for root)
- 9   Kernel routines \[Non standard\]


### 2. Commandes
```bash
man -f command
```
$\equiv$
```bash
whatis command
```
Affiche un description courte de la commande et dans quelle section se trouve la commande

```bash
man -k text
```
$\equiv$
```bash
apropos text
```
recherche dans la description ou le nom de la commande : text

## II. Savoir ou se trouve n'importe quoi
#### Savoir ou se trouve une commande
```bash
whereis command
```

#### Savoir ou se trouve un fichier ou un dossier
```bash
locate gimp
```

-c : Compter le nombre de fichiers / dossiers trouvés
-b : N'affiche pas les fichiers basename

Basename : Affiche les fichiers/dossier dans le dossier \*gimp/ par exemple mais pas le fichier \*gimp/ en lui même

## III. ```Info```
Voir info comme un livre et les cellules comme des chapitres
```bash
info
```
top-level documentation

### 1. Menu
La section menu contient des liens vers d'autres cellules

### 2. Raccourcis claviers
- u : Va au début de la prochaine cellule
- l  : Va à l'emplacement précédent (si on a cliqué sur un lien du menu le curseur se retrouvera sur le lien que l'on a cliqué)
- Shift+h : Liste des raccourcis
