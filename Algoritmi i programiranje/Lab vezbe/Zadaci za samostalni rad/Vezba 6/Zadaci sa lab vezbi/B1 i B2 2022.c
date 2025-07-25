//Zamena svih karaktera a karakterom koji zadaje korisnik 
#include "stdio.h"

int main()
{
    char s[30];
    char x;
    int n,i;
	printf("Unesite recenicu: ");
    fgets(s, 30,stdin);
	printf("Unesite karakter kojim menjamo: ");
    scanf("%c", &x);
    n = 0;
    while (s[n] != '\0') {
        n++;
    }
    for (i = 0; i < n; i++) {
        if (s[i] == 'a') {
            s[i] = x;
        }
    }
	printf("Recenica nakon zamene: ");
    puts(s);
    return 0;
}