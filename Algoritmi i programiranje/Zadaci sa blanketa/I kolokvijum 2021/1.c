#include <stdio.h>
void main()
{
    int u = 1, br2 = 0, br, n, c;
    while (u == 1)
    {
        br2 = 1;
        br = 0;
        printf("Unesite broj: ");
        scanf("%d", &n);
        printf("Magicne cifra/e ovog broja su/je:");
        while (n > 0)
        {
            c = n % 10;
            n = n / 10;
            if (c == br2)
            {
                printf("%d ", c);
                br = 1;
            }
            br2++;
        }
        if (br == 0)
        {
            u = 0;
        }
        printf("\n");
    }
}