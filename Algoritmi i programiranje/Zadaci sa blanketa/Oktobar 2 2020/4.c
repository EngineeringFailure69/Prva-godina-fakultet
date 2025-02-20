#include<stdio.h>
void main(){
FILE *f1, *f2;
int a[100][100], i, j, n, suma1=0, suma2=0;
f1=fopen("ulaz.txt", "r");
fscanf(f1, "%d", &n);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
fscanf(f1, "%d", &a[i][j]);
}
}
fclose(f1);
printf("Matrica je: \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ", a[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++){
suma1=suma1+a[i][i];
}
printf("Suma elemenata na glavnoj dijagonali je: %d\n", suma1);
for(i=0;i<n;i++){
suma2=suma2+a[i][n-i-1];
}
printf("Suma elemenata na sporednoj dijagonali je: %d\n", suma2);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i==j){
a[i][j]=suma1;	
}
else if(i+j==n-1){
a[i][j]=suma2;
}
else{
a[i][j]=0;
}
}
}
f2=fopen("rezultat.txt", "w");
printf("Matrica je: \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ", a[i][j]);
fprintf(f2, "%d ", a[i][j]);
}
printf("\n");
fprintf(f2, "\n");
}
fclose(f2);
}

