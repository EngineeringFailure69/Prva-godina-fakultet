#include<stdio.h>
void ReciSaTriSlovaA(char* recenica){
int i, j, brojslova=0, pocetakreci, n;
i=0;
while(recenica[i]!='.'){
brojslova=0;
pocetakreci=i;
while(recenica[i]!=' ' && recenica[i]!='.'){
if(recenica[i]=='a' || recenica[i]=='A'){
brojslova++;	
}
i++;
}
if(brojslova==3){
for(j=pocetakreci;j<i;j++){
printf("%c", recenica[j]);
}
printf("\n");
}
i++;
}
}
void main(){
char recenica[100];
printf("Unesite recenicu: ");
gets(recenica);
ReciSaTriSlovaA(recenica);
}