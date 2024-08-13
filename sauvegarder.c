#include<stdio.h>
#include<stdlib.h>
#include"entete.h"
#include<string.h>
#include<conio.h>

void sauvegarder(article *T)
{
    FILE* fichier = fopen("text.txt", "w");
    while (fichier != EOF)
        {
            fprintf(fichier, "%s\n",T->tit);
            fprintf(fichier, "%s\n",T->texte);
            fprintf(fichier, "%s\n",T->aut.prenom);
            fprintf(fichier, "%s\n",T->aut.nom);
            fprintf(fichier, "%s",T->cat);
            fprintf(fichier, "%d/%d/%d à %d:%d:%d",T->d.an,T->d.mo,T->d.jr,T->he.h,T->he.m,T->he.s);
            fprintf(fichier, "%ld\n",T->code);
            T=T->nxt;
            }
            fclose(fichier);

}
