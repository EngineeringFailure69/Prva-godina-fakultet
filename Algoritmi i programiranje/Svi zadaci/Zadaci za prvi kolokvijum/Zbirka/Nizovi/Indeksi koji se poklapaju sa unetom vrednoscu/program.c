#include <stdio.h>
void main()
{
    int i, j, n, k, a[10], b[10];
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Unesite element na osnovu kog vrsimo poredjenje: ");
    scanf("%d", &k);
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            b[j] = i;
            j++;
        }
    }
    printf("Indeksi elemenata koji se poklapaju sa unetim elementom su: ");
    for (i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
}