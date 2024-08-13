#include<stdio.h>
#include<stdlib.h>
#include"entete.h"
#include<string.h>
article* Affichage(article *T)
{
    article* tmp=T;
    long a;
    while (tmp!=NULL)
    {
            printf("\nDonner le code de l\'article a afficher: ");
            scanf("%ld",&a);
            if (tmp->code == a)
            return tmp;
            else tmp=tmp->nxt;
    }
    if (tmp==NULL)
        return tmp;
}
