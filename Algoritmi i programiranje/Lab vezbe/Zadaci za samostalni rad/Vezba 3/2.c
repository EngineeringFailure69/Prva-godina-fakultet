#include <stdio.h>
void main()
{
	int a[10], n, i, j, pom = 0;
	float prosek = 0, suma = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] < a[j + 1])
			{
				pom = a[j];
				a[j] = a[j + 1];
				a[j + 1] = pom;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		suma = suma + a[i];
	}
	prosek = suma / n;
	printf("prosek je: %f\n", prosek);

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
}