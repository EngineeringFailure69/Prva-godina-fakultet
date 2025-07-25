#include <stdio.h>
int InverznaISuma(int *broj)
{
    int pom = 0, d, suma = 0, j, broj1;
    broj1 = *broj;
    j = broj1 % 10;
    broj1 = broj1 / 10;
    d = broj1;
    suma = j + d;
    while (*broj > 0)
    {
        pom = pom * 10 + *broj % 10;
        *broj = *broj / 10;
    }
    *broj = pom;
    return suma;
}
void main()
{
    int a[100], i, n, suma = 0;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        suma = suma + InverznaISuma(&a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Suma cifara je: %d\n", suma);
}