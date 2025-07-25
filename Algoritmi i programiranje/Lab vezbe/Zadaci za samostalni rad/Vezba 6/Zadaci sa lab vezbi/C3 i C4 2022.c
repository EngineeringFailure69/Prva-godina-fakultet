// Sortiranje recenica u opadajuci redosled po broju karaktera p
#include "stdio.h"

int main()

{
    char str1[50], str2[50];
    char novi_string[100];
    int n1 = 0, n2 = 0;
    int br1 = 0, br2 = 0;
    int i = 0;

    fgets(str1, 50, stdin);
    fgets(str2, 50, stdin);

    for (i = 0; i < 50; i++)
    {
        if (str1[i] == 'p')
            br1++;

        if (str2[i] == 'p')
            br2++;
    }

    if (br1 > br2)
    {
        printf("1. %s\n2. %s", str1, str2);
    }
    else
    {
        printf("1. %s\n2. %s", str2, str1);
    }
    return 0;
}