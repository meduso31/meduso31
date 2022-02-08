#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TAILLE_MAX 1000

int* Histogram(const char Fichier[], int ptaille)
{
    int *t;
    int a;
    int taille = 0;
    FILE *fichier = NULL;
    char chaine[TAILLE_MAX] = "";
    t = malloc(ptaille * sizeof(int));
    t[0] = ptaille;
    for (a=1;a<=ptaille;a++){
        t[a] = 0;
    }
    fichier = fopen(Fichier, "r");
    if (t == NULL)
    {
        printf("L'allocation n'a pu être réalisée\n");
    }
    else
    {
        if (fichier != NULL)
        {
            while (fscanf(fichier, "%s", chaine) != EOF)
            {
                taille = strlen(chaine);
                t[taille] ++;
            }
            fclose(fichier);
        }
    }
    return t;
}

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

 void Affichehisto(int *tab){
    int i;
    for (i = 1; i <= tab[0]; i++)
    {
        printf("Il y a %d qui ont %d lettres\n", tab[i], i);
    }
 }

int main(int argc, char *argv[])
{
    
    int *t;
    int Plusgrandmot = MaxSizeInFile(argv[1]);
    t = Histogram(argv[1], Plusgrandmot);
    printf("Le plus grand mot a %d caractere\n", Plusgrandmot);
    Affichehisto(t);
    free(t);
    return 0;
}