#include <stdio.h>
void main()
{
    int n, a[10];
    int min = 65536;
    int minnum;
    int i, ct = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    minnum = a[0];
    for (i = 1; i <= n - 1; i++)
    {
        if (a[i] == a[i - 1])
        {
            ct++;
        }
        else
        {
            if (ct < min)
            {
                min = ct;
                ct = 1;
                minnum = a[i - 1];
            }
        }
    }
    if (ct < min)
    {
        min = ct;
        ct = 1;
        minnum = a[i - 1];
    }
    printf("%d", minnum);
    printf("\n");
}