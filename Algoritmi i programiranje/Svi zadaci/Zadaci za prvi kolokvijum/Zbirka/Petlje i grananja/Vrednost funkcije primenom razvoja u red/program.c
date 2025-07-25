#include <stdio.h>
#include <math.h>
void main()
{
    float x, eps, s, a;
    int k;
    a = 1;
    s = 1;
    k = 0;
    printf("Unesite x (vrednost po kojoj razvijamo funkciju) i eps (vrednost do koje razvijamo funkciju): ");
    scanf("%f%f", &x, &eps);
    while (fabs(a / s) > eps)
    {
        a *= x * x / ((2 * k + 2) * (2 * k + 1));
        s = s + a;
        k++;
    }
    printf("Vrednost funkcije ch(%f)=%f", x, s);
    printf("\n");
}