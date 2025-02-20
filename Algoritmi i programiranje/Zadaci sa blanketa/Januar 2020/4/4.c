#include<stdio.h>
void main(){
FILE *f1;
int a[100][100], i, j, n, pom, min, max;
f1=fopen("matrica.txt", "r");
fscanf(f1, "%d", &n);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
fscanf(f1, "%d", &a[i][j]);
}
}
for(i=0;i<n;i++){
max=a[i][0];
for(j=1;j<n;j++){
if(max<a[i][j]){
max=a[i][j];	
}
}
a[i][i]=max;
}
// drugi deo
for(i=0;i<n;i++){
min=a[0][i];
for(j=1;j<n;j++){
if(a[j][i]<min){
min=a[j][i];	
}
}
a[i][n-i-1]=min;
}
printf("Matrica nakon zamene: \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ", a[i][j]);	
}
printf("\n");
}
fclose(f1);
}