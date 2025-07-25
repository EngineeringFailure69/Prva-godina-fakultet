#include <stdio.h>
#include <string.h>
void main()
{
    int i, p, n, d;
    char S[50], P[50];
    gets(S);
    n = strlen(S);
    for (i = 0; i < n; i++)
    {
        if (S[i] == ' ')
        {
            p = i;
        }
    }
    d = 0;
    for (i = 0; i < n; i++)
    {
        P[d] = S[i + p + 1];
        d++;
    }
    strcat(P, S);
    for (i = 0; i < n; i++)
    {
        printf("%c", P[i]);
    }
}