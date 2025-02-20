#include<stdio.h>
void main(){
int a[100][100], n, i ,j, f1=1, f2=1, f=1, k=0, b[100], x, y, indekskolona=0, indeksvrsta=0;
printf("Unesite dimenzije matrica (nxn): ");
scanf("%d", &n);
for(i=2;i<n*n;i++){
f=f1+f2;
b[k]=f;
k++;
f1=f2;
f2=f;
}
a[indeksvrsta][indekskolona]=1;
indeksvrsta++;
a[indeksvrsta][indekskolona]=1;
indeksvrsta++;
x=0;
for(i=0;i<n;i++){
for(j=indeksvrsta;j<n;j++){
a[j][i]=b[x];
x++;
}
indeksvrsta=0;
}
printf("Matrica:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ", a[i][j]);	
}
printf("\n");
}
}
