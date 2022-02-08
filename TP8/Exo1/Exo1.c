#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TAILLE_MAX 1000


int MaxSizeInFile(const char Fichier[])
{
    int compteur = 0;
    int taille = 0;
    FILE *fichier = NULL;
    char chaine[TAILLE_MAX] = "";
    fichier = fopen(Fichier, "r");
    if (fichier != NULL)
    {
        while (fscanf(fichier, "%s", chaine) != EOF)
        {
            taille = strlen(chaine);
            if (taille >= compteur)
            {
                compteur = taille;
            }
        }
        fclose(fichier);
    }
    else
    {
        compteur = -1;
    }
    return compteur;
}

int main(int argc, char *argv[])
{
    int Plusgrandmot = MaxSizeInFile(argv[1]);
    printf("Le plus grand mot a %d caractere\n", Plusgrandmot);
    return 0;
}