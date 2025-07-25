#include <stdio.h>
void main()
{
    int k, n, a[10], i, j, prvi;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite za koliko mesta u levo pomeramo niz: ");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Niz pre pomeranja:\n ");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("Niz posle pomeranja:\n ");
    for (i = 0; i < k; i++)
    {
        prvi = a[0];
        for (j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1];
        }
        a[n - 1] = prvi;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
