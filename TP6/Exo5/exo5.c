#include<stdio.h>

void InitTab(int * pTab, int pTaille){ 
  for (int i = 0 ; i < pTaille ; i++){pTab[i] = i+1;}
}

void AfficheTab(int * pTab, int pTaille){ 
  for (int i = 0 ; i < pTaille ; i++){
    if (pTab[i]!=0){printf("%d\n",pTab[i]);}
  }
}

void IndiceTab(int * pTab, int pTaille){ 
  for (int i = 0 ; i < pTaille ; i++){
    if (pTab[i]!=0){printf("%d, ",i);}
  }
  printf("\n");
}

void ElimineTab(int * pTab, int pTaille,int pN){ 
  for (int i = pN*2-1 ; i < pTaille ; i++){
    if ((pTab[i]%pN)== 0){pTab[i] = 0;}
  }
}

int main(){
  int Tab[50];
  int * Tableau;
  Tableau=Tab;
  InitTab(Tableau,50);
  AfficheTab(Tableau,50);
  IndiceTab(Tableau,50);
  ElimineTab(Tableau,50,3);
  AfficheTab(Tableau,50);
  return 0 ;
}

