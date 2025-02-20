#include<stdio.h>
void main(){
int f1=1,f2=1,f,n,i;
printf("Unesite n: ");
scanf("%d", &n);
printf("Clanovi niza su: ");
for(i=3;i<=n;i++){
f=f1+f2;
f1=f2;
f2=f;
printf("%d ", f);
}
printf("\n");
printf("N-ti clan niza je: %d", f);
printf("\n");
}