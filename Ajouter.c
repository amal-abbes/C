#include<stdio.h>
#include<stdlib.h>
#include"entete.h"
#include<string.h>

article* ajouter (article *T, article *nouvelArticle)
{
    nouvelArticle = nouveau_article();
    nouvelArticle->nxt = T;
    T = nouvelArticle;
    return T;
}
