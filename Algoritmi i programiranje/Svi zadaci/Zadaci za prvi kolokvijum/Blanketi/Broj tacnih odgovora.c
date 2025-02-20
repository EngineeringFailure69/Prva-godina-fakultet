#include<stdio.h>
void main(){
int n, i=1, pitanje, br=0, zc, pom;
printf("Unesite redni broj studenta (mora biti izmedju 1 i 9): ");
scanf("%d", &n);
if(n>=1 && n<=9){
while(i<=9){
printf("Unesite tacne odgovore: ");
scanf("%d", &pitanje);
while(pitanje>0){
zc=pitanje%10;
pitanje=pitanje/10;
if(zc==n){
br++;
}
}
i++;
}
printf("Ukupan broj tacnih odgovora za unetog studenta je: %d\n", br);
}
else{
printf("Ne postoji student sa tim rednim brojem!\n");
}
}