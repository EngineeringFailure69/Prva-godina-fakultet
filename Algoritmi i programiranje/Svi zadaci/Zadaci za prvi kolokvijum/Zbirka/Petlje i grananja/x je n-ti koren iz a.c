#include<stdio.h>
#include<math.h>
void main(){
int n,a;
double x0,x1,e;
printf("Unesite n, a, e respektivno: ");
scanf("%d%d%lf", &n, &a, &e);
x1=(a+n-1)/n;
do{
x0=x1;
x1=((n-1)*x0+a/pow(x0,n-1))/n;
}while(abs(x1-x0)>e);
printf("N-ti koren od a je: %lf", x1);
printf("\n");
}