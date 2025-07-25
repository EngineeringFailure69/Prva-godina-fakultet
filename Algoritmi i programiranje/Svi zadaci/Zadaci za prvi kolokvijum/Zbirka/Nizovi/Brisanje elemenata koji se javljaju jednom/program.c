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
    i = 0;
    while (i < n)
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
            for (j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
        }
        else
        {
            i++;
        }
    }
    printf("Niz nakon izbacivanja elemenata: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}