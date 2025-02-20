#include<stdio.h>
void main(){
int i, n, p;
printf("Unesite broj za koji racunamo faktorijal: ");
scanf("%d", &n);
if(n<0){
printf("Faktorijal nije definisan");
}
else if(n==0){
printf("Faktorijal unetog broja je: 1");
}
else{
p=1;
for(i=1;i<=n;i++){
p=p*i;
printf("%d ", p);
}
printf("\n");
printf("Faktorijal unetog broja je: %d", p);
}
printf("\n");
}