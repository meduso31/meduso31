#include<stdio.h>

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
  printf("Affichage\n");
  for (int i = 0 ; i < (sizeof(EleveTab)/sizeof(struct Eleve));i++)
  {
    printf("Nom : %s, Prenom : %s, age : %d\n",EleveTab[i].Nom,EleveTab[i].Prenom,EleveTab[i].Age);
  }
  return 0 ;
}