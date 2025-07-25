#include <stdio.h>
void main()
{
    int a[100], n, i, j, pom, max, k;
    float prosek = 0, suma = 0;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        suma = suma + a[i];
    }
    prosek = suma / n;
    printf("prosek je: %.2f\n", prosek);
    i = 0;
    while (i < n)
    {
        if (a[i] > prosek)
        {
            for (j = n; j > i + 1; j--)
            {
                a[j] = a[j - 1];
            }
            a[i + 1] = a[i];
            i++;
            n++;
        }
        i++;
    }
    printf("Niz nakon obrade: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}