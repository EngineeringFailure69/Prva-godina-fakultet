#include<stdio.h>
void main(){
int a[10], n, i, k, l, x, pom, j;
printf("Unesite broj elemenata niza: ");
scanf("%d", &n);
printf("Unesite elemente niza: ");
for(i=0;i<n;i++){
scanf("%d", a[i]);
}
printf("Niz sortiran u rastuci redosled: ");
for(k=0;k<n;k++){
for(l=0;l<n-k-1;l++){
if(a[l+1]<a[l]){
pom=a[l];
a[l]=a[l+1];
a[l+1]=pom;
}
}
}
for(i=0;i<n;i++){
printf("%d", a[i]);
}
for(j=0;j<10;j++){
printf("Unesite element koji zelite da umetnete: ");
scanf("%d", &x);
for(i=0;i<n+1;i++){
a[n]=x;
n++;
}
}
for(k=0;k<n;k++){
for(l=0;l<n-k-1;l++){
if(a[l+1]<a[l]){
pom=a[l];
a[l]=a[l+1];
a[l+1]=pom;
}
}
}
printf("Niz posle umetanja: ");
for(i=0;i<n;i++){
printf("%d", a[i]);
}
}

