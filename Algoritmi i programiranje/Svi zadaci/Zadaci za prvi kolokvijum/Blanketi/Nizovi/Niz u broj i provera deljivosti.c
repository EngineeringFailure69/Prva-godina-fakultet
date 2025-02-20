#include<stdio.h>
void main(){
int broj1, a[10], i, j=0, b[10], n, zc, pc, pom, broj, broj2;
printf("Unesite broj elemenata niza: ");
scanf("%d", &n);
printf("Unesite elemente niza: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
//Pretvaranje niza u broj
broj1=0;
for(i=0;i<n;i++){
broj1=broj1*10+a[i];
}
//citanje broja unazad
broj=0;
while(broj1!=0){
broj=broj*10;
broj=broj+broj1%10;
broj1=broj1/10;
}
if(broj%4==0){
printf("Broj je: %d\n", broj);
printf("Niz sacinjen od cifara je: ");
for(i=0;i<n;i++){
printf("%d ", a[i]);
}
printf("\n");
}
else{
while(broj%4!=0){
broj--;	
}
printf("Broj deljiv sa 4 je: %d\n", broj);
j=0;
while(broj>0){
b[j]=broj%10;
broj=broj/10;
j++;
}
printf("Niz sacinjen od broja koji je deljiv sa 4 je: ");
for(i=0;i<j;i++){
printf("%d ", b[i]);
}
}
}