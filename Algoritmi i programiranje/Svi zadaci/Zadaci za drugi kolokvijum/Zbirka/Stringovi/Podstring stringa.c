#include <stdio.h>
#include <string.h>
void main()
{
    char string[100], podstring[100];
    int nadjen = 0, i = 0, j, poz;
    printf("Unesite string: ");
    gets(string);
    printf("Unesite podstring koji trazimo: ");
    gets(podstring);
    while (i < strlen(string) - strlen(podstring) && !nadjen)
    {
        j = 0;
        while (j < strlen(podstring) && string[i + j] == podstring[j])
        {
            j++;
        }
        if (j == strlen(podstring))
        {
            nadjen = 1;
            poz = i;
        }
        i++;
    }
    printf("Pozicija pojavljivanja je: %d\n", poz);
}