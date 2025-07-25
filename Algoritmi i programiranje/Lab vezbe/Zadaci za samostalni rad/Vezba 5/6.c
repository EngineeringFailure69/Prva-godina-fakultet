#include <stdio.h>
void sortiranje(int n, int a[], int smer)
{
    int i, j, pom;
    if (smer == 1)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    pom = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = pom;
                }
            }
        }
    }
    else if (smer == 0)
    {
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
    }
}
void main()
{
    int a[100], n, i, smer;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Unesite smer sortiranja (1 je rastuci, 0 je opadajuci): ");
    scanf("%d", &smer);
    sortiranje(n, a, smer);
    printf("Niz nakon sortiranja: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}