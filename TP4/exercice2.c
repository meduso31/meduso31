#include<stdio.h>
#define SIZE 10
int main(){
  char tab1[]="ceci ";
  char tab2[]="est une phrase";
  char tab3[30];
  int i = 0 ;
  int t = 0 ;
  while ( tab1[i] != '\0'){
    tab3[i]=tab1[i];
    i++;
  }
  t = i ;
  i = 0 ;
  while ( tab2[i] != '\0'){
    tab3[t]=tab2[i];
    i++;
    t++;
  }
  tab3[t+1]='\0';
  printf("Tab  1 : %s \n",tab1);
  printf("Tab  2 : %s \n",tab2);
  printf("Tab  3 : %s \n",tab3);
  return 0 ;
}