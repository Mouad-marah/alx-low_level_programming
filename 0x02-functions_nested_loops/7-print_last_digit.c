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

	if (ligit <= 9)
	{
		ligit = -1 * ligit;
		_putchar(ligit + '0');
		return (ligit);
	}
	else
	{
		ligit = n % 10;
		_putchar(ligit + '0');
		return (ligit);
	}
}
