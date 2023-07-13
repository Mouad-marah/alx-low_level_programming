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
	unsigned int i, j;
	char *a;
	unsigned int len = strlen(s1);
	unsigned int len2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = malloc(len + n + 1);

	if (a == NULL)
		return (NULL);
	if (n >= len2)
	{
		n = len2;
	}

	for (i = 0; i < len; i++)
	{
		a[i] = s1[i];
	}
		j = 0;
	while (i < len + n)
	{
		a[i] = s2[j];
		j++;
		i++;
	}
	a[i] = '\0';
	return (a);
}
