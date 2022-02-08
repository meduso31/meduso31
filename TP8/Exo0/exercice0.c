#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0 ;
    printf("%d argument saisis",argc);
    for( i = 0 ; i < argc ; i++){
        printf(", nom argument %d = %s",i,argv[i]);
    }
    printf("\n");
    return 0;
}