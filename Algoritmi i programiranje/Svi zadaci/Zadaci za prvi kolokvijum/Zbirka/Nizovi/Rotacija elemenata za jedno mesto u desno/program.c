#include<stdio.h>
void main(){
int a[10], i, n, pom;
printf("Unesite broj elemenata niza: ");
scanf("%d", &n);
printf("Unesite elemente niza: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
pom=a[n-1];
for(i=n-1;i>0;i--){
a[i]=a[i-1];
}
a[0]=pom;
printf("Niza nakon rotacije za jedno mesto u desno: ");
for(i=0;i<n;i++){
printf("%d ", a[i]);
}
printf("\n");
}