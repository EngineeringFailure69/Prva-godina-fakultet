#include <stdio.h>
void main()
{
    FILE *f1, *f2;
    int i, n, niz[100], suma = 0;
    float as;
    f1 = fopen("brojevi.txt", "r");
    f2 = fopen("brojevi.txt", "a");
    fscanf(f1, "%d", &n);
    for (i = 0; i < n; i++)
    {
        fscanf(f1, "%d", &niz[i]);
    }
    for (i = 0; i < n; i++)
    {
        suma = suma + niz[i];
    }
    as = suma / n;
    fprintf(f2, "\n%.2f\n", as);
    fclose(f1);
    fclose(f2);
    printf("Uspesno upisano u fajl\n");
}