#include<stdio.h>
void main(){
int a[100][100], n, i ,j, suma1=0, suma2=0;
printf("Unesite dimenzije matrica (nxn): ");
scanf("%d", &n);
printf("Unesite matricu:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d", &a[i][j]);
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i==j){
suma1=suma1+a[i][j];	
}
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i+j==n-1){
suma2=suma2+a[i][j];	
}
}
}
suma1=suma1+suma2;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i==j){
a[i][j]=suma1;	
}
else{
a[i][j]=0;
}
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i+j==n-1){
a[i][j]=suma1;	
}
}
}
printf("\n");
printf("Matrica nakon obrade:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%2d ", a[i][j]);
}
printf("\n");
}
}
