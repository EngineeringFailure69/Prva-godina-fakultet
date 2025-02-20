#include <stdio.h>
void main(){
int a[10][10], i, j, maxj, maxi, mini, minj, n, pom;
printf("Unesite velicinu matrice (nxn): ");
scanf("%d", &n);
printf("Unesite elemente matrice: ");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d", &a[i][j]);	
}
}
printf("Matrica pre zamene je: ");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ", a[i][j]);
}
printf("\n");
}
//element u donjem levom cosku matrice
mini=n-1;
minj=0;
//element u gornjem desnom cosku matrice
maxi=0;
maxj=n-1;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
// iznad glavne dijagonale
if(i<j){
if(a[i][j]>a[maxi][maxj]){
maxi=i;
maxj=j;
}
}
//ispod glavne dijagonle
if(i>j){
if(a[i][j]<a[mini][minj]){
mini=i;
minj=j;
}
}
}
pom=a[mini][minj];
a[mini][minj]=a[maxi][maxj];
a[maxi][maxj]=pom;
printf("Matrica nakon zamene je: ");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ", a[i][j]);
}
printf("\n");
}
}
}