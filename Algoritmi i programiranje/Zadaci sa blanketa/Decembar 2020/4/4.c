#include<stdio.h>
void main(){
FILE *f1;
int a[100][100], n, i, j;
f1=fopen("matrica.txt","r");
fscanf(f1, "%d", &n);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
fscanf(f1, "%d", &a[i][j]);
}
}
fclose(f1);
for(i=n-1;i>0;i--){
printf("%d ", a[i][0]);
}
for(i=0;i<(n/2)+1;i++){
printf("%d ", a[i][i]);
}
for(i=(n/2)-1;i>=0;i--){
printf("%d ", a[i][n-1-i]);
}
for(i=1;i<n;i++){
printf("%d ", a[i][n-1]);
}
}