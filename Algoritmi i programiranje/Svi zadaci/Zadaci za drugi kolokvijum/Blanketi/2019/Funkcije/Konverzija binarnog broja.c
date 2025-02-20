#include<stdio.h>
int konverzija(int b[], int duzina){
int i, temp, binarni, decimalni=0, baza=1, ostatak,k=0;
for(i=0;i<duzina;i++){
k=10*k+b[i];
}
temp=k;
while(temp>0){
ostatak=temp%10;
decimalni=decimalni+ostatak*baza;
temp=temp/10;
baza=baza*2;
}
return decimalni;
}
void main(){
int b1[100], b2[100], i, n, m, vrednost1, vrednost2;
float kolicnik;
printf("Unesite duzinu prvog binarnog broja: ");
scanf("%d", &n);
printf("Unesite prvi binarni broj: ");
for(i=0;i<n;i++){
scanf("%d", &b1[i]);
}
printf("Unesite duzinu drugog binarnog broja: ");
scanf("%d", &m);
printf("Unesite drugi binarni broj: ");
for(i=0;i<m;i++){
scanf("%d", &b2[i]);
}
vrednost1=konverzija(b1, n);
printf("Prvi broj u decimalnom obliku je: %d\n", vrednost1);
vrednost2=konverzija(b2, m);
printf("Drugi broj u decimalnom obliku je: %d\n", vrednost2);
kolicnik=vrednost1/vrednost2;
printf("Kolicnik je: %.2f\n", kolicnik);
}