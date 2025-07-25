#include <stdio.h>
void main()
{
    int a, b, c, s, k, i, pom;
    printf("Unesite promenljive a, b i c respektivno: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Unesite broj rotacija: ");
    scanf("%d", &k);
    printf("Unesite broj u zavisnosti od toga na koju stranu zelite da rotirate (-1-rotacija u levo, 1 rotacija u desno, razlicito od -1 ili 1 -nema rotacije): ");
    scanf("%d", &s);
    if (s == -1)
    {
        for (i = 0; i < k; i++)
        {
            pom = a;
            a = b;
            b = c;
            c = pom;
        }
        printf("Brojevi nakon rotacije u levo: %d, %d, %d", a, b, c);
    }
    else if (s == 1)
    {
        for (i = 0; i < k; i++)
        {
            pom = c;
            c = b;
            b = a;
            a = pom;
        }
        printf("Brojevi nakon roatcije u desno: %d, %d, %d", a, b, c);
    }
    else
    {
        printf("Nema roatcije");
    }
    printf("\n");
}