#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define TAILLE_MAX 1000


int SearchWord (char Fichier[], int N, char Mot[]){
    int compteur = 1 ;
    int taille = -1 ;
    FILE* fichier = NULL;
    char chaine[TAILLE_MAX] = "";
    fichier = fopen(Fichier, "r");
 
    if (fichier != NULL)
    {
        while (fscanf(fichier,"%s",chaine) !=EOF && compteur != N) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
        {
            fscanf(fichier, chaine);
            compteur++;
        }
        if (N==compteur){taille = strlen(chaine);}
        fclose(fichier);
    }
    return taille;
}

int RandomN (int N){
    int nombre = 0;
    nombre = rand() % (N + 1);
    return  nombre;
}

int CountWord(char p1[]){
    int compteur = 0 ;
    FILE* fichier = NULL;
    char chaine[TAILLE_MAX] = "";
    fichier = fopen(p1, "r");
 
    if (fichier != NULL)
    {
        while (fscanf(fichier,"%s",chaine) !=EOF) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
        {
            fscanf(fichier, chaine);
            compteur++;
        }
 
        fclose(fichier);
    }
    return compteur;
}
 
int main(int argc, char *argv[])
{
    int NombreMots;
    int Emplacements ;
    srand(time(NULL));
    char MotsRechercher[TAILLE_MAX] ="";
    char NomFichier[]="text.txt";
    NombreMots = CountWord(NomFichier);
    Emplacements = RandomN(NombreMots);
    printf("Mon random est %d\n",Emplacements);
    NombreMots = SearchWord(NomFichier,Emplacements,MotsRechercher);
    printf("Il y a %d lettres",NombreMots);
    return 0;
}


