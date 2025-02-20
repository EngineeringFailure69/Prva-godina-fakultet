#include<stdio.h>
void par_indeksa(int a[100], int n, int *p, int *k, int m){
int i=0, j, suma=0, N=0;
while(i<n-1 && !N){
suma=a[i];
*p=i;
for(j=i+1;j<n;j++){
suma=suma+a[j];
if(suma==m){
*k=j;
N=1;
}
}
i++;
}
if(N==0){
*p=*p-1;
*k=*k-1;
}
}
void main(){
int a[100], n, m, i, p, k;
printf("Unesite broj elemenata niza: ");
scanf("%d", &n);
printf("Unesite elemente niza: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
printf("Unesite broj za koji ispitujemo: ");
scanf("%d", &m);
par_indeksa(a, n, &p, &k, m);
printf("Indeksi su od: %d do %d\n", p, k);
}