#include <stdio.h>
void main()
{
    int a[10], i, j, n, br = 0, k;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        k = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                k++;
            }
        }
        if (k == 1)
        {
            br++;
        }
    }
    printf("Broj elemenata koji se javljaju samo jednom je: %d", br);
    printf("\n");
}