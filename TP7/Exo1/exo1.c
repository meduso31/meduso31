#include<stdio.h>
#include<math.h>

void Carre(float *p1){
    *p1 = (*p1) * (*p1) ;
}

int main(){
    float a = 17 ;
    printf(" Valeur de a = %f \n",a);
    Carre(&a);
    printf(" Valeur de a = %f",a);
    return 0 ;
}