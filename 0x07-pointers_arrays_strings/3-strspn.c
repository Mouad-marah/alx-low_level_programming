#include "main.h"

/**
 * _strspn - function declarati
 *
 * @s: pointer
 * @accept: variable pointer
 *
 * Return: j value
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; s[j]; j++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[i])
		{
			break;
		}
	}
return (j);
}
