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
    printf("Matrica pre zamene je:\n ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    maxi = 0;
    maxj = 0;
    mini = 0;
    minj = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] > a[maxi][maxj])
            {
                maxi = i;
                maxj = j;
            }
            else if (a[i][j] < a[mini][minj])
            {
                mini = i;
                minj = j;
            }
        }
    }
    for (j = 0; j < m; j++)
    {
        pom = a[mini][j];
        a[mini][j] = a[maxi][j];
        a[maxi][j] = pom;
    }
    printf("Matrica nakon zamene je:\n ");
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