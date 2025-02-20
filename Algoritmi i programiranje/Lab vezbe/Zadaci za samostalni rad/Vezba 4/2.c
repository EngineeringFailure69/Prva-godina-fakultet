#include <stdio.h>
void main(){
int a[10][10], i, j, n, m, l, s, pom;
printf("Unesite velicinu matrice (nxm): ");
scanf("%d%d", &n, &m);
printf("Unesite elemente matrice: ");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
scanf("%d", &a[i][j]);	
}
}
printf("Matrica je:\n ");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("Unesite indekse dveju vrsta kojima zelite da zamenite mesta: ");
scanf("%d%d", &l,&s);
for(i=0;i<n;i++){
pom=a[l-1][i];
a[l-1][i]=a[s-1][i];
a[s-1][i]=pom;
if(a[l-1][i]<0){
a[l-1][i]=0;
}
if(a[s-1][i]<0){
a[s-1][i]=0;
}
}
printf("Matrica posle zamene mesta kolonama i pretvaranja negativnih elemenata u nulu:\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){
printf("%d ", a[i][j]);
}
printf("\n");
}
}
