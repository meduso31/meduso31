#include<stdio.h>
int main(){
  float val = 0.00001234567 ;
  double val2 =  9876543210;
  printf("%f ; %e ; %g \n", val, val, val);
  printf("%f ; %e ; %g \n", val2, val2, val2);
  printf("Taille : %d ; Adress : %p \n", sizeof(val), &val);
  printf("taille : %d ; Adress : %p \n", sizeof(val2), &val2);
  return 0 ;
}