#include <stdio.h>
void main()
{
    FILE *f1;
    int i, j, n, a[100][100], min, mini = 0, max, maxi = 0, pom;
    f1 = fopen("matrica.txt", "r");
    fscanf(f1, "%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            fscanf(f1, "%d", &a[i][j]);
        }
    }
    min = a[mini][mini];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
                mini = i;
            }
        }
    }
    max = a[maxi][maxi];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                maxi = j;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        pom = a[mini][i];
        a[mini][i] = a[i][maxi];
        a[i][maxi] = pom;
    }
    printf("Matrica nakon zamene:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}