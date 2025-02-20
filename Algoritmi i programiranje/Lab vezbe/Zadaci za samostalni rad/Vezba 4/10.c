#include <stdio.h>
void main(){
int a[10][10], i, j, n, sumk, sum, k, m, b;
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
k=0;
sumk=0;

for(b=0;b<m;b++){
sumk+=a[b][0];
}
for(j=1;j<m;j++){
sum=0;
for(b=0;b<m;b++){
sum=sum+a[j][b];
}
if(sum<sumk){
sumk=sum;
k=j;
}
}
printf("Indeks kolone sa najmanjom sumom je: %d\n", k);
printf("Kolona matrice sa najmanjom sumom je:\n ");
for(j=0;j<m;j++){
printf("%d\n", a[j][k]);
}
printf("\n");
}
