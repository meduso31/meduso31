#include<stdio.h>
#include<string.h>

struct Eleve {
  char Nom[30];
  char Prenom[30];
  int Age;
};

int main()
{
  struct Eleve EleveTab[4];
  for (int i = 0 ; i < (sizeof(EleveTab)/sizeof(struct Eleve));i++)
  {
    printf("Entres le nom : ");
    scanf("%s",EleveTab[i].Nom);
    printf("Entres le prenom : ");
    scanf("%s",EleveTab[i].Prenom);
    printf("Entres l'Age : ");
    scanf("%d",&EleveTab[i].Age);
  }
  printf("Affichage tableau non triee :\n");
  for (int i = 0 ; i < (sizeof(EleveTab)/sizeof(struct Eleve));i++)
  {
    printf("Nom : %s, Prenom : %s, age : %d\n",EleveTab[i].Nom,EleveTab[i].Prenom,EleveTab[i].Age);
  }
  struct Eleve provis;
  for (int i=0 ; i < (sizeof(EleveTab)/sizeof(struct Eleve)); i++)
  {
    for ( int j = 0 ; j < (sizeof(EleveTab)/sizeof(struct Eleve))-i-1; j++)
    {
      if (0<strcmp(EleveTab[j].Nom,EleveTab[j+1].Nom))
      {
        provis=EleveTab[j];
        EleveTab[j]=EleveTab[j+1];
        EleveTab[j+1]=provis;
      }
    }
  }
  printf("Affichage tableau triee par nom :\n");
  for (int i = 0 ; i < (sizeof(EleveTab)/sizeof(struct Eleve));i++)
  {
    printf("Nom : %s, Prenom : %s, age : %d\n",EleveTab[i].Nom,EleveTab[i].Prenom,EleveTab[i].Age);
  }
  for (int i=0 ; i < (sizeof(EleveTab)/sizeof(struct Eleve)); i++)
  {
    for ( int j = 0 ; j < (sizeof(EleveTab)/sizeof(struct Eleve))-i-1; j++)
    {
      if (0<strcmp(EleveTab[j].Prenom,EleveTab[j+1].Prenom))
      {
        provis=EleveTab[j];
        EleveTab[j]=EleveTab[j+1];
        EleveTab[j+1]=provis;
      }
    }
  }
  printf("Affichage tableau triee par prenom :\n");
  for (int i = 0 ; i < (sizeof(EleveTab)/sizeof(struct Eleve));i++)
  {
    printf("Nom : %s, Prenom : %s, age : %d\n",EleveTab[i].Nom,EleveTab[i].Prenom,EleveTab[i].Age);
  }
  for (int i=0 ; i < (sizeof(EleveTab)/sizeof(struct Eleve)); i++)
  {
    for ( int j = 0 ; j < (sizeof(EleveTab)/sizeof(struct Eleve))-i-1; j++)
    {
      if (EleveTab[j].Age>EleveTab[j+1].Age)
      {
        provis=EleveTab[j];
        EleveTab[j]=EleveTab[j+1];
        EleveTab[j+1]=provis;
      }
    }
  }
  printf("Affichage tableau triee par age :\n");
  for (int i = 0 ; i < (sizeof(EleveTab)/sizeof(struct Eleve));i++)
  {
    printf("Nom : %s, Prenom : %s, age : %d\n",EleveTab[i].Nom,EleveTab[i].Prenom,EleveTab[i].Age);
  }
  return 0 ;
}

//for (int i=0 ; i < SIZE-1; i++)
//  {
//    for ( int j=0 ; j < SIZE-i-1; j++)
//    {
//      /* Pour un ordre décroissant utiliser < */
//      if (tab[j] > tab[j+1])
//      {
//        provis = tab[j];
//        tab[j] = tab[j+1];
//        tab[j+1] = provis;
//      }
//    }
//  }