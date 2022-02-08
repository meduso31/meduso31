#include<stdio.h>

int main(){
  float f1 = 10.0;
  float *pf;
  printf("Valeur de f1 : %f\n",f1);
  pf=&f1;
  printf("Valeur de f1 : %f\n",*pf);
  *pf = 999.5 ;
  printf("Valeur de f1 : %f\n",f1);
  printf("Valeur de f1 : %f",*pf);
  return 0 ;
}