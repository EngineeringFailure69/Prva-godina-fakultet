#include <stdio.h>
void main()
{
    int a[100][100], n, i, j, rbrk, rbrv, mini, minj, maxi, maxj;
    printf("Unesite dimenzije matrica (nxn): ");
    scanf("%d", &n);
    printf("Unesite matricu:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    mini = 0;
    minj = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[mini][minj] > a[i][j])
            {
                a[mini][minj] = a[i][j];
                mini = i;
                minj = j;
            }
        }
    }
    printf("Najmanji element matrice je: %d, a indeks kolone u kojoj se on nalazi je: %d\n", a[mini][minj], minj);
    maxi = 0;
    maxj = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[maxi][maxj] < a[i][j])
            {
                a[maxi][maxj] = a[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }
    printf("Najveci element matrice je: %d, a indeks vrste u kojoj se on nalazi je: %d\n", a[maxi][maxj], maxi);
}