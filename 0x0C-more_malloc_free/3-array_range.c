#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function declaration
 *
 * @min: start argument
 * @max: last argument
 *
 * Return: a
*/

int *array_range(int min, int max)
{
	int i;
	int len;
	int *a;

	len = max - min + 1;
	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len ; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
