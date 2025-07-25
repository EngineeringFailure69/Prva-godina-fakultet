#include <stdio.h>
void main()
{
    int a[100], i, j, n, br;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        br = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                br++;
            }
        }
        if (br == 1)
        {
            for (j = n; j > i + 1; j--)
            {
                a[j] = a[j - 1];
            }
            a[i + 1] = a[i];
            n++;
        }
    }
    printf("Niz nakon dupliranja elemenata koji se javljaju jednom: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}