#include "stdio.h"

int main()
{
    int nizA[100];
    int n, i, j;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nizA[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (nizA[i] % 3 == 2)
        {
            for (j = n; j >= i + 1; j--)
            {
                nizA[j] = nizA[j - 1];
            }
            nizA[i + 1] = 0;
            n++;
            i++;
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n", nizA[i]);
    }

    return 0;
}