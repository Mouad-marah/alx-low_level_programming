#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - function declaration
 *
 * @size: size of array
 * @c: specify char
 *
 * Return: a pointer
*/

char *create_array(unsigned int size, char c)
{
	int i;
	char *a;

	a = malloc(sizeof(char) * size);

	if (size == 0 || a == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
