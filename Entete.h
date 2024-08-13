#ifndef ENTETE_H_INCLUDED
#define ENTETE_H_INCLUDED

typedef struct date

{

int jr;
int mo;
int an;

}date;

typedef struct heure

{

int h;
int m;
int s;

}heure;

typedef struct commentaire

{

date d;
heure he;
char pseudo[20];
char texte[1000];

}commentaire;

typedef struct auteur

{

char nom[10];
char prenom[10];

}auteur;

typedef struct article
{

auteur aut;
char cat[15];
char texte[1000];
char tit[100];
date d;
heure he;
commentaire com;
long code;
struct article *nxt;

}article;



article* nouveau_article ();
article* ajouter (article *T, article *nouvelArticle);
article* Affichage (article *T);
article* maj(article *T);
article* comment(article *T);
void sauvegarder(article *T);
void charger (article* T);
article* supprimerArticle(article *T);


#endif // ENTETE_H_INCLUDED
