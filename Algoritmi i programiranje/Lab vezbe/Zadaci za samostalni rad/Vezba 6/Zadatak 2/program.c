#include <stdio.h>
#include <string.h>
void main()
{
    FILE *f1;
    char recenica[100], reci[100][100];
    int i, j, cnt;
    f1 = fopen("reci.txt", "w");
    printf("Unesite recenicu: ");
    gets(recenica);
    j = 0;
    cnt = 0;
    for (i = 0; i < strlen(recenica); i++)
    {
        if (recenica[i] == ' ' || recenica[i] == '\0')
        {
            reci[cnt][j] = '\0';
            j = 0;
            cnt++;
        }
        else
        {
            reci[cnt][j] = recenica[i];
            j++;
        }
    }
    for (i = 0; i < cnt; i++)
    {
        fprintf(f1, "%s\n", reci[i]);
    }
    fclose(f1);
    printf("Uspesno upisano u fajl\n");
}