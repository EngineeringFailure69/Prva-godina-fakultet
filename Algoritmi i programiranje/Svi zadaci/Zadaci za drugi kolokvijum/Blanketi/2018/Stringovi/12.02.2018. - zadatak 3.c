#include<stdio.h>
void main(){
char recenica[100];
int velikaslova=0, malaslova=0, interznakovi=0, ostaliznakovi=0, u=1, i;
while(u==1){
velikaslova=0; 
malaslova=0; 
interznakovi=0; 
ostaliznakovi=0;
i=0;
printf("Unesite recenicu: ");
gets(recenica);
while(recenica[i]!='\0'){
if('a'<=recenica[i] && recenica[i]<='z'){
malaslova++;	
}
else if('A'<=recenica[i] && recenica[i]<='Z'){
velikaslova++;
}
else if(recenica[i]=='.' || recenica[i]==',' || recenica[i]=='!' || recenica[i]=='?' || recenica[i]==':' || recenica[i]==';'){
interznakovi++;
}
else{
ostaliznakovi++;
}
i++;
}
printf("Broj malih slova za unetu recenicu je: %d\n Broj velikih slova za unetu recenicu je: %d\n Broj interpunkcijskih znakova za unetu recenicu je: %d\n Broj ostalih znakova u unetoj recenici je: %d\n", malaslova, velikaslova, interznakovi, ostaliznakovi);
if(velikaslova>malaslova){
u=0;
}
}
}