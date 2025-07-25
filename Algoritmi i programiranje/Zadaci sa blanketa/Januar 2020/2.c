#include <stdio.h>
void main()
{
    float a[10];
    int n, i, j;
    float prosek = 0, suma = 0;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        suma = suma + a[i];
    }
    prosek = suma / n;
    printf("Prosek je: %.2f\n", prosek);
    for (i = 0; i < n; i++)
    {
        a[i] = a[i] - prosek;
    }
    printf("Niz nakon transformacije: ");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", a[i]);
    }
}