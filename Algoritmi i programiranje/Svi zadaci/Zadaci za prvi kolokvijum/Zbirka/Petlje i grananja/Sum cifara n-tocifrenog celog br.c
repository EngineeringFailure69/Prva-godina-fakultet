#include<stdio.h>
void main(){
int i=0, n, suma=0, c;
printf("Unesite pozitivan broj cije cifre sabiramo: ");
scanf("%d", &n);
while(n>0){
c=n%10;
suma=suma+c;
n=n/10;
i++;
}
if(i>5){
printf("Broj ima %d cifara, a njihova suma je: %d", i, suma);
}
else{
printf("Broj ima %d cifre, a njihova suma je: %d", i, suma);
printf("\n");
}
}