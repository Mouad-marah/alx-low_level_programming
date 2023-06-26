#include <stdio.h>

/***/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		if (i != n -1)
			printf("%i, ", *(a + i));
		else
			printf("%i", *(a + i));
	}
}
