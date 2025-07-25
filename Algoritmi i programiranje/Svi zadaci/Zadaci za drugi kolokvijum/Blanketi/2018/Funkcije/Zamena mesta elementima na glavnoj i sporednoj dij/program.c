#include <stdio.h>
void zamena(int g[], int s[], int n)
{
    int i, pom;
    for (i = 0; i < n; i++)
    {
        pom = g[i];
        g[i] = s[i];
        s[i] = pom;
    }
}
void main()
{
    int a[100][100], g[100], s[100], i, j, n, k = 0, p = 0;
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
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                g[k] = a[i][j];
                k++;
            }
            if (i + j == n - 1)
            {
                s[p] = a[i][j];
                p++;
            }
        }
    }
    zamena(g, s, n);
    k = 0;
    p = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                a[i][j] = g[k];
                k++;
            }
            if (i + j == n - 1)
            {
                a[i][j] = s[p];
                p++;
            }
        }
    }
    printf("Matrica nakon zamene: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}