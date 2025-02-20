#include<stdio.h>
#include<string.h>
void main(){
int k, i, j, brojac=0, duzina, p;
char string[100];
printf("Unesite recenicu: ");
gets(string);
printf("Unesite k: ");
scanf("%d", &k);
duzina=strlen(string);
for(i=0;i<duzina-1;i++){
j=i+1;
brojac=1;
while(string[j]!='\0'){
if(string[i]==string[j]){
brojac++;	
}
j++;
}
if(brojac==k){
printf("%c\n", string[i]);
}
}
}
