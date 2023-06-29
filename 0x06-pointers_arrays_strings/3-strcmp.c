#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Difference of the two strings, 0 if they're equal.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
