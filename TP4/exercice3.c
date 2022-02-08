#include<stdio.h>
#include<string.h>
#define SIZE 10
int main(){
  char tab1[]="ceci ";
  char tab2[]="est une phrase";
  char tab3[30];
  strcpy(tab3 , tab1 );
  strcat(tab3 , tab2 );
  strcat(tab3 ,"\0");
  printf("Tab  1 : %s \n",tab1);
  printf("Tab  2 : %s \n",tab2);
  printf("Tab  3 : %s \n",tab3);
  return 0 ;
}