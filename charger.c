#include <stdio.h>
#include <stdlib.h>
#include "entete.h"
#include <string.h>
#include<conio.h>

void charger (article* T)
{
    FILE* fichier;
    fichier = fopen ("text.txt","w");
    while (T!=NULL)
        {
            fscanf(fichier, "%s", T->tit);
            fscanf(fichier, "%ld", &T->code);
            fscanf(fichier, "%s", T->aut.nom);
            fscanf(fichier, "%s", T->aut.prenom);
            fscanf(fichier, "%s", T->com.pseudo);
            fscanf(fichier, "%s", T->com.texte);
            fscanf(fichier, "%d", &T->com.d.an);
            fscanf(fichier, "%d", &T->com.d.mo);
            fscanf(fichier, "%d", &T->com.d.jr);
            fscanf(fichier, "%d", &T->com.he.h);
            fscanf(fichier, "%d", &T->com.he.m);
            fscanf(fichier, "%d", &T->com.he.s);
            fscanf(fichier, "%d %d %d %d %d %d", &T->d.an, &T->d.jr, &T->d.mo, &T->he.h, &T->he.m, &T->he.s);
            T = T->nxt;
        }
}
