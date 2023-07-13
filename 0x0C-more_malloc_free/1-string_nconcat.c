#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - function declaration
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: a
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int len = strlen(s1);
	unsigned int len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = malloc(len + n + 1);

	if (n >= len2)
	{
		n = len2;
	}
	if (a != NULL)
        {
		strcpy(a, s1);
		strncat(a, s2, n);
	}
	return (a);
}
