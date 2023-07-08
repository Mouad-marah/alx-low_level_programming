#include "main.h"

/**
 * _strpbrk - function declaration
 *
 * @s: pointer
 * @accept: pointer
 *
 * Return: 0 always SUCCESS
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
return (0);
}
