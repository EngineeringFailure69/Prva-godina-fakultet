#include <stdio.h>
void main()
{
    int a[100][100], i, j, n, k, x, b[100], pom;
    printf("Unesite dimenziju matrice (nxn): ");
    scanf("%d", &n);
    printf("Unesite matricu:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (j = 0; j < n; j = j + 2)
    {
        x = 0;
        for (k = 0; k < n; k = k + 2)
        {
            b[x] = a[k][j];
            x++;
        }
        for (i = 0; i < x - 1; i++)
        {
            for (k = i + 1; k < n; k++)
            {
                if (b[i] <= b[k])
                {
                    pom = b[i];
                    b[i] = b[k];
                    b[k] = pom;
                }
            }
        }
        x = 0;
        for (k = 0; k < n; k = k + 2)
        {
            a[k][j] = b[x];
            x++;
        }
    }
    printf("Matrica:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}