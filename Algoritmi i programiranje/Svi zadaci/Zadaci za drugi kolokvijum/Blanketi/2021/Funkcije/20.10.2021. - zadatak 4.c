#include <stdio.h>
void sortiraj(int *niz, int n)
{
    int i, pom, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (niz[j] > niz[j + 1])
            {
                pom = niz[j];
                niz[j] = niz[j + 1];
                niz[j + 1] = pom;
            }
        }
    }
}
void main()
{
    int a[100][100], i, j, n, b[100], k = 0;
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
    k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j)
            {
                b[k] = a[i][j];
                k++;
            }
        }
    }
    sortiraj(b, k);
    printf("Elementi ispod glavne dijagonale sortirani u rastuci redosled: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    k = 0;
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
    sortiraj(b, k);
    printf("Elementi ispod sporedne dijagonale sortirani u rastuci redosled: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
}