//Zamena elemenata koji nisu na glavnoj dijagonali dveju matrica
#include "stdio.h"
int main()
{
    int a[100][100];
    int b[100][100];
    int n, i, j;
	printf("Unesite dimenziju matrice(nxn): ");
    scanf("%d", &n);
	printf("Unesite elemente prve matrice:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
		printf("Unesite elemente druge matrice:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if (j > i) {
                int temp = a[i][j];
                a[i][j] = b[i][j];
                b[i][j] = temp;
            }
        }
		printf("Matrice posle izmene:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

 

       return 0;

}