#include<stdio.h>
int zbir(int a, int b){
int suma;
suma=a+b;
return suma;
}
int apsolutna_vrednost(int x){
int apsolutna;
if(x<0){
apsolutna=-x;
}
else{
apsolutna=x;
}
return apsolutna;
}
void main(){
int a, b, suma, apsolutno1, apsolutno2;
printf("Unesite brojeve a i b: ");
scanf("%d%d", &a, &b);
suma=zbir(a, b);
printf("Suma brojeva je: %d\n", suma);
apsolutno1=apsolutna_vrednost(a);
apsolutno2=apsolutna_vrednost(b);
printf("Apsolutna vrednost broja a je: %d\n Apsolutna vrednost broja b je: %d\n", apsolutno1, apsolutno2);
}