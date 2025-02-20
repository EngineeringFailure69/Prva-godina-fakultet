#include<stdio.h>
void main(){
float x,y;
printf("Unesite koordinatu x: ");
scanf("%f", &x);
printf("Unesite koordinatu y: ");
scanf("%f", &y);
if(y>0.5*x-1){
printf("Tacka se nalazi iznad prave");
}
else{
printf("Tacka se nalazi ispod prave");
}
printf("\n");
}