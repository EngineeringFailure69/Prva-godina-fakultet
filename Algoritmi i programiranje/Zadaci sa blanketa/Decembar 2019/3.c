#include <stdio.h>
void main()
{
    char string[500];
    int i, j, broj = 0, duzina = 0;
    float procenat;
    printf("Unesite tekst ne duzi od 500 karaktera:\n");
    gets(string);
    i = 0;
    while (string[i] != '\0')
    {
        duzina++;
        i++;
    }
    i = 0;
    while (string[i] != '\0')
    {
        if (string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U')
        {
            broj++;
        }
        i++;
    }
    procenat = (float)broj / duzina * 100.0;
    printf("Procenat samoglasnika u tekstu (a, e, i, o, u) je: %.2f\n", procenat);
}