#include <stdio.h>
void main()
{
    int a[10], n, m, i, j, x, y, pom;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemenete niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Unesite broj koliko elemenata zelite da umetnete u niz: ");
    scanf("%d", &m);
    for (j = 1; j <= m; j++)
    {
        pom = j;
        printf("Unesite indeks pozicije na koju zelite da umetnete novi element: ");
        scanf("%d", &y);
        printf("Unesite element koji zelite da unesete na poziciju koju ste odredili: ");
        scanf("%d", &x);
        printf("Niz posle %d. umetanja: ", pom);
        for (i = n; i >= y; i--)
        {
            a[i] = a[i - 1];
        }
        a[y] = x;
        n++;
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}