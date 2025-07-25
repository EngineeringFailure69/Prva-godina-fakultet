#include <stdio.h>
#include <string.h>
void main()
{
    char string[100][100], pom[100];
    int i, n, j;
    printf("Unesite broj stringova: ");
    scanf("%d", &n);
    printf("Unesite stringove: ");
    for (i = 0; i < n; i++)
    {
        scanf(" %[^\n]", &string[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strlen(string[i]) < strlen(string[j]))
            {
                strcpy(pom, string[i]);
                strcpy(string[i], string[j]);
                strcpy(string[j], pom);
            }
        }
    }
    printf("Niz nakon sortiranja: ");
    for (i = 0; i < n; i++)
    {
        printf("%s, ", string[i]);
    }
    printf("\n");
}