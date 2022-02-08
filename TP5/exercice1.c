#include<stdio.h>

struct Eleve {
  char Nom[30];
  char Prenom[30];
  int Age;
};

int main()
{
  struct Eleve Eleve1={"Dupont","Hugo",14};
  struct Eleve Eleve2={"Laplace","Eric",12};
  printf("Joueur 1 : Nom = %s , Prenom = %s , Age = %d\n",Eleve1.Nom,Eleve1.Prenom,Eleve1.Age);
  printf("Joueur 2 : Nom = %s , Prenom = %s , Age = %d",Eleve2.Nom,Eleve2.Prenom,Eleve2.Age);
  return 0 ;
}