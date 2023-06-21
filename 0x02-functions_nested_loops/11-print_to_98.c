#include <stdio.h>

/**
 * print_to_98- check the function code
 *
 * @n: parameter variable
 *
 * Return:
 */
void print_to_98(int n)
{
	while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98\n");
}
