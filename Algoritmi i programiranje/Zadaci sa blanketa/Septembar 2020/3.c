#include<stdio.h>
#include<string.h>
void rotiraj(char string[], int k){
int n, i, j, pom;
n=strlen(string);
for(i=0;i<k;i++){
pom=string[n-1];
for(j=n-1;j>0;j--){
string[j]=string[j-1];
}
string[0]=pom;
}
}
void main(){
char prvi[100], drugi[100], pom[100];
int i, j, n, k, broj_rotiranja;
printf("Unesite prvi string: ");
gets(prvi);
printf("Unesite drugi string: ");
gets(drugi);
broj_rotiranja=-1;
strcpy(pom, prvi);
if(strlen(prvi)==strlen(drugi)){
n=strlen(prvi);
for(i=0;i<n;i++){
strcpy(prvi, pom);
rotiraj(prvi, i);
if(strcmp(prvi, drugi)==0){
broj_rotiranja=i;
}
}
}
printf("Broj rotiranja je: %d\n", broj_rotiranja);
if(broj_rotiranja!=-1){
if(broj_rotiranja<n/2.0){
printf("%s ", "desno");	
}
else{
printf("%s", "levo");
}
}
printf("\n");
}