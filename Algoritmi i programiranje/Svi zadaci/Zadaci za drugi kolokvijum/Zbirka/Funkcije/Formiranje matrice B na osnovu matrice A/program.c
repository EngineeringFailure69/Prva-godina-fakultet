#include<stdio.h>
void kreiraj_matricu(int a[100][100], int b[100][100], int n){
int i, j;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(a[i][j]%2==0){
b[i][j]=0;
}
else{
b[i][j]=1;
}
}
}
}
void main(){
int a[100][100], b[100][100], i, j, n;
printf("Unesite dimanziju matrice (nxn): ");
scanf("%d", &n);
printf("Unesite matricu: \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d", &a[i][j]);	
}
}
kreiraj_matricu(a, b, n);
printf("\n");
printf("Matrica nakon kreiranja:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d", b[i][j]);
}
printf("\n");
}
printf("\n");
}