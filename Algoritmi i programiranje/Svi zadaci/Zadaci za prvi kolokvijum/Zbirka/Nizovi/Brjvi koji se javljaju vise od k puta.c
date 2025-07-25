#include <stdio.h>
void main()
{
    int a[20], i, j, br = 0, k, n;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Unesite broj na osnovu kojeg uporedjujemo broj ponavljanja: ");
    scanf("%d", &k);
    printf("Brojevi koji se javljaju vise od k puta su: ");
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
        if (br > k)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}