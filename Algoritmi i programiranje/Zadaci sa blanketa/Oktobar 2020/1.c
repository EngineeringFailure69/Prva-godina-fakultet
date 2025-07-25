#include <stdio.h>
void main()
{
    int suma = 0, u = 1, n, pc, zc, broj;
    while (u == 1)
    {
        printf("Unesite broj koji sumiramo: ");
        scanf("%d", &n);
        if (n >= 0)
        {
            broj = n;
            zc = n % 10;
            while (n >= 10)
            {
                n = n / 10;
            }
            pc = n;
            if (pc < zc)
            {
                suma = suma + broj;
            }
            else if (pc > zc)
            {
                u = 0;
            }
        }
        else
        {
            printf("Uneti broj mora biti pozitivan!\n");
            u = 0;
        }
    }
    printf("Suma n-to cifrenih celih pozitivnih brojeva je: %d\n", suma);
}