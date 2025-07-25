#include <stdio.h>
#include <string.h>
int obrisiString(char string[], char rec[])
{
    int i, j, n, d, p, k, pozicija = -1;
    n = strlen(string);
    d = strlen(rec);
    i = 0;
    j = 0;
    while (i < n)
    {
        if (string[i] == rec[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
        if (j == d)
        {
            for (p = 1; p <= d; p++)
            {
                for (k = i - d + 1; k < n; k++)
                {
                    string[k] = string[k + 1];
                    pozicija = k;
                }
                n--;
            }
            j = 0;
        }
        else
        {
            i++;
        }
    }
    return pozicija;
}
void main()
{
    char string[100], rec[100];
    int pozicija;
    printf("Unesite recenicu: ");
    gets(string);
    printf("Unesite rec koju brisemo: ");
    gets(rec);
    do
    {
        pozicija = obrisiString(string, rec);
    } while (pozicija != -1);
    printf("Recenica nakon brisanja: %s\n", string);
}