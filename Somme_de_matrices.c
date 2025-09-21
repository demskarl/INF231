#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j;
    printf("Veuillez entrer le nombre de lignes des matrices :\n\t");
    scanf("%d", &m);
    printf("Veuillez entrer le nombre de colones des matrices :\n\t");
    scanf("%d", &n);
    float mat1[m][n], mat2[m][n], s[m][n];
    for (i = 0; i < m; i++)
    {
        printf("Premiere matrice - Veuillez entrer les elements de la ligne %d :\n", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%f", &mat1[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        printf("Deuxieme matrice - Veuillez entrer les elements de la ligne %d :\n", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%f", &mat2[i][j]);
        }
    }
    printf("La somme de ces matrices est : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%0.3f\t", s[i][j] = mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}