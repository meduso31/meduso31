#include<stdio.h>

struct Eleve {
  char Nom[30];
  char Prenom[30];
  int Age;
  int Notes[5];
};

int main()
{
  struct Eleve Eleve1={"Dupont","Hugo",14};
  Eleve1.Notes[0]=5;
  Eleve1.Notes[1]=10;
  Eleve1.Notes[2]=15;
  Eleve1.Notes[3]=18;
  Eleve1.Notes[4]=18;
  struct Eleve Eleve2={"Laplace","Eric",12};
  Eleve2.Notes[0]=13;
  Eleve2.Notes[1]=15;
  Eleve2.Notes[2]=2;
  Eleve2.Notes[3]=5;
  Eleve2.Notes[4]=7;
  printf("Joueur 1 : Nom = %s , Prenom = %s , Age = %d\n",Eleve1.Nom,Eleve1.Prenom,Eleve1.Age);
  printf("Joueur 2 : Nom = %s , Prenom = %s , Age = %d\n",Eleve2.Nom,Eleve2.Prenom,Eleve2.Age);
  for (int i = 0 ; i < (sizeof(Eleve2.Notes)/sizeof(int));i++)
  {
    printf(" %d ,",Eleve1.Notes[i]);
  }
  printf("\n");
  for (int i = 0 ; i < (sizeof(Eleve2.Notes)/sizeof(int));i++)
  {
    printf(" %d ,",Eleve2.Notes[i]);
  }
  return 0 ;
}