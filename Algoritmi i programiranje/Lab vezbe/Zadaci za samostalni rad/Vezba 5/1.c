#include<stdio.h>
int prost(int a){
int prost=1, i=2;
while(i<a && prost==1){
if(a%i==0){
prost=0;	
}
i++;
}
return prost;
}
void main(){
int i, n, a, br=0;
printf("Unesite koliko brojeva zelite da proverite: ");
scanf("%d", &n);
printf("Unesite brojeve: ");
for(i=0;i<n;i++){
scanf("%d", &a);
if(prost(a)){
br++;
}
}
printf("Uneli ste: %d prostih brojeva\n", br);
}