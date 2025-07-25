#include <stdio.h>
void main()
{
    int i, n, br1 = 0, br2 = 0, pom;
    float x, y;
    printf("Unesite broj tacaka koje testiramo: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        pom = i + 1;
        printf("Unesite x koordinatu %d. tacke: ", pom);
        scanf("%f", &x);
        printf("Unesite y koordinatu %d. tacke: ", pom);
        scanf("%f", &y);
        if (y >= 1 && y <= 2 * x / 3 + 5. / 3. && y <= -2 * x + 7)
        {
            br1++;
        }
        else
        {
            br2++;
        }
    }
    printf("Broj tacaka unutar trougla je: %d\n", br1);
    printf("Broj tacaka van trougla je: %d\n", br2);
}