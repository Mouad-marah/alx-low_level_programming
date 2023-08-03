#include "main.h"
/**
 * flip_bits - function decl
 *
 * @n: int arg
 * @m: int arg
 *
 * Return: i SUCCESS
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}
	return (i);
}
