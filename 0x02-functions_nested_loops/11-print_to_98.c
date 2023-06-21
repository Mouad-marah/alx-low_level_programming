#include <stdio.h>

/**
 * print_to_98- check the function code
 *
 * @n: parameter variable
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	if (n < 99)
	{
		for (n = 0; n <= 97; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (i = n ; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}

printf("%d\n", n);
}
