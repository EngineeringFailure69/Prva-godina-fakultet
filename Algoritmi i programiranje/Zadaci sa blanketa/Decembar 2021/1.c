#include <stdio.h>
void main()
{
    int u, n, trensuma = 0, zc, pc, broj;
    u = 1;
    while (u == 1)
    {
        printf("Unesite broj koji sumiramo: ");
        scanf("%d", &n);
        if (n != 0)
        {
            broj = n;
            zc = n % 10;
            // while(n>0){
            while (n >= 10)
            {
                n = n / 10;
            }
            pc = n;
            // printf("Cifra najvece tezine je: %d\n", pc);
            // printf("Cifra najmanje tezine je: %d\n", zc);
            if (pc > zc)
            {
                trensuma = trensuma + broj;
            }
            else if (pc < zc)
            {
                trensuma = trensuma - broj;
            }
            //}
        }
        else
        {
            printf("Uneli ste nulu!\n");
            u = 0;
        }
    }
    printf("Suma unetih brojeva je: %d\n", trensuma);
}