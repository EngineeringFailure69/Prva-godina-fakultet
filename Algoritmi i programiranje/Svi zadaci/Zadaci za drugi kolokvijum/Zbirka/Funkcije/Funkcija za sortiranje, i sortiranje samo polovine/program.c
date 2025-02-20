#include<stdio.h>
int sortiraj(int *a, int m){
int i, j, pom;
for(i=0;i<m-1;i++){
for(j=i+1;j<m;j++){
if(a[i]>a[j]){
pom=a[i];
a[i]=a[j];
a[j]=pom;
}
}
}
}
void main(){
int a[100], n, i, j, pom, m;
printf("Unesite broj elemenata niza: ");
scanf("%d", &n);
printf("Unesite elemente niza: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
m=n/2;
sortiraj(a, m);
for(i=0;i<n;i++){
printf("%d", a[i]);
}
printf("\n");
}
