#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int nombreMystere = 0, nombreEntre = 0, nombre = 0, continuerPartie = 1, nbreJoueurs = 0, difficulte = 0, MAX = 0;
    const int  MIN = 1;

    while(continuerPartie != 0)

    {   (nombre = 0);
        printf("Bonjour et bienvenue dans le jeu 'Plus ou moins', 'Le juste prix' ou 'Guess the number' pour les anglophones!\n\n Tout d'abord, choisissez votre niveau de difficulte:\n 1 = entre 1 et 100\n 2 = entre 1 et 1000\n 3 = entre 1 et 10000\n");
        scanf("%d", &difficulte);

        if      (difficulte == 1)
        {
                (MAX = 100);
        }
        else if (difficulte == 2)
        {
                (MAX = 1000);
        }
        else if (difficulte == 3)
        {
                (MAX = 10000);
        }
        else
        {
                printf("Veuillez choisir un niveau de difficulte entre 1 et 3\n");
                scanf("%d", &difficulte);
        }
        printf("1 ou 2 joueurs? ");
        scanf("%d", &nbreJoueurs);

        if (nbreJoueurs < 2) // if du mode 1/2 joueurs
        {
        srand(time(NULL));
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        }
        else
        {
            printf("Veuillez entrer le nombre mystere\n");
            scanf("%d", &nombreMystere);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        }
        do
        {
            nombre++;
            printf("Quel est le nombre? ");
            scanf("%d", &nombreEntre);


            if      (nombreMystere > nombreEntre)

                    printf("C'est plus!\n");

            else if(nombreMystere == nombreEntre)

                    printf("Bravo, vous avez trouve le nombre mystere en %d coups!\n", nombre);

            else    printf("C'est moins!\n");


        }while (nombreEntre != nombreMystere);
        printf("Voulez-vous rejouer une autre partie?\n 0 = non\n 1 = oui\n");
        scanf("%d",&continuerPartie);
    }
}
