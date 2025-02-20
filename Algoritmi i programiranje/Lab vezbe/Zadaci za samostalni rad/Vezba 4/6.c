//Mrzelo me je da inicijalizujem matricu 
#include <stdio.h>
void main(){
int a[10][10], i, j, n, m, pom, b[10][10], c[10][10], temp;
printf("Unesite velicinu matrice (nxm): ");
scanf("%d", &n);
printf("Unesite elemente matrice: ");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d", &a[i][j]);
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
b[j][i]=a[i][j];
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
c[i][j]=0;
for(m=0;m<n;m++){
c[i][j]=c[i][j]+a[i][m]*b[m][j];
}
}
}
printf("Matrica je:\n ");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("Transponovana matrica je:\n ");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ",b[i][j]);
}
printf("\n");
}
printf("Proizvod matrice i transponovane matrice je:\n ");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ",c[i][j]);
}
printf("\n");
}
}