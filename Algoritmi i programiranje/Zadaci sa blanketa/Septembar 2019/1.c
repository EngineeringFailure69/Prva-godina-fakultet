#include<stdio.h>
void main(){
int u=1, maxsuma, n, prost,j, suma=0, i;
printf("Unesite maksimalnu sumu do koje sabiramo: ");
scanf("%d", &maxsuma);
while(u==1){
printf("Unesite broj: ");
scanf("%d", &n);
j=2;
prost=1;
while(j<n/2){
if(n%j==0){
prost=0;
printf("Uneti broj nije prost!\n");
}
j++;
}
if(prost==1){
suma=suma+n;
}
if(suma>maxsuma){
u=0;
}
}
printf("Suma prostih brojeva je: %d\n", suma);
}