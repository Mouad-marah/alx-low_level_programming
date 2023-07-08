#include "main.h"

/**
 *  _atoi - convert a string to an integer
 *
 * @s: string to convert
 *
 * Return: the converted string
 */
int _atoi(char *s)
{
	int i = 0, x = 1, f = 0;
	unsigned int res = 0;

	while (*(s + i))
	{
		if (*(s + i) == '-')
	{
		x *= -1;
	}
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			res *= 10;
			res += *(s + i) - '0';
			f = 1;
		}
		else if (f)
			break;
		i++;
	}
	return (res * x);
}
