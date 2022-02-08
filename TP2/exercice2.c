#include<stdio.h>
int main(){
  unsigned char var = 65 ;
  unsigned char var1 = 97 ;
  unsigned char var2 = 32 ;
  unsigned char var3 = 7 ;
  for (int i = 0 ; i<26 ; i++){
    printf("%c",var);
    printf(" = %d",var);
    printf(" = %x\n",var);
    var += 1 ;
  }
  for (int i = 0 ; i<26 ; i++){
    printf("%c",var1);
    printf(" = %d",var1);
    printf(" = %x\n",var1);
    var1 += 1 ;
  }
  for (int i = 0 ; i<(126-32) ; i++){
    printf("%c\n",var2);
    var2 += 1 ;
  }
  printf("%c",var3);
  return 0 ;
}