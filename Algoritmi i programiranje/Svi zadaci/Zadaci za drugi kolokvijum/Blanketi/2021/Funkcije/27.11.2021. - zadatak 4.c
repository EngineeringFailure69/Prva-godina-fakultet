#include<stdio.h>
int minimax(int niz[], int n, int p){
int i, minmax;
minmax=niz[0];
if(p==1){
for(i=1;i<n;i++){
if(minmax<niz[i]){
minmax=niz[i];
}	
}
}
else if(p==0){
for(i=1;i<n;i++){
if(minmax>niz[i]){
minmax=niz[i];	
}	
}
}
return minmax;
}
void main(){
int a[100][100], b[100], n, i, j, max, min, k=0;
printf("Unesite dimenziju matrice (nxn): ");
scanf("%d", &n);
printf("Unesite matricu:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d", &a[i][j]);
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
b[k]=a[i][j];
k++;
}
}
max=minimax(b, k, 1);
min=minimax(b, k, 0);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i+j<n-1){
a[i][j]=max;
}
if(i+j>n-1){
a[i][j]=min;
}
}
}
printf("Matrica nakon obrade:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ", a[i][j]);
}
printf("\n");
}
}