#include <stdio.h>
void main()
{
    float x, y;
    int pom, i;
    for (i = 0; i < 10; i++)
    {
        pom = i + 1;
        printf("Unesite x i y koordinate %d. tacke: ", pom);
        scanf("%f%f", &x, &y);
        if (y >= 2 * x && x > 0 && y <= 2)
        {
            printf("Tacka pripada oblasti: A\n");
        }
        else if (y < 2 * x && y < 2 && y > 0 && x <= 3)
        {
            printf("Tacka pripada oblasti: B\n");
        }
        else if (y > 2 && y < -2 * x + 8 && y < 2 * x)
        {
            printf("Tacka pripada oblasti: C\n");
        }
        else if (x > 3 && y > 0 && y <= -2 * x + 8)
        {
            printf("Tacka pripada oblasti: D\n");
        }
        else
        {
            printf("Tacka ne pripada ni jednoj oblasti\n");
        }
    }
}