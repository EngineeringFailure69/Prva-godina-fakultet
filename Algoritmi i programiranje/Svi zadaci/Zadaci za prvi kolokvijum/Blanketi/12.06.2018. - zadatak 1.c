#include<stdio.h>
void main(){
int n, a[100], i=0, suma=0, cifra, j, k, brojac=0;
printf("Unesite broj: ");
scanf("%d", &n);
while(n>0){
cifra=n%10;
a[i]=cifra;
i++;
n/=10;
}
for(j=0;j<i;j++){
suma=suma+a[j];
}
for(j=0;j<i;j++){
if(a[j]>a[j+1] && a[j]<a[j-1]){
brojac=1; 
}
else{
brojac=0;
}
}
if(brojac==1){
printf("Cifre broja su sortirane u rastuci redosled\n");
}
else{
printf("Cifre broja nisu sortirane u rastuci redosled\n");
}
printf("Suma cifara je: %d\n", suma);
}