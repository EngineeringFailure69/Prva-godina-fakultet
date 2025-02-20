#include<stdio.h>
void main(){
int i=0, n, br=0, pom, a[100], zc, j;
printf("Unesite broj: ");
scanf("%d", &n);
br=1;
while(n>0){
zc=n%10;
a[i]=zc;
n=n/10;
br++;
i++;
}
for(i=0;i<br-1;i++){
for(j=0;j<br-i-1;j++){
if(a[j]<a[j+1]){
pom=a[j];
a[j]=a[j+1];
a[j+1]=pom;
}
}
}
printf("Cifre broja sortirane u opadajuci redosled su: ");
for(i=0;i<br-1;i++){
printf("%d", a[i]);
}
printf("\n");
}