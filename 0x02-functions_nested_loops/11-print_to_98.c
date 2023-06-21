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
	if (n < 98)
	{
		for (n = 0; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
