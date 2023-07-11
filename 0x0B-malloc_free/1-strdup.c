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
	char *a;
	int len;
	int i;

	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len])
	{
		len++;
	}
	a = malloc(sizeof(char) * len + 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		a[i] = str[i];
		a[len] = '\0';
	}
	return (a);
}

