#include<stdio.h>
void main(){
int a[10], i, n, j, k;
printf("Unesite broj elemenata niza: ");
scanf("%d", &n);
printf("Unesite elemente niza: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
printf("Niz posle trimovanja nula: ");
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(a[i]==0 && a[j]==0){
for(k=j;k<n;k++){
a[k]=a[k+1];
}
j--;
n--;
}
}
}
for(i=0;i<n;i++){
printf("%d ", a[i]);
}
printf("\n");
}