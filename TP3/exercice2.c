#include<stdio.h>
int main(){
  int Notes[] ={5,8,12,13,15};
  float moyenne = Notes[0] ;
  int max  = Notes[0] ;
  int min  = Notes[0] ;
  //printf("Taille : %d",sizeof(Notes));
  for (int i = 0 ; i < (sizeof(Notes)/sizeof(Notes[0])) ; i++){
    printf("Adress : %p ; Element : %d \n",&Notes[i],Notes[i]);
  }
  for (int t = 0 ; t < (sizeof(Notes)/sizeof(Notes[0])) ; t++){
    moyenne += Notes[t] ;
  }
  for (int x = 0 ; x < (sizeof(Notes)/sizeof(Notes[0])) ; x++){
    if (Notes[x]>max){max = Notes[x];}
  }
  for (int y = 0 ; y < (sizeof(Notes)/sizeof(Notes[0])) ; y++){
    if (Notes[y]<min){min = Notes[y];}
  }
  moyenne = moyenne/(sizeof(Notes)/sizeof(Notes[0])) ;
  printf("La moyenne est de : %f \n", moyenne );
  printf("La max est de : %d \n", max );
  printf("La min est de : %d ", min );
  return 0 ;
}