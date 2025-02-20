#include<stdio.h>
void main(){
int a[10], k, n, i, j, x;
printf("Unesite broj elemenata niza: ");
scanf("%d", &n);
printf("Unesite elemente niza: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
printf("Unesite element koji zelite da umetnete u niz: ");
scanf("%d", &x);
printf("Unesite indeks pozicije na koji zelite da umetnete element: ");
scanf("%d", &k);
for(i=n;i>0;i--){
a[i]=a[i-1];
}
a[k]=x;
n++;
printf("Niz nakon umetanja elementa: ");
for(i=0;i<n;i++){
printf("%d ", a[i]);
}
printf("\n");
}