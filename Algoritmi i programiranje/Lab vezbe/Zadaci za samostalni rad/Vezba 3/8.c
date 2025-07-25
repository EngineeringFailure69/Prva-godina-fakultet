#include <stdio.h>
void main()
{
    int a[10], n, m, x, i, j, k, l, pom;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Niz pre umetanja elemenata: ");
    for (k = 0; k < n; k++)
    {
        for (l = 0; l < n - k - 1; l++)
        {
            if (a[l + 1] > a[l])
            {
                pom = a[l];
                a[l] = a[l + 1];
                a[l + 1] = pom;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Unesite broj novih elemenata koje zelite da umetnete u niz: ");
    scanf("%d", &m);
    for (j = 0; j < m; j++)
    {
        printf("Unesite element koji zelite da umetnete: ");
        scanf("%d", &x);
        for (i = 0; i < n + 1; i++)
        {
            if (a[i] != a[j])
            {
                a[n] = x;
                n++;
                printf("Niz posle umetanja: ");
                for (k = 0; k < n; k++)
                {
                    for (l = 0; l < n - k - 1; l++)
                    {
                        if (a[l + 1] > a[l])
                        {
                            pom = a[l];
                            a[l] = a[l + 1];
                            a[l + 1] = pom;
                        }
                    }
                }
                for (i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
            else
            {
                printf("Niz posle umetanja: ");
                for (k = 0; k < n; k++)
                {
                    for (l = 0; l < n - k - 1; l++)
                    {
                        if (a[l + 1] > a[l])
                        {
                            pom = a[l];
                            a[l] = a[l + 1];
                            a[l + 1] = pom;
                        }
                    }
                }
                for (i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
        }
    }
}