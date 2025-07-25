#include <stdio.h>
void main()
{
    int a[10][10], i, j, maxj, maxi, mini, minj, n, pom, m;
    printf("Unesite velicinu matrice (nxm): ");
    scanf("%d%d", &n, &m);
    printf("Unesite elemente matrice: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrica pre transformacije je:\n ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (j = 0; j < m / 2; j++)
    {
        for (i = 0; i < n; i++)
        {
            pom = a[i][j];
            a[i][j] = a[i][m - 1 - j];
            a[i][m - 1 - j] = pom;
        }
    }

    printf("Matrica nakon transformacije je:\n ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // printf("\n");
}