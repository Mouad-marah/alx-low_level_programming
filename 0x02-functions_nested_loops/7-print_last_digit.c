#include "main.h"

/**
 * print_last_digit - check the function code
 *
 *
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int ligit;
	ligit = n % 10;

	_putchar(ligit + 'n');
	return (ligit);
}
