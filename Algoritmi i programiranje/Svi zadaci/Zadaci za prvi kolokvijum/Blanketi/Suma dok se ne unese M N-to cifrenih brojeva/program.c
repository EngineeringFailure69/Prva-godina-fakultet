#include <stdio.h>
void main()
{
    int N, M, u = 1, n, zc, br1 = 0, br2 = 0, broj, suma = 0;
    printf("Unesite koliko brojeva zelite da proverimo: ");
    scanf("%d", &M);
    printf("Unesite koliko cifara zelite da ti brojevi imaju: ");
    scanf("%d", &N);
    printf("Unesite brojeve: ");
    while (u == 1)
    {
        scanf("%d", &n);
        broj = n;
        while (n > 0)
        {
            zc = n % 10;
            n = n / 10;
            br1++;
        }
        if (br1 == N)
        {
            br2++;
            br1 = 0;
        }
        else
        {
            br1 = 0;
        }
        if (br2 >= M)
        {
            u = 0;
        }
        // else{u=1;}
        suma = suma + broj;
    }
    printf("Suma je: %d\n", suma);
}