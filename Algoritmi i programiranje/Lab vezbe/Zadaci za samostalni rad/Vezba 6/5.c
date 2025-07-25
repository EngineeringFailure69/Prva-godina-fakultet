#include <stdio.h>
#include <string.h>
void main()
{
    char recenica[100], rec[100];
    int i, j, duzina1, duzina2, pom, brojac = 0, provera;
    printf("Unesite recenicu: ");
    gets(recenica);
    printf("Unesite rec koju trazite: ");
    scanf("%s", rec);
    duzina1 = strlen(recenica);
    duzina2 = strlen(rec);
    for (i = 0; i < duzina1; i++)
    {
        pom = i;
        for (j = 0; j < duzina2; j++)
        {
            if (recenica[i] == rec[j])
            {
                i++;
            }
        }
        provera = i - pom;
        if (provera == duzina2)
        {
            brojac++;
            i = pom;
        }
    }
    printf("Zadata rec se pojavljuje: %d puta\n", brojac);
}