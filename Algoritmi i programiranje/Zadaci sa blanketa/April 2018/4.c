#include<stdio.h>
int findMinElementIndex(int b[], int p){
int imin=0, i, min;
min=b[imin];
for(i=1;i<p;i++){
if(b[i]<min){
min=b[i];
imin=i;
}
}
return imin;
}
void main(){
int a[100][100], b[100], i, j, n, m, p, k=0, min;
printf("Unesite dimenziju matrice (nxm): ");
scanf("%d%d", &n, &m);
printf("Unesite matricu: \n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
scanf("%d", &a[i][j]);	
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
b[k]=a[i][j];
k++;
}
}
p=m*n;
min=findMinElementIndex(b, p);
printf("Najmanji element matrice je: %d\n", b[min]);
}