#include<stdio.h>
void main(){
int i,max,min,n,a[10], pom;
printf("Unesite broj elemenata niza: ");
scanf("%d", &n);
printf("Unesite elemente niza: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
max=0;
min=0;
for(i=0;i<n;i++){
if(a[max]<a[i]){
max=i;	
}
if(a[i]<a[min]){
min=i;
}
}
pom=a[max];
a[max]=a[min];
a[min]=pom;
printf("Niz nakon zamene mesta minimalnom i maksimalnom elementu: ");
for(i=0;i<n;i++){
printf("%d ", a[i]);
}
}