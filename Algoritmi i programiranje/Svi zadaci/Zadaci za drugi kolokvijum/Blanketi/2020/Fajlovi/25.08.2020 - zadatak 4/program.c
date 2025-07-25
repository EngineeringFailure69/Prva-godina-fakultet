#include <stdio.h>
void main()
{
    FILE *f1, *f2, *f3;
    int a[100][100], b[100][100], c[100][100], bt[100][100], i, j, n, m, k;
    f1 = fopen("dimenzije.txt", "r");
    fscanf(f1, "%d%d", &n, &m);
    fclose(f1);
    f2 = fopen("matrice.txt", "r");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            fscanf(f2, "%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            fscanf(f2, "%d", &b[i][j]);
        }
    }
    fclose(f2);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            bt[j][i] = b[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < m; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * bt[k][j];
            }
        }
    }
    f3 = fopen("rezultat.txt", "w");
    for (i = 0; i < n; i++)
    {
        fprintf(f3, "%d ", c[i][n - i - 1]);
    }
    fclose(f3);
}