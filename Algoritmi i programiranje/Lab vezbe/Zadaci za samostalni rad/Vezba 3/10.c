#include<stdio.h>
void main(){
int a[10], i, j, n, m, y,pom;
printf("Unesite broj elemenata niza: ");
scanf("%d", &n);
printf("Unesite elemente niza: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
printf("Unesite broj elemenata koje zelite da izbrisete iz niza: ");
scanf("%d", &m);
/*if(m>n){
printf("Ne moze te obrisati vise elemenata nego sto imate u nizu\n");
}*/
//if(m<=n){
for(j=0;j<m;j++){
pom=j+1;
printf("Unesite indeks %d. broja koji zelite da izbrisete: ", pom);
scanf("%d", &y);
/*if(y>n){
printf("Izasli ste van opsega niza\n");
}*/
//else{
printf("Niz posle %d. brisanja: ", pom);
for(i=y-1;i<n-1;i++){
a[i]=a[i+1];
}
n--;
for(i=0;i<n;i++){
printf("%d", a[i]);
}
printf("\n");
//}
}
//}
}
//Sve pod komentarom je opciono 