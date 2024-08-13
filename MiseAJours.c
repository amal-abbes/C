#include<stdio.h>
#include<stdlib.h>
#include"entete.h"
#include<string.h>
#include<conio.h>

article* maj(article *T)
{
    article* tmp=T;
    int z,c;
    long a;
    printf("\nDonner le code de l\'article a modifier: ");
    scanf("%ld",&a);
    while(tmp!=NULL)
    {
        if (a == tmp->code)
        {
            printf("\n*** MISE A JOURS ***");
            printf("\n1- TITRE");
            printf("\n2- AUTEUR");
            printf("\n3- CATEGORIE");
            printf("\n4- TEXTE");
            printf("\n5- DATE ET HEURE");
            do
           {
            printf("\n\nDonner le chemin a modifier");
            scanf("%d",&z);
             }while (( z < 1) || ( z > 5));
            switch (z)
            {
            case 1:
                {
                    printf("donner le titre de l\'article:  ");
                    scanf("%s",tmp->tit);
                }break;
            case 2:
                {printf("\nDonner le nom et le prénom de l\'auteur\n");
                scanf("%s %s",tmp->aut.prenom,tmp->aut.nom);
                }break;
            case 3:
                {
                    printf("$$$ Categorie $$$");
        printf("\n1-  INTERNATIONAL");
        printf("\n2-  POLITIQUE");
        printf("\n3-  SOCIETE");
        printf("\n4-  ECO");
        printf("\n5-  CULTURE");
        printf("\n6-  SPORT");
        printf("\n7-  SCIENCE");
        printf("\n8-  PLANETE");
        printf("\n9-  IDEES");
        printf("\n10- PIXELS");
        printf("\n11- CAMPUS");
        printf("\n12- LE MAG");
        do
        {
            printf("\nChoisir la categorie de l\'article:\n");
            scanf("%d",&c);
        }while ( (c<1) || (c>12) );
        switch (c)
        {
        case 1:
            strcpy(tmp->cat,"INTERNATIONAL");
            break;
        case 2:
            strcpy(tmp->cat,"POLITIQUE");
            break;
        case 3:
            strcpy(tmp->cat,"SOCIETE");
            break;
        case 4:
            strcpy(tmp->cat,"ECO");
            break;
        case 5:
            strcpy(tmp->cat,"CULTURE");
            break;
        case 6:
            strcpy(tmp->cat,"SPORT");
            break;
        case 7:
            strcpy(tmp->cat,"SCIENCE");
            break;
        case 8:
            strcpy(tmp->cat,"PLANETE");
            break;
        case 9:
            strcpy(tmp->cat,"IDEES");
            break;
        case 10:
            strcpy(tmp->cat,"PIXELS");
            break;
        case 11:
            strcpy(tmp->cat,"CAMPUS");
            break;
        case 12:
            strcpy(tmp->cat,"LE MAG");
            break;
            }
        scanf("%s",tmp->cat);

                }break;
            case 4:
                {
                    printf("\nDonner le contenue de l\'article");
                scanf("%s",tmp->texte);

                }break;
            case 5:
                {
                    printf("\nDonner la date du creation de l\'article");
                    scanf("%d/%d/%d à %d:%d:%d",&tmp->d.an,&tmp->d.mo,&tmp->d.jr,&tmp->he.h,&tmp->he.m,&tmp->he.s);
                }break;
        }
    }
     tmp=tmp->nxt;
}
return tmp;
    }

