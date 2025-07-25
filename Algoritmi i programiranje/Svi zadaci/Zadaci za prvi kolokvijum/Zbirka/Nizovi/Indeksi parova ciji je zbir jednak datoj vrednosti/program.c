#include <stdio.h>
void main()
{
    int a[20], i, j, m, n;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Unesite vrednost u odnosu na koju uporedjujemo zbir: ");
    scanf("%d", &m);
    printf("Parovi su: ");
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (a[i] + a[j] == m)
            {
                printf("(%d,%d)", i, j);
            }
        }
    }
    printf("\n");
}