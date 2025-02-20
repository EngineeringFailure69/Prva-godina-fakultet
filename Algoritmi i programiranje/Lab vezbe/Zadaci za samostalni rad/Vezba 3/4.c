#include<stdio.h>
void main(){
float suma=0, prosek=0;
int a[100],n, i,br=0;
printf("Unesite broj elemenata niza: ");
scanf("%d", &n);
for(i=0;i<n;i++){
scanf("%d", &a[i]);
suma=suma+a[i];
}
prosek=suma/n;
printf("Prosek elemenata niza je: %f\n", prosek);
printf("Elementi koji ispunjavaju uslov su: ");
for(i=0;i<n;i++){
	if(a[i]<prosek){
	printf("%d\n", a[i]);
	}
}
}