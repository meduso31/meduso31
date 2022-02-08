#include<stdio.h>
int main(){
  unsigned long valeur = 0 ;
  for (int z = 0 ; z < 16 ; z++){
    valeur = z ;
    for (int i = z-1 ; i>0 ; i--){
      valeur *= i ; 
    }
    if (z==0){printf("le resultat est : 1\n");}
    else{printf("le resultat est : %ld\n", valeur);}
  }
  return 0 ;
}