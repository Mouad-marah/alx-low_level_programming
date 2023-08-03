#include "main.h"
/**
 * clear_bit - function dec
 *
 * @n: int arg
 * @index: nulber to check
 *
 * Return: 1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	if (*n & m)
		*n ^= m;
	return (1);
}
