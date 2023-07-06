#include "main.h"

/**
 * check - checks the function
 *
 * @x: argument
 * @y: argument
 *
 * Return: value of square
*/

int find(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
return (find(x + 1, y));
}

/**
 * _sqrt_recursion - function declaration
 *
 * @n: the squar root
 *
 * Return: value of squarRoot
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
return (find(1, n));
}
