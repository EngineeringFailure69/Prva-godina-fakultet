#include <stdio.h>
#include <string.h>
void main()
{
    char recenica[100];
    int i, imaxReci = 0, duzinaMaxReci = 0, iReci = 0, krajReci = 0, pocetakReci = 0, duzinaReci;
    printf("Unesite recenicu: ");
    gets(recenica);
    i = 0;
    while (i < strlen(recenica))
    {
        while (recenica[i] == ' ' && i < strlen(recenica))
        {
            i++;
        }
        pocetakReci = i;
        while (recenica[i] != ' ' && i < strlen(recenica))
        {
            i++;
        }
        krajReci = i - 1;
        iReci++;
        duzinaReci = krajReci - pocetakReci + 1;
        if (duzinaReci > duzinaMaxReci)
        {
            duzinaMaxReci = duzinaReci;
            imaxReci = iReci;
        }
    }
    printf("Najduza rec je rec broj %d, a njena duzina je %d\n", imaxReci, duzinaMaxReci);
}