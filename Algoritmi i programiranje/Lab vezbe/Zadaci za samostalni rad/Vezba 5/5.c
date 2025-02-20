#include<stdio.h>
void delioci(int a[], int b, int *duzina){
int i, k=0;
for(i=1;i<=b;i++){
if(b%i==0){
a[k]=i;
k++;
}
}
*duzina=k;
}
void main(){
int b, i, r, a[100];
printf("Unesite broj: ");
scanf("%d", &b);
delioci(a, b, &r);
printf("Delioci broja %d su: ", b);
for(i=0;i<r;i++){
printf("%d ", a[i]);
}
printf("\n");
}