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

	len = sizeof(str) / sizeof(str[0]);
	a = malloc(sizeof(char) * len);

	if (str == 0 || a == 0)
		return (NULL);
	while (i < len)
	{
		a[i] = *str;
		str++;
		i++;
	}
	return (a);
}

