#include "main.h"

/**
 * factorial - function declaration
 *
 * @n: argument
 *
 * Return: factorial of a number
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else  if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
