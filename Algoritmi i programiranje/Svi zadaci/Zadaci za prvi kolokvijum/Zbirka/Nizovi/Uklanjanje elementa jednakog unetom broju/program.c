#include <stdio.h>
void main()
{
    int a[10], i, j, n, k, x, pom, l;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Niz nakon sortiranja u opadajuci redosled: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                pom = a[j];
                a[j] = a[j + 1];
                a[j + 1] = pom;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    printf("Unesite broj brisanja: ");
    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        printf("Unesite element koji zelite da izbrisete: ");
        scanf("%d", &x);
        for (j = 0; j < n - 1; j++)
        {
            if (x == a[j])
            {
                for (l = j; l < n - 1; l++)
                {
                    a[l] = a[l + 1];
                    // n--;
                }
                n--;
            }
            // k--;
        }
        printf("Niz posle brisanja: ");
        for (l = 0; l < n; l++)
        {
            printf("%d", a[l]);
        }
        printf("\n");
    }
}