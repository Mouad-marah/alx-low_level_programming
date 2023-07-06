#include "main.h"

/**
 * find - checks prime number
 *
 * @x: argument
 * @y: argument
 *
 * Return: find
*/
int find(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (find(x + 1, y));
}

/**
 * is_prime_number - function declaration
 *
 * @n: argument
 * Return: prime number
*/

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (find(2, n));
}
