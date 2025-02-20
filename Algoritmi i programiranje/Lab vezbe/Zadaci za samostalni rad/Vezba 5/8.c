#include<stdio.h>
int suma(int a[100][100], int n){
int suma=0, i, j;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i+j>n-1){
suma=suma+a[i][j];	
}
}
}
return suma;
}
void main(){
int i, j, a[100][100], b[100][100], n, suma1, suma2, m;
printf("Unesite dimenziju prve matrice (nxn): ");
scanf("%d", &n);
printf("Unesite matricu: \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d", &a[i][j]);	
}
}
printf("Unesite dimenziju druge matrice (mxm): ");
scanf("%d", &m);
printf("Unesite matricu: \n");
for(i=0;i<m;i++){
for(j=0;j<m;j++){
scanf("%d", &b[i][j]);	
}
}
suma1=suma(a, n);
suma2=suma(b, m);
printf("\n");
if(suma2>suma1){
printf("Matrica sa vecom sumom elemenata ispod sporedne dijagonale je matrica: \n");
for(i=0;i<m;i++){
for(j=0;j<m;j++){
printf("%d ", b[i][j]);
}
printf("\n");
}
}
else if(suma1>suma2){
printf("Matrica sa vecom sumom elemenata ispod sporedne dijagonale je matrica: \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ", a[i][j]);
}
printf("\n");
}
}
printf("\n");
}
