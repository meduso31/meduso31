#include<stdio.h>

void permute (int * a,int * b){
  int inter = *a ;
  *a = *b ;
  *b = inter ;
}

int main(){
  int x = 10 ;
  int y = 20 ;
  int *x1 ;
  int *y1 ;
  x1 = &x;
  y1 = &y;
  printf("Valeur de x : %d\n",*x1);
  printf("Valeur de y : %d\n",*y1);
  permute(x1,y1);
  printf("Valeur de x : %d\n",*x1);
  printf("Valeur de y : %d\n",*y1);
}

