#include <stdio.h>
#include <string.h>
void main()
{
    char s1[100], s2[100], l[100], pom[25];
    printf("Unesite prvo prezime: ");
    gets(s1);
    printf("Unesite drugo prezime: ");
    gets(s2);
    if (strcmp(s1, s2) > 0)
    {
        strcpy(pom, s1);
        strcpy(s1, s2);
        strcpy(s2, pom);
    }
    strcpy(l, "1. ");
    strcat(l, s1);
    strcat(l, "\n");
    strcat(l, "2. ");
    strcat(l, s2);
    puts(l);
}