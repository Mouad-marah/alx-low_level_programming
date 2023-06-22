#include "main.h"

/**
 *  - check the code.
 *
 *@n: variable
 *
 * Return: Always
 */

void print_line(int n)
{
	int c , i;

	for (c = 0; c < n; c++)
	{
		for (i = 0; i < n; i++)
		{
		if (c == i)
			_putchar(92);
		else
			_putchar(32);
		}
			_putchar('\n');
		}
		if (n <= 0)
			_putchar('\n');
}
