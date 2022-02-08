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
  printf("Affichage\n");
  for (int i = 0 ; i < (sizeof(EleveTab)/sizeof(struct Eleve));i++)
  {
    printf("Nom : %s, Prenom : %s, age : %d\n",EleveTab[i].Nom,EleveTab[i].Prenom,EleveTab[i].Age);
  }

  char nom1[30];
  printf("Entrez le nom de la fiche a modifier : ");
  scanf("%s",nom1 );
  int change = 0 ;
  for (int i = 1 ; i < ((sizeof(EleveTab)/sizeof(struct Eleve))+1) ; i++)
  {
    if (strcmp(nom1,EleveTab[i-1].Nom) == 0){change = i;}
  }
  if (change == 0 ){printf("Nom non trouvée - FIN");}
  else {
    printf("Nouvel age : ");
    scanf("%d",&EleveTab[change-1].Age );
  }
  for (int i = 0 ; i < (sizeof(EleveTab)/sizeof(struct Eleve));i++)
  {
    printf("Nom : %s, Prenom : %s, age : %d\n",EleveTab[i].Nom,EleveTab[i].Prenom,EleveTab[i].Age);
  }
  return 0 ;
}















