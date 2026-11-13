# Exercice 1 : Création dynamique d’un tableau d'entiers

Figure 1 : Résultat de la compilation et de l'exécution de l'exercice 1
<img width="911" height="378" alt="Screenshot 2026-11-13 130116" src="https://github.com/user-attachments/assets/431da91c-8f8e-429c-9191-419acbe159b5" />

Cet exercice consiste à créer un tableau d'entiers dont la taille est définie par l'utilisateur.
L'allocation mémoire est réalisée avec new[], ce qui permet de réserver dynamiquement l'espace nécessaire.
L'utilisateur saisit ensuite les valeurs qui seront stockées dans le tableau.
Une boucle permet d'afficher tous les éléments saisis.
Enfin, delete[] libère la mémoire réservée afin d'éviter toute fuite mémoire.

# Exercice 2 : Gestion dynamique d’un objet

Figure 2 : Résultat de la compilation et de l'exécution de l'exercice 2
<img width="954" height="235" alt="Screenshot 2026-11-13 130402" src="https://github.com/user-attachments/assets/940266ff-3c54-40de-bb91-83b7232243a6" />

Cet exercice met en pratique l'allocation dynamique d'un objet à partir d'une classe Personne.
La classe contient deux attributs privés : le nom et l'âge.
Un constructeur permet d'initialiser les informations lors de la création de l'objet.
Dans le programme principal, un pointeur Personne* reçoit l'adresse de l'objet créé avec new.
L'opérateur -> permet d'appeler la méthode d'affichage à travers ce pointeur.
L'instruction delete libère ensuite la mémoire occupée par l'objet.



# Exercice 3 : Tableau dynamique d’objets

Figure 3 : Résultat de la compilation et de l'exécution de l'exercice 3
<img width="1920" height="960" alt="Screenshot (1281)" src="https://github.com/user-attachments/assets/6744775d-424a-4fb1-9a0d-9abdb906e384" />

Cet exercice consiste à manipuler plusieurs objets de la classe Livre dans un tableau dynamique.
Chaque livre possède un titre et un prix, initialisés à l'aide d'un constructeur.
L'utilisateur choisit le nombre de livres à enregistrer et saisit leurs informations.
L'opérateur new[] permet de créer un tableau contenant le nombre d'objets demandé.
Une boucle parcourt le tableau afin d'afficher les informations de chaque livre.
Enfin, delete[] libère correctement la mémoire réservée au tableau.



# Exercice 4 : Gestion d’un carnet d’adresses (niveau avancé)

Figure 4 : Résultat de la compilation et de l'exécution de l'exercice 4
<img width="1920" height="980" alt="Screenshot (1282)" src="https://github.com/user-attachments/assets/d5c70594-2937-4952-8b9c-d26596d49ea8" />
<img width="1920" height="975" alt="Screenshot (1283)" src="https://github.com/user-attachments/assets/0f42b99d-8414-42a9-a765-b9e8f18c2989" />



Cet exercice permet de créer un carnet d'adresses à l'aide d'un tableau dynamique de pointeurs Contact**.
La classe Contact regroupe le nom, le numéro de téléphone et l'adresse e-mail.
Un menu interactif permet d'ajouter, d'afficher et de supprimer des contacts.
Chaque nouveau contact est créé dynamiquement avec new.
La fonction supprimerContact(Contact**, int&, string nom) recherche un contact par son nom, libère sa mémoire et réorganise les pointeurs.
Avant de quitter le programme, tous les contacts restants sont libérés avec delete, puis le tableau avec delete[].


