## I. ```man```
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

