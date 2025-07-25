#include <stdio.h>
void main()
{
    int a[10], i, n, pom;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        pom = 0;
        while (a[i] > 0)
        {
            pom = pom * 10 + a[i] % 10;
            a[i] = a[i] / 10;
        }
        a[i] = pom;
    }
    printf("Niz nakon zamene elemenata odrazima u ogledalu: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}