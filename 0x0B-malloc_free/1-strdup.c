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
	int i;
	char *a;
	int len;

	if (str == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
	}
	a = malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);
	while (i < len)
	{
		a[i] = *str;
		str++;
		i++;
	}
	return (a);
}

