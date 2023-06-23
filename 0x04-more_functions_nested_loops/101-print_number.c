#include "main.h"

/**
 * print_number - check the function code
 *
 * @n: variables
 *
 * Return: Always
 */

void print_number(int n)
{
	unsined int integer = n;

	if (integer / 10)
	{
		print_number(integer / 10)
	}
	else
	{
		_putchar(integer % 10 + '0');
	}
	if (integer % 10)
	{
		integer = -n;
		_putchar(45);
	}
}

