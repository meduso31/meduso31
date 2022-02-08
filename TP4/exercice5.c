#include<stdio.h>
#include<string.h>
#define SIZE 10
int main(){
  char mot1[30];
  char mot2[30];
  int cont = 0 ;
  while (cont == 0 ){
  printf("Quelle est le premier mot a comparer : ");
  scanf("%s",mot1);
  if (strcmp(mot1 , "QUITTER\0")==0){cont = 1;return 0 ;}
  printf("Quelle mot veut tu comparer avec %s : ",mot1);
  scanf("%s",mot2);
  int i = 0 ;
  if (strcmp(mot2 , "QUITTER\0")==0){cont = 1; return 0 ;}
  i = strcmp(mot1 , mot2);
  if (i <= -1 ){printf("La chaine %s est classee alphabetiquement avant la chaine %s \n",mot1,mot2);}
  if (i >= 1 ){printf("La chaine %s est classee alphabetiquement avant la chaine %s \n",mot2,mot1);}
  if (i == 0 ){printf("les 2 chaines sont egales \n");}
  printf ("Valeur de strcmp : %d \n", i);
  }
  return 0 ;
}