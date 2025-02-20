#include<stdio.h>
#include<string.h>
void main(){
int i=0;
char s[100];
printf("Unesite string: ");
gets(s);
i=strlen(s);
printf("Duzina stringa je: %d\n", i);
}