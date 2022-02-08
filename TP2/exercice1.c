#include<stdio.h>
int main() {
  char a = -10 ;
  unsigned b = 10 ;
  short c = -100;
  unsigned short d = 1000 ;
  int e = 203144 ;
  unsigned f = 181610;
  printf("la valeur de a est egal a : %d, est de taille %ld et se situe a l'adress : %p \n",a,sizeof(a),&a);
  printf("la valeur de b est egal a : %d, est de taille %ld et se situe a l'adress : %p \n",b,sizeof(b),&b);
  printf("la valeur de c est egal a : %d, est de taille %ld et se situe a l'adress : %p \n",c,sizeof(c),&c);
  printf("la valeur de d est egal a : %d, est de taille %ld et se situe a l'adress : %p \n",d,sizeof(d),&d);
  printf("la valeur de e est egal a : %d, est de taille %ld et se situe a l'adress : %p \n",e,sizeof(e),&e);
  printf("la valeur de f est egal a : %d, est de taille %ld et se situe a l'adress : %p \n",f,sizeof(f),&f);
  return 0;
}