#include <stdio.h>
int sumiraj(int niz[], int n)
{
    int i, suma = 0;
    for (i = 0; i < n; i++)
    {
        suma = suma + niz[i];
    }
    return suma;
}
void main()
{
    FILE *f;
    int a[100][100], niz[100], i, j, n, k = 0, p = 0, suma;
    f = fopen("matrica.txt", "r");
    fscanf(f, "%d", &n);
    /*printf("Unesite dimenziju matrice (nxn): ");
    scanf("%d", &n);
    printf("Unesite matricu:\n");*/
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            fscanf(f, "%d", &a[i][j]);
        }
    }
    fclose(f);
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            niz[j] = a[j][i];
            a[i][n] = sumiraj(a[i], n);
            a[n][i] = sumiraj(niz, n);
        }
    }
    printf("Matrica posle obrade:\n");
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}