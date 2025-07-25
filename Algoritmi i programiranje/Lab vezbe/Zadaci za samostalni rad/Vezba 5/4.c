#include <stdio.h>
void minimax(int a[], int n, int *max, int *min)
{
    int i;
    *max = *min = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > a[*max])
        {
            *max = i;
        }
        else if (a[i] < a[*min])
        {
            *min = i;
        }
    }
}
void main()
{
    int n, a[100], i, min, max;
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    printf("Unesite elemente niza: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    minimax(a, n, &max, &min);
    printf("max=%d i min=%d", max, min);
    printf("\n");
}