#include<stdio.h>
void stampanje(int a[100][100], int n, int m){
int i, j;
for(i=0;i<n;i++){
printf("| ");
for(j=0;j<m;j++){
printf("%5d", a[i][j]);	
}
printf("  |\n");
}
}
void main(){
int i, j, a[100][100], n, m;
printf("Unesite dimenziju matrice (nxm): ");
scanf("%d%d", &n, &m);
printf("Unesite matricu: \n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
scanf("%d", &a[i][j]);
}
}
stampanje(a, n, m);
}