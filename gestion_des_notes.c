#include <stdio.h>
#include <stdlib.h>
#include"mylibrary.h"


int main()
{
    int nombre_des_notes, i;
    printf("svp donne la nombre des notes .");
    scanf("%d", &nombre_des_notes);
    float notes[nombre_des_notes];
    printf("svp donne saisir les  notes \n ");
    saisir_un_tableau(nombre_des_notes, notes);
    menu(notes, nombre_des_notes);
}
