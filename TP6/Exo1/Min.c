#include<stdio.h>

float Min3float(float p1, float p2,float p3)
{
  float min = p1 ;
  if (p2<min){min=p2;}
  if (p3<min){min=p3;}
  return min;
}

int main(){
  float x1 = -1.0 ;
  float x2 = -2.0 ;
  float x3 = -3.0 ;
  float res = 0.0 ;
  printf("Numero 1 : ");
  scanf("%f",&x1);
  printf("Numero 2 : ");
  scanf("%f",&x2);
  printf("Numero 3 : ");
  scanf("%f",&x3);
  res = Min3float(x1,x2,x3);
  printf("Valeur minimum : %f",res);
  return 0;
}