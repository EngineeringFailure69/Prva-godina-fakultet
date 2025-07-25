#include <stdio.h>
void MagicanCaroban(int *niz, int n)
{
    int i, zc, pom, magican = 0;
    for (i = 0; i < n; i++)
    {
        magican = 0;
        pom = niz[i];
        zc = pom % 10;
        if (zc == 0 || niz[i] % zc == 0)
        {
            niz[i] = 0;
            magican = 1;
        }
        else if (magican == 0 && niz[i] % 2 == 0 && i % 2 != 0)
        {
            niz[i] = 1;
        }
    }
}
void main()
{
    int a[100][100], i, j, n, b[100], p = 0, k = 0, c[100];
    printf("Unesite dimenziju matrice (nxn): ");
    scanf("%d", &n);
    printf("Unesite matricu: \n");
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
            if (i + j > n - 1)
            {
                b[k] = a[i][j];
                k++;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        c[p] = a[i][0];
        p++;
    }
    MagicanCaroban(b, k);
    MagicanCaroban(c, p);
    p = 0;
    k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i + j > n - 1)
            {
                a[i][j] = b[k];
                k++;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        a[i][0] = c[p];
        p++;
    }
    printf("Matrica nakon obrade: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}