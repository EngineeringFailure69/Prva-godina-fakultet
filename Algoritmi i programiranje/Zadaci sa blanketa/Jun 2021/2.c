#include <stdio.h>
void main()
{
    int a[100], i, j, n, pom;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Niz nakon uredjenja: ");
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = i; j < n; j++)
            {
                if (a[j] > a[i])
                {
                    pom = a[i];
                    a[i] = a[j];
                    a[j] = pom;
                }
            }
        }
        if (i % 2 == 1)
        {
            for (j = i; j < n; j++)
            {
                if (a[j] < a[i])
                {
                    pom = a[i];
                    a[i] = a[j];
                    a[j] = pom;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}