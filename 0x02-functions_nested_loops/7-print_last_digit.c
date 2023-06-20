#include "main.h"

/**
 * print_last_digit - check the function code
 *
 *@n: integer number
 *
 * Return: value depend to conditions.
 */

int print_last_digit(int n)
{
	int ligit;
	ligit = n % 10;

	if (n <= 9)
	{
		ligit = -1 * ligit;
		_putchar((ligit) + '0');
		return (ligit);
	}
	else
	{
		_putchar((ligit) + '0');
		return (ligit);
	}
}
