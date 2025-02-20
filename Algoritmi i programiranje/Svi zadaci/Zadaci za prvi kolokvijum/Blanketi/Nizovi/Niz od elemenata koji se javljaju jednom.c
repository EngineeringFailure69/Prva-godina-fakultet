#include<stdio.h>
void main(){
int a[10], b[10], i, j, n, br, m=0;
printf("Unesite broj elemenata niza: ");
scanf("%d", &n);
printf("Unesite elemente niza: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
for(i=0;i<n;i++){
br=0;
for(j=0;j<n;j++){
if(a[i]==a[j]){
br++;	
}
}
if(br==1){
b[m]=a[i];
m++;
}
}
for(i=0;i<m;i++){
printf("%d ", b[i]);
}
}