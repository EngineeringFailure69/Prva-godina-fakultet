#include<stdio.h>
void presek_unija(int x, int a[100], int b[100], int m, int n, int e[100], int *l){
int i, q, k=0, j, d;
if(x==1){
for(i=0;i<m;i++){
q=0;
for(j=0;j<n;j++){
if(a[i]==b[j]){
q=1;
}
}
if(q==1){
e[k]=a[i];
k++;
}
}
*l=k;
}
//unija
else{
k=m;
for(i=0;i<m;i++){
e[i]=a[i];
}
for(i=0;i<n;i++){
q=0;
for(j=0;j<m;j++){
if(b[i]==a[j]){
q=1;
}
}
if(q==0){
e[k]=b[i];
k++;
}
}
*l=k;
}
}
void main(){
int a[100], b[100], c[100], e[100], pom[100], i, n, m, p, l, k;
printf("Unesite broj elemenata prvog niza: ");
scanf("%d", &m);
printf("Unesite elemente prvog niza: ");
for(i=0;i<m;i++){
scanf("%d", &a[i]);
}
printf("Unesite broj elemenata drugog niza: ");
scanf("%d", &n);
printf("Unesite elemente drugog niza: ");
for(i=0;i<n;i++){
scanf("%d", &b[i]);
}
printf("Unesite broj elemenata treceg niza: ");
scanf("%d", &p);
printf("Unesite elemente treceg niza: ");
for(i=0;i<p;i++){
scanf("%d", &c[i]);
}
presek_unija(1, a, b, m, n, pom, &k);
presek_unija(0, pom, c, k, p, e, &l);
for(i=0;i<l;i++){
printf("%d", e[i]);
}
printf("\n");
}