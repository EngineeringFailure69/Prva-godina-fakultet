#include<stdio.h>
void pomeranje_na_dole(int a[100][100], int n, int k){
int i, j, pom, l;
for(i=1;i<=k;i++){
//for(j=n-1;j>0;j--){
for(j=n-1;j>0;j--){
pom=a[n-1][j];
for(l=n-1;l>=n-j+1;l--){
a[l][j]=a[l-1][j];
}
a[n-j][j]=pom;
}
//pom=a[n-1][j];
//for(l=n-1;l>=n-j+1;l--){
//a[l][j]=a[l-1][j];
//a[n-j][j]=pom;
//}	
//}
}
}
void main(){
int a[100][100], i, j, n, k;
printf("Unesite dimenziju matrice (nxn): ");
scanf("%d", &n);
printf("Unesite matricu:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d", &a[i][j]);	
}
}
printf("Unesite broj mesta za koje zelite da pomerite elemente: ");
scanf("%d", &k);
printf("Matrica pre pomeranja elemenata:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ", a[i][j]);
}
printf("\n");
}
pomeranje_na_dole(a, n, k);
printf("Matrica nakon pomeranja elemenata:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ", a[i][j]);
}
printf("\n");
}
}