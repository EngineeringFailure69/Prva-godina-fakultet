#include<stdio.h>
int maks_element(int a[100], int n){
int imax=0, i;
for(i=1;i<n;i++){
if(a[imax]<a[i]){
imax=i;	
}
}
return imax;
}
void main(){
int a[100], n, i, imax, pom, j;
printf("Unesite broj elemenata niza: ");
scanf("%d", &n);
printf("Unesite elemente niza: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
for(i=n-1;i>0;i--){
imax=maks_element(a, i+1);
pom=a[i];
a[i]=a[imax];
a[imax]=pom;
}
imax=maks_element(a, n);
printf("Niz nakon sortiranja: ");
for(i=0;i<n;i++){
printf("%d", a[i]);
}
printf("\n");
printf("Indeks maksimalnog elementa je: %d\n", imax);
}