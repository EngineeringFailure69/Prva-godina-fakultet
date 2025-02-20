#include<stdio.h>
void ciklicno(int b[100], int n, int k){
int i, j, pom;
for(i=0;i<k;i++){
pom=b[0];
for(j=0;j<n-1;j++){
b[j]=b[j+1];
}
b[n-1]=pom;
}
}
void main(){
int a[100][100], i, j, n, pom, b[100];
printf("Unesite dimenziju matrice (nxn): ");
scanf("%d", &n);
printf("Unesite matricu: \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d", &a[i][j]);	
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
b[j]=a[i][j];
}
ciklicno(b, n, i+1);
for(j=0;j<n;j++){
a[i][j]=b[j];
}
}
printf("Matrica nakon transformacije:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d", a[i][j]);	
}
printf("\n");
}
}