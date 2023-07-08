#include "main.h"

/**
 * _memset - function declaration
 *
 * @s: pointer of the memory
 * @b: char variable
 * @n: first bytes of the memory
 *
 * Return: s SUCCESS
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
return (s);
}
