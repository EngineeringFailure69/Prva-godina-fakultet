#include <stdio.h>
void main()
{
    int a[10][10], i, j, n;
    printf("Unesite dimenzije matrice (nxn): ");
    scanf("%d", &n);
    printf("Unesite matricu:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Trazeni elementi su: ");
    for (i = n - 1; i >= 1; i--)
    {
        printf("%d ", a[i][0]);
    }
    for (i = 0; i < n / 2 + 1; i++)
    {
        printf("%d ", a[i][i]);
    }
    for (i = n / 2 - 1; i >= 0; i--)
    {
        printf("%d ", a[i][n - 1 - i]);
    }
    for (i = 1; i < n; i++)
    {
        printf("%d ", a[i][n - 1]);
    }
}