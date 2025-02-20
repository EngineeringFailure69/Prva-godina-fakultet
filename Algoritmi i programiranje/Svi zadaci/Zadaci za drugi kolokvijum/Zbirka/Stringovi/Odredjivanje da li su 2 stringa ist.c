#include<stdio.h>
#include<string.h>
void main(){
char a[100], b[100];
int i, n1, n2;
printf("Unesite ime ulice u kojoj zivi osoba 1: ");
gets(a);
printf("Unesite ime ulice u kojoj zivi osoba 2: ");
gets(b);
n1=strlen(a);
n2=strlen(b);
if(n1==n2){
i=0;
while(a[i]!='\0' && a[i]==b[i]){
i++;
}
if(i==n1){
printf("Osobe zive u istoj ulici\n");
}
else{
printf("Osobe ne zive u istoj ulici\n");
}
}
else{
printf("Osobe ne zive u istoj ulici\n");
}
}