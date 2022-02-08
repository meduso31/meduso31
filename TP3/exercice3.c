#include<stdio.h>
int main(){
  char Tab[6] = {101,115,105,101,101,0};
  for (int i = 0 ; i < (sizeof(Tab)/sizeof(Tab[0])) ; i++){
    printf("Decimal : %d ; ASCII : %c \n",Tab[i],Tab[i]);
  }
  printf("%s",Tab);
  return 0 ;
}