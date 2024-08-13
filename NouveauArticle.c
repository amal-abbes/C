#include<stdio.h>
#include<stdlib.h>
#include"entete.h"
#include<string.h>


article* nouveau_article ()

{
    int c;

    article *nouvelArticle;
    nouvelArticle = (article*)malloc(sizeof(article));
    printf("\nDonner le titre de l\'article: ");
    scanf("%s",nouvelArticle->tit);
    //system("cls");
    printf("\nDonner le prenom de l\'auteur: ");
    scanf("%s",nouvelArticle->aut.prenom);
    //system("cls");
    printf("\nDonner le nom de l\'auteur: ");
    scanf("%s",nouvelArticle->aut.nom);
    //system("cls");
    printf("\nDonner le contenue de l\'article: ");
    scanf("%s",nouvelArticle->texte);
    //system("cls");
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
        printf("\nChoisir la categorie de l\'article: ");
        scanf("%d",&c);
    }while ( (c<1) || (c>12) );
    switch (c)
    {
    case 1:
        strcpy(nouvelArticle->cat,"INTERNATIONAL");
        break;
    case 2:
        strcpy(nouvelArticle->cat,"POLITIQUE");
        break;
    case 3:
        strcpy(nouvelArticle->cat,"SOCIETE");
        break;
    case 4:
        strcpy(nouvelArticle->cat,"ECO");
        break;
    case 5:
        strcpy(nouvelArticle->cat,"CULTURE");
        break;
    case 6:
        strcpy(nouvelArticle->cat,"SPORT");
    break;
    case 7:
        strcpy(nouvelArticle->cat,"SCIENCE");
        break;
    case 8:
        strcpy(nouvelArticle->cat,"PLANETE");
        break;
    case 9:
        strcpy(nouvelArticle->cat,"IDEES");
        break;
    case 10:
        strcpy(nouvelArticle->cat,"PIXELS");
        break;
    case 11:
        strcpy(nouvelArticle->cat,"CAMPUS");
        break;
    case 12:
        strcpy(nouvelArticle->cat,"LE MAG");
    break;
    }
    scanf("%s",nouvelArticle->cat);
    do
        {
            printf("\nDonner l\'annee du creation de l\'article: ");
            scanf("%d",&nouvelArticle->d.an);
        }while ( (nouvelArticle->d.an < 0) || ( nouvelArticle->d.an > 2015));
        do
        {
            printf("\nDonner le mois du creation de l\'article: ");
            scanf("%d",&nouvelArticle->d.mo);
        }while ( (nouvelArticle->d.mo < 1) || ( nouvelArticle->d.mo > 12) );
        do
        {
            printf("\nDonner le jour du creation de l\'article: ");
            scanf("%d",&nouvelArticle->d.jr);
        }while ( (nouvelArticle->d.jr < 1) || ( nouvelArticle->d.jr > 31));
        do
        {
            printf("\nDonner l\'heure du creation de l\'article: ");
            scanf("%d",&nouvelArticle->he.h);
        }while ( (nouvelArticle->he.h < 0) || ( nouvelArticle->he.h > 23));
        do
        {
            printf("\nDonner le minute du creation de l\'article: ");
            scanf("%d",&nouvelArticle->he.m);
        }while ( (nouvelArticle->he.m < 0) || ( nouvelArticle->d.an > 59));
        do
        {
            printf("\nDonner le second du creation de l\'article: ");
            scanf("%d",&nouvelArticle->he.s);
        }while ( (nouvelArticle->he.s < 0) || ( nouvelArticle->he.s > 59));
    printf("\nDonner le code de l\'article: ");
    scanf("%ld",&nouvelArticle->code);
    return nouvelArticle;

}
