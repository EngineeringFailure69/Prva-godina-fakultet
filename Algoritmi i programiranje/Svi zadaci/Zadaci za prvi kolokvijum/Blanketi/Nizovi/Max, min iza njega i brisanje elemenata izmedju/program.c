#include <stdio.h>
void main()
{
    int a[100], i, j, n, N, imax = 0, imin = 0, u = 1, pomeraj;
    printf("Unesite cele brojeve, za prekid unesite nulu: ");
    i = 0;
    while (u == 1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            u = 0;
        }
        else
        {
            a[i] = n;
            i++;
        }
    }
    N = i;
    for (i = 0; i < N; i++)
    {
        if (a[i] > a[imax])
        {
            imax = i;
        }
    }
    if (imax < N - 1)
    {
        imin = imax + 1;
        for (i = imax + 1; i < N; i++)
        {
            if (a[i] < a[imin])
            {
                imin = i;
            }
        }
        pomeraj = imin - imax - 1;
        for (i = imin; i < N; i++)
        {
            a[i - pomeraj] = a[i];
        }
        N = N - pomeraj;
    }
    printf("Niz nakon operacije: ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
}