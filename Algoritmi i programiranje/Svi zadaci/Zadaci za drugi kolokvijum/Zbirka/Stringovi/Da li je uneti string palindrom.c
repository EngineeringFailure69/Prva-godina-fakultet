#include<stdio.h>
#include<string.h>
void main(){
char pal[50];
int palindrom=1,i=0;
printf("Unesite string: ");
gets(pal);
while(palindrom==1 && i<strlen(pal)/2){
if(pal[i]!=pal[strlen(pal)-i-1]){
palindrom=0;	
}
else{i++;}
}
if(palindrom==1){
printf("Uneti string je palindrom\n");
}
else{
printf("Uneti string nije palindrom\n");
}
}