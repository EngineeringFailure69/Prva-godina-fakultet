#include<stdio.h>
int sumiraj(int niz[], int n){
int i, suma=0, duzina;
for(i=0;i<n;i++){
suma=suma+niz[i];
}
return suma;
}
void main(){
int n, i, j, a[100][100], sd[100], elementi[100], suma=0, sumasd=0, k=0, p=0;
float proseksd, prosek;
printf("Unesite dimenziju matrice (nxn): ");
scanf("%d", &n);
printf("Unesite matricu: \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d", &a[i][j]);
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
elementi[k]=a[i][j];
k++;
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i+j==n-1){
sd[p]=a[i][j];
p++;
}
}
}
for(i=0;i<k;i++){
suma=suma+sumiraj(elementi[i], k);
}
for(i=0;i<p;i++){
sumasd=sumasd+sumiraj(sd[i], p);
}
prosek=suma/k;
proseksd=sumasd/p;
printf("Suma elemenata matrice je: %d\n", suma);
printf("Suma elemenata na sporednoj dijagonali matrice je: %d\n", sumasd);
printf("Prosek elemenata matrice je: %.2f\n", prosek);
printf("Prosek elemenata na sporednoj dijagonali matrice je: %.2f\n", proseksd);
printf("Prosek je veci za: %.2f\n", prosek/proseksd);
}