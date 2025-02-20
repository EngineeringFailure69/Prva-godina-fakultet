#include<stdio.h>
void main(){
int i, j, n, a[10][10], br=0;
float suma1=0, suma2=0, prosek1=0, prosek2=0, poredjenje;
printf("Unesite dimenziju matrice (nxn): ");
scanf("%d", &n);
printf("Unesite matricu:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d", &a[i][j]);	
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
suma1=suma1+a[i][j];
}
}
printf("Suma svih elemenata matrice je: %.2f\n", suma1);
prosek1=suma1/(n*n);
printf("Prosek matrice je: %.2f\n", prosek1);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i+j==n-1){
suma2=suma2+a[i][j];
br++;
}	
}
}
printf("Suma svih elemenata na sporednoj dijagonali matrice je: %.2f\n", suma2);
prosek2=suma2/br;
printf("Prosek elemenata na sporednoj dijagonali matrice je: %.2f\n", prosek2);
if(prosek1/prosek2==1){
printf("Proseci su isti!\n");
}
if(prosek1>prosek2){
poredjenje=prosek1/prosek2;
printf("Prosek matrice je veci %.2f puta od proseka na sporednoj dijagonali\n", poredjenje);
}
if(prosek1<prosek2){
poredjenje=prosek2/prosek1;
printf("Prosek matrice je manji %.2f puta od proseka na sporednoj dijagonali\n", poredjenje);
}
}