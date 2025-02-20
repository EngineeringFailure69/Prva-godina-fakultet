#include<stdio.h>
void main(){
FILE *f1, *f2, *f3;
int skup1[100], skup2[100], skup3[100], i, n, m, k, p=0;
f1=fopen("skup1.txt", "r");
fscanf(f1, "%d", &n);
for(i=0;i<n;i++){
fscanf(f1, "%d", &skup1[i]);
}
f2=fopen("skup2.txt", "r");
fscanf(f2, "%d", &m);
for(i=0;i<m;i++){
fscanf(f2, "%d", &skup2[i]);
}
f3=fopen("skup3.txt", "w");
k=n+m;
for(i=0;i<n;i++){
skup3[i]=skup1[i];
}
for(i=n;i<k;i++){
skup3[i]=skup2[p];
p++;
}
for(i=0;i<k;i++){
fprintf(f3, "%d ", skup3[i]);
}
printf("\n");
fclose(f1);
fclose(f2);
fclose(f3);
}