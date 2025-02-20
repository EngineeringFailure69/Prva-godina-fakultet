#include<stdio.h>
#include<string.h>
void zamena(char string[100][100], char pom[100], int n){
int i, j;
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(strcmp(string[i], string[j])>0){
strcpy(pom, string[i]);
strcpy(string[i], string[j]);
strcpy(string[j], pom);
}
}
}
}
void main(){
char string[100][100], pom[100], min[100], max[100];
int i, j, n;
printf("Unesite broj stringova: ");
scanf("%d", &n);
printf("Unesite stringove: ");
for(i=0;i<n;i++){
scanf(" %[^\n]", &string[i]);
}
printf("Uneti stringovi su: ");
for(i=0;i<n;i++){
printf("%s ", string[i]);
}
printf("\n");
zamena(string, pom, n);
printf("Niz nakon uredjenja ");
for(i=0;i<n;i++){
printf("%s ", string[i]);
}
printf("\n");
strcpy(min, string[0]);
for(i=1;i<n;i++){
if(strlen(string[i])<strlen(min)){
strcpy(min, string[i]);	
}
}
printf("String sa najmanjom duzinom u nizu je: %s\n", min);
strcpy(max, string[0]);
for(i=1;i<n;i++){
if(strlen(string[i])>strlen(max)){
strcpy(max, string[i]);	
}
}
printf("String sa najvecom duzinom u nizu je: %s\n", max);
}