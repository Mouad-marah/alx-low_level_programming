#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - function declaration
 *
 * @ptr: pointer string
 * @old_size: size of string
 * @new_size: new size
 *
 * Return: a
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	a = malloc(new_size);
	if (a != NULL)
	{
		memcpy(a, ptr, old_size);
		free(ptr);
	}
	return (a);
}
