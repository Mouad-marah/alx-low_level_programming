#include "main.h"
/**
 * binary_to_uint - function declaration
 *
 * @b: char arg
 *
 * Return: a SUCCESS
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	int len, baseTwo;

	a = 0;
	len = 0;
	if (!b)
		return (0);
	while (b[len] != '\0')
		len++;
	for (len--, baseTwo = 1; len >= 0; len--, baseTwo *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			a += baseTwo;
	}
	return (a);
}
