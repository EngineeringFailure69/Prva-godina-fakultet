#include <stdio.h>
void main()
{
    int a[10], n, i, max, imax;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            imax = i;
        }
    }
    printf("Indeks maksimalnog elemnta niza je: %d\n", imax);
}