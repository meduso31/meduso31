#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define TAILLE_MAX 1000
 
int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    char chaine[TAILLE_MAX] = "";
    float compteur = 50 ;

 
    fichier = fopen("text.txt", "w");
 
    if (fichier != NULL)
    {
        for (int i = 0 ; i <compteur ; i++){
            fprintf(fichier,"%d\n", i);
        }
        fclose(fichier);
    }
    fichier = fopen("text.txt", "r");
 
    if (fichier != NULL)
    {
        while (fscanf(fichier,"%s",chaine) !=EOF) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
        {
            fscanf(fichier, chaine);
            printf("%s ", chaine); // On affiche la chaîne qu'on vient de lire
        }
 
        fclose(fichier);
    }
    return 0;
}
