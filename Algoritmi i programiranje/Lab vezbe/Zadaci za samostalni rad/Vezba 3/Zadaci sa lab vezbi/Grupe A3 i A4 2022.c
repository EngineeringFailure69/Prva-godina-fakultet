//Naci sve neparne elemente niza
#include<stdio.h>
int main(){
int a[10], n, i;
printf("Uneti broj elemenata niza: ");
scanf("%d", &n);
printf("Unesite elemente niza: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
//printf("\n");
printf("Neparni elementi niza: ");
for(i=0;i<n;i++){
if(a[i]%2!=0 && a[i]>0){
printf("%d", a[i]);
}
}
printf("\n");
return 0;
}