#include "stdio.h"
#include "math.h"
void main()
{
    int i, j, n, A[50], br;
    printf("Unseite duzinu niza\n");
    scanf("%d", &n);
    printf("Unesite elemente niza\n");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    i = 0;
    while (i < n)
    {
        br = 1;
        for (j = 2; j < sqrt(A[i]); j++)
        {
            if (A[i] % j == 0)
            {
                br = 0;
            }
        }
        if (br == 1)
        {
            for (j = i; j < n - 1; j++)
            {
                A[j] = A[j + 1];
            }
            n--;
        }
        else
        {
            i++;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}