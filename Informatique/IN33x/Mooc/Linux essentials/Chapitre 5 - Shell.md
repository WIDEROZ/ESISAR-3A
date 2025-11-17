### 1. Variables
##### a. Gestion des variables
###### Déclarer / Modifier une variable
```bash
var='test'
```
###### Supprimer une variable
```bash
unset var
```

##### b. Variables d'environnement
```bash
env
```
Affiche toutes les variables d'environnement

###### PATH
Variable qui contient tous les directories ou le shell doit aller chercher pour trouver les commandes. 

### 2. Commandes
#### type
```bash
type command
```
retourne le type de la commande : 
- Allias
- Commande interne (shell builtin)
- Localisation dans le chemin path

###### Option
```bash
type -a command
```
Affiche toutes les localisations ou est contenue la commande

#### which
```bash
which command
```
Donne la localisation dans le chemin path

### 3. Aliases
```bash
alias
```
Affiche les allias

```bash
alias name=command
```
Change la commande command en allias name

### 4. Fonctions
```bash
nom_fonction () {
	commandes
}
```

### 5. Quotes
#### a. Doubles quotes
```bash
echo "The path is $PATH"
```
Renvoie : 
```bash
The path is /opt/ros/jazzy/bin:/home/elio/.opam/default/bin:/home/elio/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin:/snap/bin:/home/elio/.lmstudio/bin
```

#### b. Single quotes
```bash
echo 'The path is $PATH'
```
Renvoie : 
```bash
The path is $PATH
```

#### c. Back quotes
```bash
echo The date is `date`
```
Renvoie : 
```bash
The date is Sun Nov  9 04:13:29 PM CET 2025
```
Execute la commande dans les back quotes

#### d. Backslash
Utiliser un backslash pour ignorer les alias ou ignorer les variables. 


### 6. Control statement
#### a. ```;```
Execute les commandes indépendamment du résultat de la précédente. 

#### b. ```&&```
Si la première commande n'est pas exécutée alors la deuxième ne le sera pas. 

#### c. ```||```
Si la première commande est exécutée alors la deuxième ne s’exécutera pas. 
Si la première commande n'est pas exécutée alors la deuxième s’exécutera. 
