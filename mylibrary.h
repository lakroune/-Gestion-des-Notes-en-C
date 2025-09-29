#include <stdio.h>
#include <stdlib.h>

void clear(){ system("cls");}

void saisir_un_tableau(int nombre_des_notes, float notes[])
{
    int i;
    for (i = 0; i < nombre_des_notes; i++)
    {
        int valid;
        do
        {
           
            printf("Entrer la note %d : ", i + 1);

            valid = scanf("%f", &notes[i]);
             clear();
            // vider le  clavier
            int c;
            while ((c = getchar()) != '\n' && c != EOF);

            if (!valid || notes[i] < 0 || notes[i] > 20)
            {
                printf(" Entrez une valeur entre 0 et 20.\n");
            }

        } while (!valid || notes[i] < 0 || notes[i] > 20);
    }
}

// afficher toutes les notes.

void affiche_les_notes(int taille_de_table, float table_des_notes[])
{
    int i;
    for (i = 0; i < taille_de_table; i++)
        printf("note num %d = %.2f \n", i + 1, table_des_notes[i]);
}

// Calculer et afficher la moyenne.
float calcule_le_moyenne(int taille_de_table, float table_des_notes[])
{
    int i;
    float sum = 0;
    for (i = 0; i < taille_de_table; i++)
        sum += table_des_notes[i];
    return sum / taille_de_table;
}

// Trouver et afficher la note maximale

void Trouver_et_afiche_la_note_maximale(int taille_de_table, float table_des_notes[])
{
    int i;
    float max = table_des_notes[0];
    for (i = 1; i < taille_de_table; i++)
        if (max < table_des_notes[i])
            max = table_des_notes[i];
    printf(" la note maximale n%.2f .\n", max);
}

//  fonction pour trouver la note minimale.
float trouver_la_note_minimale(float taille_de_table, float table_des_notes[])
{
    int i;
    float min = table_des_notes[0];
    for (i = 1; i < taille_de_table; i++)
        if (min > table_des_notes[i])
            min = table_des_notes[i];
    return min;
}
void menu(float notes[], int nombre_des_notes)
{
    int choix;

    do
    {
        // Affichage du menu
        printf("\n===== MENU =====\n");
        printf("1. Afficher les notes\n");
        printf("2. Afficher la note maximale\n");
        printf("3. Afficher la note minimale\n");
        printf("4. Calculer la moyenne\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");

        // Lecture du choix
        scanf("%d", &choix);

        // Vider le buffer clavier
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        // Traitement du choix
        switch (choix)
        {
        case 1:
            clear();
            printf("-> Affichage des notes \n");
            affiche_les_notes(nombre_des_notes, notes);
            break;
        case 2:
            clear();
            Trouver_et_afiche_la_note_maximale(nombre_des_notes, notes);
            break;
        case 3:
            clear();
            printf("-> Note minimale est %.2f .", trouver_la_note_minimale(nombre_des_notes, notes));
            break;
        case 4:
            clear();
            printf("-> Moyenne des notes est %.2f ", calcule_le_moyenne(nombre_des_notes, notes));
            break;
        case 0:
            clear();
            printf("->  Quitter !\n");
            break;
        default:
            clear();
            printf("Choix invalide. \n");
        }

    } while (choix != 0);
}
