#include<stdio.h>
#include<string.h>
#define SIZE 10
int main(){
  char tab1[]="ESIEE";
  char tab2[]="Bonjour";
  int i = 0 ;
  i = strcmp(tab1 , tab2);
  if (i <= -1 ){printf("La chaine %s est classee alphabetiquement avant la chaine %s",tab1,tab2);}
  if (i >= 1 ){printf("La chaine %s est classee alphabetiquement avant la chaine %s",tab2,tab1);}
  if (i == 0 ){printf("les 2 chaines sont égales");}
  return 0 ;
}