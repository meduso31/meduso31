#include<stdio.h>
int main(){
  char Tab[100] = {'e','s','i','e','e',0};
  int i = 0 ;
  while(Tab[i]!=0){
    printf("Decimal : %d ; ASCII : %c \n",Tab[i],Tab[i]);
    i += 1 ;
  }
  printf("%s\n",Tab);
  printf("Taille de tableau : %d",sizeof(Tab));
  return 0 ;
}