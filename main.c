#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Fonction.h"


int main()
{
    int choix;
    int nom;
    int debut;
    printf("MAIN MENU!\n 1- Creer une Nouvelle Partie \n 2- Load Save Game \n 3- About \n 4- Quitter\n");
    scanf("%d",&choix);
        if (choix == 1)
        {
            printf("Quel est votre nom ?\n");
            scanf("%d",&nom);
            printf("%d\n",nom);
            debut= 1;
        }
        else if (choix == 2)
        {
            printf("Charger une partie deja existante\n");
        }
        else if (choix == 3)
        {
            printf("Ce jeu a ete cree par Yohan et Alexis");
        }
        else if (choix == 4)
        {
            printf("STOP");
        }
if (debut == 1)
{
    prologue();
}


}



















