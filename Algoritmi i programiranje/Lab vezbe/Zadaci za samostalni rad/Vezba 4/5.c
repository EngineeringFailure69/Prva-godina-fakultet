#include <stdio.h>
void main(){
int a[10][10], i, j, n, m, pom, b[10], l=0, k, d;
printf("Unesite velicinu matrice (nxm): ");
scanf("%d%d", &n, &m);
printf("Unesite elemente matrice: ");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
scanf("%d", &a[i][j]);	
}
}
printf("Matrica je:\n ");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
printf("%d ",a[i][j]);
}
printf("\n");
}
for(j=0;j<m;j++){
for(i=0;i<n;i++){
for(k=i+1;k<n;k++){
if(a[i][j]<a[k][j]){
pom=a[i][j];
a[i][j]=a[k][j];
a[k][j]=pom;
}
}
}
}
printf("Matrica posle sortiranja elemenata po kolonama u opadajuci redosled\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
printf("%d ", a[i][j]);
}
printf("\n");
}
}
