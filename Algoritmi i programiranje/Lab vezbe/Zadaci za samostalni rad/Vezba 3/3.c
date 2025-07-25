#include <stdio.h>
void main()
{
    int a[10], n, i = 0, j, pom = 0, max;
    float prosek = 0, suma = 0;
    scanf("%d", &n);
    printf("Unesite vrednost do koje sabiramo: ");
    scanf("%d", &j);
    while (i < n && suma < j)
    {
        scanf("%d", &a[i]);
        suma = suma + a[i];
        i++;
        pom++;
    }
    printf("Uneto %d elemenata: ", i);
    for (i = 0; i < pom; i++)
    {
        printf("%d ", a[i]);
    }
    max = a[0];
    for (i = 0; i < pom; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    prosek = suma / i;
    printf("\n");
    printf("prosek je: %.2f\n", prosek);
    printf("suma je: %.2f\n", suma);
    printf("Maksimalni element niza je: %d\n", max);
}