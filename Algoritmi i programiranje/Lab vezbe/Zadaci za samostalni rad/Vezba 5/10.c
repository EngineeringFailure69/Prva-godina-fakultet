#include<stdio.h>
void zameni(int *x, int*y){
int pom;
pom=*x;
*x=*y;
*y=pom;
}
void transponovanje(int a[100][100], int n){
int i, j;
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
zameni(&a[j][i], &a[i][j]);	
}
}
}
void main(){
int a[100][100], n, i, j;
printf("Unesite dimenziju matrice (nxn): ");
scanf("%d", &n);
printf("Unesite matricu: \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d", &a[i][j]);	
}
}
transponovanje(a, n);
printf("Matrica nakon transponovanja: \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ", a[i][j]);	
}
printf("\n");
}
printf("\n");
}