#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function declaration
 *
 * @nmemb: pointer argument
 * @size: size of chars
 *
 * Return: pointer a
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (i = 0 ; i < nmemb * size; i++)
		a[i] = 0;
	return (a);
}
