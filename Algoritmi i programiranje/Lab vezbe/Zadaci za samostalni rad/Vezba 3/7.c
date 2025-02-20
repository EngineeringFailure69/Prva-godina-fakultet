#include<stdio.h>
void main(){
int a[10], b[10],c[20], i, j, n, m, p, k, l, pom;
printf("Unesite broj elemenata prvog niza: ");
scanf("%d", &n);
printf("Unesite broj elemenata drugog niza: ");
scanf("%d", &m);
printf("Unesite prvi niz: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
printf("Unesite drugi niz: ");
for(i=0;i<m;i++){
scanf("%d", &b[i]);
}
for(k=0;k<n;k++){
for(l=0;l<n-k-1;l++){
if(a[l]>a[l+1]){
pom=a[l];
a[l]=a[l+1];
a[l+1]=pom;
}
}
}
printf("Prvi niz pre objedinjenja: ");
for(i=0;i<n;i++){
printf("%d ", a[i]);
}
printf("\n");
printf("Drugi niz pre objedinjenja: ");
for(k=0;k<m;k++){
for(l=0;l<m-k-1;l++){
if(b[l]>b[l+1]){
pom=b[l];
b[l]=b[l+1];
b[l+1]=pom;
}
}
}
for(i=0;i<m;i++){
printf("%d ", b[i]);
}
printf("\n");
p=n+m;
c[20]=c[p];
for(i=0;i<n;i++){
c[i]=a[i];
}
for(i=0,j=n;j<p && i<m;i++,j++){
c[j]=b[i];
}
printf("Nizovi posle objedinjenja: ");
for(k=0;k<p;k++){
for(l=0;l<p-k-1;l++){
if(c[l]>c[l+1]){
pom=c[l];
c[l]=c[l+1];
c[l+1]=pom;
}
}
}
for(i=0;i<p;i++){
printf("%d ", c[i]);
}
printf("\n");
}
