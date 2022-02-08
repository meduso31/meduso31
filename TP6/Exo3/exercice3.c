#include<stdio.h>

void MinMax3float(float pA,float pB,float pC,float  * pMin,float * pMax){
  float aMin = pA;
  float aMax = pA;
  if (aMin>pB){aMin=pB;}
  if (aMin>pC){aMin=pC;}
  if (aMax<pB){aMax=pB;}
  if (aMax<pC){aMax=pC;}
  *pMin = aMin;
  *pMax = aMax;
}

int main(){
  float x = 5;
  float y = 18;
  float z = 10;
  float min_xyz;
  float max_xyz;
  float *Min;
  float *Max;
  Min=&min_xyz;
  Max=&max_xyz;
  MinMax3float(x,y,z, Min, Max);
  printf("Valeur de x : %f\n",x);
  printf("Valeur de y : %f\n",y);
  printf("Valeur de z : %f\n",z);
  printf("Valeur de min_xyz : %f\n",min_xyz);
  printf("Valeur de max_xyz : %f",max_xyz);
  return 0 ;
}