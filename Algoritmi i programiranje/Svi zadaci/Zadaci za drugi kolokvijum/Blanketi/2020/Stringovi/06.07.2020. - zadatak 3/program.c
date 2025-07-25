#include <stdio.h>
#include <string.h>
void main()
{
    FILE *f1;
    char recenica[100];
    int i, maxDuzinaReci = 0, duzinaReci, pocMaxReci = 0, krajReci, pocetakReci = 0;
    f1 = fopen("fajl.txt", "r");
    fgets(recenica, 100, f1);
    i = 0;
    while (i < strlen(recenica))
    {
        pocetakReci = i;
        while (recenica[i] != ' ' && i < strlen(recenica))
        {
            i++;
        }
        krajReci = i - 1;
        duzinaReci = krajReci - pocetakReci + 1;
        if (duzinaReci > maxDuzinaReci)
        {
            maxDuzinaReci = duzinaReci;
            pocMaxReci = pocetakReci;
        }
        i++;
    }
    maxDuzinaReci++;
    for (i = pocMaxReci; i <= strlen(recenica) - maxDuzinaReci - 1; i++)
    {
        recenica[i] = recenica[i + maxDuzinaReci];
    }
    for (i = 0; i < strlen(recenica) - maxDuzinaReci; i++)
    {
        printf("%c", recenica[i]);
    }
    printf("\n");
    fclose(f1);
}