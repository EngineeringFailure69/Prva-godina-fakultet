#include <stdio.h>
void main()
{
    char string1[100], string2[100];
    int duzina1 = 0, duzina2 = 0, i, j, anagrami = 0, duzina, nadjeni = 0;
    printf("Unesite prvi string: ");
    gets(string1);
    printf("Unesite drugi string: ");
    gets(string2);
    i = 0;
    while (string1[i] != '\0')
    {
        duzina1++;
        i++;
    }
    i = 0;
    while (string2[i] != '\0')
    {
        duzina2++;
        i++;
    }
    if (duzina1 == duzina2)
    {
        duzina = duzina1;
        for (i = 0; i < duzina; i++)
        {
            nadjeni = 0;
            for (j = 0; j < duzina; j++)
            {
                if (string1[i] == string2[j])
                {
                    nadjeni = 1;
                }
            }
            if (nadjeni == 1)
            {
                anagrami = 1;
            }
            else if (nadjeni == 0)
            {
                anagrami = 0;
            }
        }
        if (anagrami == 1)
        {
            printf("Stringovi su anagrami\n");
        }
        else if (anagrami == 0)
        {
            printf("Stringovi nisu anagrami\n");
        }
    }
    else
    {
        printf("Stringovi nisu anagrami jer su razlicitih duzina!\n");
    }
}