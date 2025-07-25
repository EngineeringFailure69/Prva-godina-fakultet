#include <stdio.h>
void main()
{
    int a[10][10], i, j, n, m, pom, b[10][10], c[10][10], temp, d[10][10];
    printf("Unesite velicinu matrica: ");
    scanf("%d", &n);
    printf("Unesite elemente matrice B:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Unesite elemente matrice C:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &c[i][j]);
        }
    }
    printf("Unesite elemente matrice D:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &d[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = 0;
            for (pom = 0; pom < n; pom++)
            {
                a[i][j] = a[i][j] + b[i][pom] * c[pom][j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = a[i][j] + d[i][j];
        }
    }
    printf("\n");
    printf("Matrica A posle racunanja A=B*C+D:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}