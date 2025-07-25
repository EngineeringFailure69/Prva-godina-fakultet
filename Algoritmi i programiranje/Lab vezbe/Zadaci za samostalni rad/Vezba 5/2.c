#include <stdio.h>
void zamena(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    zamena(&a, &b);
    zamena(&b, &c);
    printf("%d %d %d", a, b, c);
    printf("\n");
}