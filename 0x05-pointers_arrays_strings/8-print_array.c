#include <stdio.h>

/**
 * print_array - function declaration
 *
 * @a: arrgument
 *
 * @n: arrgument
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%i, ", *(a + i));
		else
			printf("%i", *(a + i));
	}
	printf("\n");
}
