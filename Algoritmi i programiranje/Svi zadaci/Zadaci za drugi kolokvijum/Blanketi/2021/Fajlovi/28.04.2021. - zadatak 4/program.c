#include<stdio.h>
void main(){
FILE *f1;
int a[100][100], i, j, n, pom, b[100], k, m=0;
printf("Unesite dimenziju matrice: ");
scanf("%d", &n);
printf("Unesite matricu: \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d", &a[i][j]);
}
}
for(j=0;j<n;j=j+2){
m=0;
for(k=0;k<n;k=k+2){
b[m]=a[k][j];
m++;
}
for(i=0;i<m-1;i++){
for(k=i+1;k<m;k++){
if(b[i]<=b[k]){
pom=b[i];
b[i]=b[k];
b[k]=pom;
}
}
}
m=0;
for(k=0;k<n;k=k+2){
a[k][j]=b[m];
m++;
}
}
printf("Matrica je: \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ", a[i][j]);
}
printf("\n");
}
f1=fopen("R.txt", "w");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
fprintf(f1, "%d ", a[i][j]);
}
fprintf(f1, "\n");
}
fclose(f1);
}