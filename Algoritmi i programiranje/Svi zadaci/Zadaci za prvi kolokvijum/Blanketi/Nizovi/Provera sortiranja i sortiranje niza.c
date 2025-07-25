#include <stdio.h>
void main()
{
    int a[10], i, j, pom, n, br1, br2, br3;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    br1 = 0;
    br2 = 0;
    br3 = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1] && a[i] < a[i - 1])
        {
            br1 = 1;
            br2 = 0;
            br3 = 0;
        }
        else if (a[i] < a[i + 1] && a[i] > a[i - 1])
        {
            br1 = 0;
            br2 = 1;
            br3 = 0;
        }
        else
        {
            br1 = 0;
            br2 = 0;
            br3 = 1;
        }
    }
    if (br1 == 1 && br2 == 0 && br3 == 0)
    {
        printf("Niz je sortiran u opadajuci redosled\n");
    }
    if (br2 == 1 && br1 == 0 && br3 == 0)
    {
        printf("Niz je sotriran u rastuci redosled\n");
    }
    if (br2 == 0 && br1 == 0 && br3 == 1)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    pom = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = pom;
                }
            }
        }
        printf("Niz sortiran u rastuci redosled: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}