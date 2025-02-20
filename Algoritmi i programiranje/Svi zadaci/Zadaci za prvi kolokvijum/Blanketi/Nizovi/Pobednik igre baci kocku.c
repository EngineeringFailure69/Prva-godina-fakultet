#include<stdio.h>
void main(){
int a[10], b[10], n, i, j, br1=0, br2=0;
printf("Unesite ukupan broj bacanja: ");
scanf("%d", &n);
printf("Unesite brojeve koje je dobio prvi igrac: ");
for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
printf("Unesite brojeve koje je dobio drugi igrac: ");
for(i=0;i<n;i++){
scanf("%d", &b[i]);
}
for(i=0;i<n;i++){
if(a[i]>b[i]){
br1++;	
}
else if(a[i]<b[i]){
br2++;
}
}
if(br1>br2){
printf("Pobednik je prvi igrac!\n");
}
if(br1<br2){
printf("Pobednik je drugi igrac!\n");
}
if(br1==br2){
printf("Nereseno!\n");
}
}