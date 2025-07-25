// Suma poslednje kolone matrice ide na mesto elemenata prve vrste matrice
#include <stdio.h>
void main()
{
    int a[10][10], i, j, n, suma = 0, b;
    printf("Unesite dimenziju matrice nxn: ");
    scanf("%d", &n);
    printf("Unesite elemente matrice:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (j = n - 1; j < n; j++)
    {
        for (b = 0; b < n; b++)
        {
            suma = suma + a[b][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        a[0][i] = suma;
    }
    printf("Matrica nakon zamene:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
}