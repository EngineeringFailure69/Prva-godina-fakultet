#include "stdio.h"
int sumiraj(int a[], int n, int dodatak)
{
       int i, suma = 0;
       for (i = 0; i < n; i++)
       {
              suma = suma + a[i] + dodatak;
       }
       return suma;
}
int main()
{
       int a[100], n, dodatak, i, suma;
       printf("Unesite broj elemenata niza: ");
       scanf("%d", &n);
       printf("Unesite broj koji dodajemo svakom elementu niza: ");
       scanf("%d", &dodatak);
       printf("Unesite elemente niza: ");
       for (i = 0; i < n; i++)
       {
              scanf("%d", &a[i]);
       }
       suma = sumiraj(a, n, dodatak);
       printf("%d", suma);

       return 0;
}