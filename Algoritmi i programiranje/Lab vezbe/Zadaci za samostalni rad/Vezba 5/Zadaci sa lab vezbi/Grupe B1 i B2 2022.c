// Konvertovanje negativnih elemenata niza u pozitivne i njihovo sumiranje u okviru funkcije, i vracanje sume kao rezultata
#include <stdio.h>
int sumiraj(int a[100], int n)
{
    int i, suma = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            a[i] = -a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        suma = suma + a[i];
    }
    return suma;
}
void main()
{
    int a[100], i, n, suma;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    suma = sumiraj(a, n);
    printf("Suma je: %d\n", suma);
}