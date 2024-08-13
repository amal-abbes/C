#include<stdio.h>
#include<stdlib.h>
#include"entete.h"
#include<string.h>
#include<conio.h>
#include<time.h>
#include <windows.h>



article* comment(article *T)
{
    article* tmp=T;



            printf("\n\nDonner la date est heure: ");
            scanf("%d/%d/%d a %d:%d:%d", &tmp->com.d.jr, &tmp->com.d.mo, &tmp->com.d.an, &tmp->com.he.h, &tmp->com.he.m, &tmp->com.he.s);
            system("cls");
            printf("\nDonner votre pseudo: ");
            scanf("%s", tmp->com.pseudo);
            system("cls");
            printf("\nDonner votre commentaire: ");
            scanf("%s",tmp->com.texte);




    return tmp;
}
