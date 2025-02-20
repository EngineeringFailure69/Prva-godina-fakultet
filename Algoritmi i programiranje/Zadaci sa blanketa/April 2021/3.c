#include<stdio.h>
void pronacipar(int *niz, int n, int *m, int *k, int s){
int i=0, j, nadjen=0, p;
*m=-1;
*k=-1;
while(i<n && nadjen==0){
j=i;
p=1;
while(j<n && p<s){
p=p*niz[j];
j++;
}
if(p==s){
*m=i;
*k=j-1;
nadjen=1;
}
i++;
}
}
void main(){
int a[100], n, i, s, j, m, k;
printf("Unesite broj elemenata niza: ");
scanf("%d", &n);
printf("Unesite elemente niza: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
printf("Unesite parametar: ");
scanf("%d", &s);
pronacipar(a, n, &m, &k, s);
if(m!=-1){
for(j=m;j<=n-(k-m)-1;j++){
a[j]=a[j+(k-m)+1];
}
}
n=n-(k-m+1);
printf("Niz nakon brisanja: ");
for(j=0;j<n;j++){
printf("%d", a[j]);
}
printf("\n");
}