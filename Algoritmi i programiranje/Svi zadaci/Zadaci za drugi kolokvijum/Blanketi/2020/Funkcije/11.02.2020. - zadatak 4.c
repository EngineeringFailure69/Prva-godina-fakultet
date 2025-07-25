#include <stdio.h>
int minimax(int *niz, int s, int n)
{
    int i, minmax;
    minmax = niz[0];
    if (s == -1)
    {
        for (i = 1; i < n; i++)
        {
            if (minmax > niz[i])
            {
                minmax = niz[i];
            }
        }
    }
    else if (s == 1)
    {
        for (i = 1; i < n; i++)
        {
            if (minmax < niz[i])
            {
                minmax = niz[i];
            }
        }
    }
    return minmax;
}
void main()
{
    int a[100][100], i, j, n, najvecavrsta, najvecavrstai, najmanjakolona, najmanjakolonai, pom, b[100];
    printf("Unesite dimenziju matrice (nxn): ");
    scanf("%d", &n);
    printf("Unesite matricu: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    najvecavrsta = minimax(a[0], 1, n);
    for (i = 1; i < n; i++)
    {
        pom = minimax(a[i], 1, n);
        if (pom > najvecavrsta)
        {
            najvecavrsta = pom;
            najvecavrstai = i;
        }
    }
    for (i = 0; i < n; i++)
    {
        b[i] = a[i][0];
    }
    najmanjakolona = minimax(b, -1, n);
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[j] = a[j][i];
        }
        pom = minimax(b, -1, n);
        if (pom < najmanjakolona)
        {
            najmanjakolona = pom;
            najmanjakolonai = i;
        }
        else
        {
            najmanjakolonai = 0;
        }
    }
    printf("Uneta matrica je:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Indeks vrste sa najvecim elementom je: %d\n", najvecavrstai);
    printf("Indeks kolone sa najmanjim elementom je: %d\n", najmanjakolonai);
}