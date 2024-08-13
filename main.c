#include<stdio.h>
#include<stdlib.h>
#include"entete.h"
#include<string.h>
#include<conio.h>
int main()

{
    system("color 1F");
    article* T = (article*)malloc(sizeof(article));
    article* nouvelArticle=NULL;
    int a,x,b,o;
        do
        {
            system("cls");
            printf("                             1- UTILISATEUR\n");
            printf("                             2- VISITEUR\n");
            printf("\n");
            printf("                             0- Quitter\n");
            printf("\n");
            do
                {
                    printf("\nSaisir votre choix (entre 0 et 2) : ");
                    scanf("%d",&a);
                }while ( ( a < 0 ) || ( a > 2 ) );
            switch (a)
            {
                system("cls");
        case 1:
            {
                do
                    {
                        printf("\n                              +++ MENU +++");
                        printf("\n                          1- Un nouvel article");
                        printf("\n                          2- Afficher un article");
                        printf("\n                          3- Mettre a jours un article");
                        printf("\n                          4- Supprimer un article");
                        printf("\n                          5- Retourner au menu principal");
                        printf("\n");
                        printf("\n");
    do
    {
        printf("\n\n\nSaisir votre choix (entre 1 et 5): ");
        scanf("%d",&x);
    }while ( ( x < 1 ) || ( x > 5 ) );
    //charger(T);
    switch (x)
    {
        system("cls");
        case 1:
            {
                do
                    {
                        ajouter (T,nouvelArticle);
                        printf("\n\n\nSi vous voulez entrer un autre article taper sur 1: ");
                        scanf("%d",&b);
                    }while(b==1);
                   sauvegarder(T);
            }break;

        case 2:
            {
                if (T != NULL)
                Affichage (T);
                else
                printf("Oups! On a aucun article a afficher !\n");
                    }break;
        case 3:
            {

                if (T != NULL)
                    maj(T);
                else
                    printf("Oups! On a aucun article a modifier !\n");

            }break;
        case 4:
            {
                if (T != NULL)
                    supprimerArticle(T);
                else
                    printf("Oups! On a aucun article a supprimer !\n");
            }
            }break;


                    }while  (b==1);
}break;
          case 2:
              {
                  system("cls");
                  if (T != NULL)
                    {
                        Affichage(T);
                  do
                    {
                        printf("                 Voulez-vous commenter?\n");
                        printf("                 0-Non\n");
                        printf("                 1-Oui\n");
                        scanf("%d",&o);
                    }while( ( o < 0 ) || ( o > 1 ));
                    system("cls");
                    if ( o == 1)
                        comment(T);
                    else
                        printf("              Merci pour votre visite!\n");
                    }
                    else
                        printf("              Oups! On a aucun article a commenter !\n");
                }break;
            case 0:
                {
                    system("cls");
                    printf("                  Merci pour votre visite!\n");
                }break;
}
}while ( x == 5 ) ;
return 0;
}
