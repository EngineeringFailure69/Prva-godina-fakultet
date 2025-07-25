#include <stdio.h>
void main()
{
    int a[10][10], i, j, n, mini, minj, maxi, maxj, pom;
    printf("Unesite dimenziju matrice (nxn): ");
    scanf("%d", &n);
    printf("Unosite elemente matrice:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    maxi = 0;
    maxj = 0;
    mini = n - 1;
    minj = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
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
    for (i = 0; i < n; i++)
    {
        pom = a[mini][i];
        a[mini][i] = a[i][maxj];
        a[i][maxj] = pom;
    }
    printf("Matrica nakon zamene:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}