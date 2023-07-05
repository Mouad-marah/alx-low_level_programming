#include "main.h"

/**
 * factorial - function declaration
 *
 * @n: argument
 *
 * Return: factoriel of a number
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else  (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
