#include "main.h"
#include <stdlib.h>

/**
 **malloc_checked - function declaration
 *
 *@b: argument
 *
 *Return: p
*/

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
