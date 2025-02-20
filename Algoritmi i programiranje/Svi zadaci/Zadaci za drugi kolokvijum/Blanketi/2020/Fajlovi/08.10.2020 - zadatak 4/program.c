#include<stdio.h>
void main(){
FILE *f1;
int a[100][100], i, j, n, suma1=0, suma2=0;
f1=fopen("matrica.txt", "r");
fscanf(f1, "%d", &n);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
fscanf(f1, "%d", &a[i][j]);
}
}
for(i=0;i<n;i++){
suma1=suma1+a[i][n-i-1];
}
printf("Matrica je:\n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ", a[i][j]);
}
printf("\n");
}
printf("Suma na sporednoj dijagonali je: %d\n", suma1);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
suma2=suma2+a[i][j];	
}
if(suma2>suma1){
printf("Vrsta sa vecom sumom od sume na glavnoj dijagonali: ");
for(j=0;j<n;j++){
printf("%d ", a[i][j]);	
}
printf("\n");
}
}
}