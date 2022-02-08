#include<stdio.h>
#define SIZE 10
int main(){
  int tab[]= {10,4,45,453,2,4536,23,98,23,1};
  int provis ;
  for (int i=0 ; i < SIZE-1; i++)
  {
    for ( int j=0 ; j < SIZE-i-1; j++)
    {
      /* Pour un ordre décroissant utiliser < */
      if (tab[j] > tab[j+1]) 
      {
        provis = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = provis;
      }
    }
  }
  printf("Tableau triee par ordre croissant : \n");
 
   for (int t=0; t < SIZE; ++t)
   {
      printf("%4d ,", tab[t]);
   }
  return 0 ;
}