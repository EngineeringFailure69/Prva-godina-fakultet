#include "stdio.h"

int main()

{

        int s = 0, i, j;
	int jedinica = -1;
	int n;
	scanf("%d", &n);

	if (n < 1) {
		printf("Neispravan unos!");
		return 1;
	}

	for (i = 0; i < n; i++)
	{
		int fakt = 1;
		for (j = 1; j <= i + 1; j++)
		{
			fakt *= j;
		}

		s += jedinica * fakt;

		jedinica *= -1;
	}

	printf("%d", s);

 

       return 0;

}