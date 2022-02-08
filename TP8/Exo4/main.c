#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Fonctions.h"
#define TAILLE_MAX 1000

int main(int argc, char *argv[])
{

    int *t;
    int Plusgrandmot = MaxSizeInFile(argv[1]);
    t = Histogram(argv[1], Plusgrandmot);
    printf("Le plus grand mot a %d caractere\n", Plusgrandmot);
    Affichehisto(t);
    Savehisto(argv[2], t);
    free(t);
    return 0;
}