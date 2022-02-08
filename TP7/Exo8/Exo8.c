#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TAILLE_MAX 1000

int SearchWord(char Fichier[], int N, char Mot[])
{
    int compteur = 1;
    int taille = -1;
    FILE *fichier = NULL;
    char chaine[TAILLE_MAX] = "";
    fichier = fopen(Fichier, "r");

    if (fichier != NULL)
    {
        while (fscanf(fichier, "%s", chaine) != EOF && compteur != N) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
        {
            fscanf(fichier, chaine);
            compteur++;
        }
        if (N == compteur)
        {
            taille = strlen(chaine);
        }
        strcpy(Mot, chaine);
        fclose(fichier);
    }
    return taille;
}

int RandomN(int N)
{
    int nombre = 0;
    nombre = rand() % (N + 1);
    return nombre;
}

int CountWord(char p1[])
{
    int compteur = 0;
    FILE *fichier = NULL;
    char chaine[TAILLE_MAX] = "";
    fichier = fopen(p1, "r");

    if (fichier != NULL)
    {
        while (fscanf(fichier, "%s", chaine) != EOF) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
        {
            fscanf(fichier, chaine);
            compteur++;
        }

        fclose(fichier);
    }
    return compteur;
}

void affichePendu(int p1)
{
    if (p1 == 1)
    {
        printf("_____\n");
    }
    else if (p1 == 2)
    {
        printf("/\n|\n|\n|\n|\n|\n|_____\n");
    }
    else if (p1 == 3)
    {
        printf("/-----\n|\n|\n|\n|\n|\n|_____\n");
    }
    else if (p1 == 4)
    {
        printf("/-----\n|    |\n|\n|\n|\n|\n|_____\n");
    }
    else if (p1 == 5)
    {
        printf("/-----\n|    |\n|    Q\n|\n|\n|\n|_____\n");
    }
    else if (p1 == 6)
    {
        printf("/-----\n|    |\n|    Q\n|    |/\n|    |\n|   /\n|_____\n");
    }
}

int main(int argc, char *argv[])
{
    char reponses[TAILLE_MAX] = "";
    int NombreMots;
    int Emplacements;
    srand(time(NULL));
    char MotsRechercher[TAILLE_MAX] = "";
    char NomFichier[] = "text.txt";
    NombreMots = CountWord(NomFichier);
    Emplacements = RandomN(NombreMots);
    while (Emplacements == -1)
    {
        Emplacements = RandomN(NombreMots);
    }
    //printf("Mon random est %d\n", Emplacements);
    NombreMots = SearchWord(NomFichier, Emplacements, MotsRechercher);
    printf("Il y a %d lettres\n", NombreMots);
    printf("Entrez un mot :");
    scanf("%s", reponses);
    char Comparaison[TAILLE_MAX] = "";
    int egal = 0;
    int test = 0;
    int nbressaies = 1;
    printf("%s\n%s\n", MotsRechercher, reponses);
    while (egal != 1 && nbressaies <= 6)
    {
        if (strcmp(MotsRechercher, reponses) == 0)
        {
            egal = 1;
        }
        else
        {
            printf("Mauvaise reponses !\n");
            while (test < NombreMots)
            {
                if (MotsRechercher[test] == reponses[test])
                {
                    Comparaison[test] = *"V";
                }
                else
                {
                    Comparaison[test] = *"F";
                }
                test++;
            }
            printf("%s \n%s\n", reponses, Comparaison);
            affichePendu(nbressaies);
            printf("Entrez un mot :");
            strcpy(reponses, "");
            scanf("%s", reponses);
            strcpy(Comparaison, "");
            test = 0;

            nbressaies++;
        }
    }
    if (egal == 1)
    {
        printf("Bravo tu as reussi");
    }
    else
    {
        printf("Tu as perdu\n");
        affichePendu(6);
    }
    return 0;
}
