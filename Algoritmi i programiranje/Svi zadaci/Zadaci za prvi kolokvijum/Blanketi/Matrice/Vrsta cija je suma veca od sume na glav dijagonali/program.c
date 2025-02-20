#include<stdio.h>
void main(){
int a[10][10], i, j, n, suma1=0, suma2=0;
printf("Unesite dimenziju matrice (nxn): ");
scanf("%d", &n);
printf("Unosite elemente matrice:\n");
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
printf("Suma elemenata na glavnoj dijagonali je: %d\n", suma1);
for(i=0;i<n;i++){
suma2=0;
for(j=0;j<n;j++){
suma2=suma2+a[i][j];
}
if(suma2>suma1){
printf("Vrsta cija je suma veca od sume na glavnoj dijagonali je: ");
for(j=0;j<n;j++){
printf("%d ", a[i][j]);	
}
}
}
}