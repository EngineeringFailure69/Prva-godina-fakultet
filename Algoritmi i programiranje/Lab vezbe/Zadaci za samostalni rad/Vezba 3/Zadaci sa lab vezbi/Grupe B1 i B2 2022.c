// Prikazati element koji se javlja najveci broj puta
#include <stdio.h>
void main()
{
    int n, i, j, p, imax, max, a[10];
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = 0;
    imax = 0;
    for (i = 0; i < n; i++)
    {
        p = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                p++;
            }
        }
        if (p > max)
        {
            max = p;
            imax = i;
        }
    }
    printf("Element koji se javlja najveci broj puta je: %d\n", a[imax]);
}