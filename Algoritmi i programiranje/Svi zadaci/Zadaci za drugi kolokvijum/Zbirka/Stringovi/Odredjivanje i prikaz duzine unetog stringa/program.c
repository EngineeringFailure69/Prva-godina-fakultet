#include <stdio.h>
void main()
{
    int i = 0;
    char s[100], c;
    printf("Unesite string ciju duzinu odredjujemo: ");
    gets(s);
    while (s[i] != '\0')
    {
        i++;
    }
    printf("Duzina stringa je: %d\n", i);
}