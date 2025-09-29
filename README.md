# 📊 Gestion des Notes en C

Un programme simple et interactif en langage C pour la gestion et l'analyse de notes (scores) dans un contexte académique. L'application est entièrement gérée via la console.

## ✨ Fonctionnalités

Le programme permet à l'utilisateur d'entrer un ensemble de notes et propose un menu pour effectuer différentes opérations :

* **Saisie sécurisée des notes** : Valide que chaque note est comprise entre 0 et 20.
* **Affichage des notes** : Affiche la liste complète des notes saisies.
* **Note Maximale** : Trouve et affiche la note la plus élevée.
* **Note Minimale** : Trouve et affiche la note la plus basse.
* **Calcul de la Moyenne** : Calcule et affiche la moyenne arithmétique de toutes les notes.
* **Menu Interactif** : Une boucle de menu `do-while` permet de choisir et d'exécuter les options jusqu'à ce que l'utilisateur choisisse de quitter (Option `0`).
* **Effacement Console** : Utilisation de `system("cls")` pour garder la console propre.

## 💻 Prérequis

Pour compiler et exécuter ce projet, vous aurez besoin d'un compilateur C.

* **Compilateur C** (par exemple, GCC)
* Un environnement d'exécution (terminal, console, etc.)

## 🚀 Installation et Compilation

Suivez ces étapes pour mettre le projet en place sur votre machine locale.

1.  **Cloner le dépôt :**
    ```bash
    git clone https://github.com/lakroune/-Gestion-des-Notes-en-C.git
    cd gestion-des-notes
    ```

2.  **Compilation :**
    Comme votre projet est divisé en deux fichiers (`gestion_des_note.c` et `mylibrary.h` ), vous devrez compiler le fichier principal en incluant la bibliothèque.

   

    *Tout le code de la librairie est dans `mylibrary.h` (comme dans l'exemple fourni) :*
    ```bash
    gcc gestion_des_note.c -o gestion_notes
    ```

3.  **Exécution :**
    ```bash
    ./gestion_notes
    ```
    *(Ou `gestion_notes.exe` sous Windows)*

## 💡 Utilisation

Après l'exécution, le programme vous demandera :

1.  D'entrer le nombre total de notes à gérer.
2.  De saisir chaque note une par une (la note doit être entre 0 et 20).
3.  Une fois les notes saisies, le **Menu principal** s'affichera, vous permettant de choisir l'opération à effectuer :
    ```
    ===== MENU =====
    1. Afficher les notes
    2. Afficher la note maximale
    3. Afficher la note minimale
    4. Calculer la moyenne
    0. Quitter
    Votre choix :
    ```

## 📂 Structure du Projet

| Fichier | Description |
| :--- | :--- |
| `gestion_des_note.c` | Le fichier principal (`main`) qui gère l'entrée utilisateur pour la taille du tableau et l'appel du menu. |
| `mylibrary.h` | Contient les définitions des fonctions (saisie, affichage, menu, calcul, etc.). |
| `README.md` | Ce fichier. |


## 👤 Auteur

* **[Lakroune ismail ]** - *Travail Initial* - (https://github.com/lakroune)

