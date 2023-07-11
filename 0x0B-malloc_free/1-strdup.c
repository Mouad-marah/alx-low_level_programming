#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function declaration
 *
 * @str: argument of string
 *
 * Return: a
*/

char *_strdup(char *str)
{
	int i = 0;
	char *a;

	a = malloc(sizeof(char) * 6);

	if (str == NULL || str > '\0')
		return (NULL);
	while (i < 7)
	{
		a[i] = *str;
		i++;
		str++;
	}
	return (a);
}
