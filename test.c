#include <stdio.h>
#include <string.h>


struct Test
{
    int t;
    char x;
};

void AfficheTab(char ptab[])
{
    for (int i = 0; i < strlen(ptab) - 1; i++)
    {
        printf("Valeur n' %d : %c\n", i, ptab[i]);
    }
}

void Calcule(int *pVal)
{
    *pVal = 97;
}


void Tabescargot(){
    int ju = 0;
    printf("Quelle taille :");
    scanf("%d", &ju);
    int tabn[ju][ju];
    int nb;
    int i;
    int j;
    int k;
    int a;
    a = ju * ju;
    i = 0;
    j = 0;
    k = 0;
    nb = (ju / 2);
    if (ju == 1)
    {
        tabn[0][0] = 1;
    }
    else
    {
        for (k = 0; k < nb; k++)
        {
            i = k;
            for (j = k; j < ju - k; j++)
            {
                tabn[i][j] = a;
                a--;
            }
            j = ju - k - 1;
            for (i = k + 1; i < ju - k; i++)
            {
                tabn[i][j] = a;
                a--;
            }
            i = ju - k - 1;
            for (j = ju - 2 - k; j > -1 + k; j--)
            {
                tabn[i][j] = a;
                a--;
            }
            j = k;
            for (i = ju - 2 - k; i > k; i--)
            {
                tabn[i][j] = a;
                a--;
            }
            if (a == 1)
            {
                tabn[i + 1][j + 1] = 1;
            }
            //if (!ju%2==0 && k == (nb-1)){float test = ((ju/2)+1) ;tabn[test][test]=1;}
            //float test = ((ju/2)+1) ;
            //printf("Valeur test : %f\n", test);
            //tabn[(int)test][(int)test]=1;
        }
    }
    //printf("Valeur de a : %d\n",a);

    for (int a = 0; a < ju; a++)
    {
        for (int b = 0; b < ju; b++)
        {
            printf("[%d]", tabn[a][b]);
        }
        printf("\n");
    }
}



int main()
{
    struct Test T1 = {125, 'a'};
    char Tab[3] = "ABC";
    int *val;
    val = &T1.t;
    float f = 3.01514000000;
    int Tab2[5][5];
    int t = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            Tab2[i][j] = 1;
            t++;
        }
    }
    for (int a = 0; a < 5; a++)
    {
        for (int b = 0; b < 5; b++)
        {
            printf("[%d]", Tab2[a][b]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Hello world\n");
    printf("int = %d , char = %c\n", T1.t, T1.x);
    AfficheTab(Tab);
    Calcule(val);
    printf("Valeur : %c\n", T1.t);
    printf("Tableau : %s\ns", Tab);
    printf("Valeur a trois decimal : %3f\n", f);
    printf("Valeur scientifique : %e\n", f);
    printf("Valeur ameliorer : %g\n", f);
    printf("Pointeur : %p\n", &val);
    printf("Adresse 1 : %p\n", val);
    printf("Adresse 2 : %p", &T1.t);
    //Tabescargot();
    return 0;
}