#include<stdio.h>
#include<stdlib.h>
#include"entete.h"
#include<string.h>
#include<conio.h>

article* supprimerArticle(article *T)
{
        article* tmp=T;
        article* cmp = NULL;
    long a;
    printf("\nDonner le code de l\'article a supprimer: ");
    scanf("%ld",&a);
    while(tmp!=NULL)
    {
        if(tmp->code == a)
    {
        cmp = tmp->nxt;
        free(tmp);
        cmp = supprimerArticle(cmp);
        return cmp;
    }
    else
    {
        tmp->nxt = supprimerArticle(tmp->nxt);
        return tmp;
    }
    tmp=tmp->nxt;
}
return tmp;
        }
