#include <stdio.h>
void main(){
int a[10][10], i, j, suma=0, proizvod=1, n;
printf("Unesite velicinu matrice (nxn): ");
scanf("%d", &n);
printf("Unesite elemente matrice: ");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d", &a[i][j]);	
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i>j){
suma=suma+a[i][j];	
}
if(i+j>n-1){
proizvod=proizvod*a[i][j];
}
}
}
printf("Matrica je: ");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ", a[i][j]);
}
printf("\n");
}
printf("\n");
printf("Suma elemenata ispod glavne dijagonale je: %d\n", suma);
printf("Proizvod elemenata ispod sporedne dijagolane je: %d\n", proizvod);
}
