#include<stdio.h>
int binarni_u_decimalni(int a[], int n){
int i, dec=0, mnozilac=1;
for(i=0;i<n;i++){
dec=dec+a[i]*mnozilac;
mnozilac=mnozilac*2;
}
return dec;
}
void main(){
int n, i, a[32], broj;
printf("Unesite duzinu broja: ");
scanf("%d", &n);
printf("Unesite broj u binarnom obliku (cifre su nule i jedinice): ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
broj=binarni_u_decimalni(a, n);
printf("%d\n", broj);
}