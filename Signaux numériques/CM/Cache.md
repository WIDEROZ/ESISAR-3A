# Stratégies de lecture : remplacement de valeurs dans un cache
- $NLU$ (Not last used) 
  On introduit un bit d'ancienneté : 
  + Si le bit est à $0$ alors on ne remplace pas la valeur
  + Sinon on remplace la valeur et on met son bit d'ancienneté à $0$ et tous les autres à $1$ 
- $LRU$ (Least recently used) 
  On introduit un nombre d'ancienneté / de priorité et on lui donne la valeur de l'ancien accès accès cache $+1$/$-1$

# Stratégies d'écriture
- Write through : Le processeur écrit dans le cache et la mémoire en même temps
- Write Back : Le processeur écrit dans la mémoire cache puis dans la mémoire si la valeur du bit de modification est à $1$
- Le processeur écrit dans le cache qui écrit dans un tampon d'écriture qui écrit dans la mémoire.

# Solutions pour réduire le taux d'échec
- Augmenter la taille des blocs pour exploiter la localité spatiale des donnés
- Avoir une associativité plus élevée (directly mapped -> associative mapping)
- Lecture anticipée avant que les donnés ne soient demandés par le processeur : 
  + Matérielle : Lit un ou plusieurs blocs en plus de celui qui est demandé et le stock dans un buffer ou directement dans la mémoire cache
  + Compilateur : Il introduit des instructions de préchargement pour aller chercher la donnée (dans les registres ou le cache) avant qu'elle ne soit demandée
- Compilateur : Echange de boucles

# Réduire la pénalité d'échec
- Redémarrage précoce du pipeline : Dès que le mot arrive le processeur redémarre le pipeline et laisse le bloc se charger en arrière plan dans le cache
- Le mot critique en premier / Lecture enroulée : Le mot demandé est envoyé au CPU en premier par la mémoire et le reste du bloc sera chargé en cache en arrière plan. 
- Ajouter un deuxième niveau de cache

# Réduire le temps d'accès
Pour que le cache suive un cycle d'horloge rapide il faut : 
- Faire un petit cache
- Faire un cache simple
- Eviter la traduction d'adresse du cache car les accès réussi sont plus courants que les échecs

# Mémoire virtuelle
## 1. Définitions
#### MMU (Memory management unit)
Unité qui gère tout ce qui est relatif à la mémoire virtuelle

#### Page
Un bloc de mémoire virtuelle est appelée une page

## 2. Table des pages (PTE)
- Tableau indexé par le numéro de page virtuelle
- Il existe un registre "page table" dans le CPU qui indique l'emplacement de la page en mémoire
- Il existe un bit de validité qui vaut : 
  + $1$ si l'adresse de la page est en mémoire
  + $0$ sinon

![[Pasted image 20260104164846.png]]

## 3. Remplacement et écriture
- On utilise la politique : **LRU**
- Comme l'écriture dans le disque prend beaucoup de temps on préfère utiliser la technique Write back avec un dirty bit

## 4. TLB
C'est un cache dans le processeur qui enregistre les informations de la dernière page à laquelle le processeur a eu accès. 

![[Pasted image 20260104170521.png]]

