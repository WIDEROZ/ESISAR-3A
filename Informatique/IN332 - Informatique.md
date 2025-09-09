# I. Partie programmation système
## 1. Processus
#### Définition : Processus
Un processus (entité dynamique) est un programme (entité statique) en execution. 

#### État d'un processus
Au cours de son existence, un processus passe par un certain nombre d'états : 
- Nouveau : processus en cours de création, le système lui affecte les ressources dont il a besoin.
- Actif : Le processus à accès à un processeur et il execute ses instructions. 
- Prêt : Le processus attend d'être affecté au processeur. 
- Bloqué (ou en attente) : Le processus attend qu'un événement se produise. 
- Terminé : Le processus à fini son exécution. 

![[Pasted image 20250909110918.png]]
1. Création -> actionnement
2. Affectation du processeur
3. Réquisition du processeur
4. Blocage
5. Réveil
6. ATTENTION : Tous les états peuvent mener à la terminaison


#### Les composants d'un processus
##### Segment code
Suite d'instruction pour les processus. 

##### Segment données
Données accessibles par le processus. 

##### Segment pile
Pour les appels de fonctions et les appels de certains paramètres. 

##### Tas
Pour le stockage des données dynamique. 

#### Création du processus
Quand le processus est créé, un espace mémoire est alloué pour : 
- Code
- Data
- Stack
- Heap

















## 2. Signaux
















## 3. Les IPC (Inter Process Comunication)
### Les Threads



### Les ensembles de sémaphore





### Les segments de mémoire partagés