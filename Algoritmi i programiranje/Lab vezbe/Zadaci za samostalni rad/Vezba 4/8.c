#include <stdio.h>
void main()
{
    int a[10][10], i, j, n, m, pom, k, l;
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
    printf("Matrica je:\n ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Unesite vrstu i kolonu kojoj menjamo mesta: ");
    scanf("%d%d", &l, &k);
    for (i = 0; i < n; i++)
    {
        pom = a[i][k - 1];
        a[i][k - 1] = a[l - 1][i];
        a[l - 1][i] = pom;
    }
    printf("Matrica posle zamene mesta vrste i kolone je:\n ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}