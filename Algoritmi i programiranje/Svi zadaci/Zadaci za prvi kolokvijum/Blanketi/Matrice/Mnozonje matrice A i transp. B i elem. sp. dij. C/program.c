#include <stdio.h>
void main()
{
    int a[100][100], n, i, j, b[100][100], m, c[100][100], d[100][100], k;
    printf("Unesite dimenzije matrica (nxm): ");
    scanf("%d%d", &n, &m);
    printf("Unesite matricu A:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Unesite matricu B:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            d[j][i] = b[i][j];
        }
    }
    printf("\n");
    printf("Transponovana matrica matrice B je:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < m; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * d[k][j];
            }
        }
    }
    printf("\n");
    printf("Matrica C nakon mnozenja matrice A i transponovane matreice B:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Elementi sporedne dijagonale matrice C su: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i + j == n - 1)
            {
                printf("%d ", c[i][j]);
            }
        }
    }
    printf("\n");
}