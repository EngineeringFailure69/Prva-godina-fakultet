#include<stdio.h>
void main(){
int a[10], i, j, pom, min, max, n;
printf("Unesite broj elemenata niza: ");
scanf("%d", &n);
printf("Unesite elemente niza: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
max=a[0];
min=a[0];
for(i=0;i<n;i++){
if(max<a[i]){
max=a[i];
}
if(min>a[i]){
min=a[i];
}
}
printf("Makimalni element niza je: %d\n", max);
printf("Minimalni element niza je: %d\n", min);
for(i=0;i<(n/2)-1;i++){
for(j=i+1;j<n/2;j++){
if(a[i]>a[j]){
pom=a[i];
a[i]=a[j];
a[j]=pom;
}
}
}
for(i=n/2;i<n-1;i++){
for(j=i+1;j<n;j++){
if(a[i]<a[j]){
pom=a[i];
a[i]=a[j];
a[j]=pom;
}
}
}
for(i=0;i<n;i++){
printf("%d ", a[i]);
}
}