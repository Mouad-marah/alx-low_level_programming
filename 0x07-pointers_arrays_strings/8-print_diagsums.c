#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function declaration
 *
 * @a: variable
 * @size: pointer size
*/

void print_diagsums(int *a, int size)
{
	int i, s, s1; 

	s = 0
	s1 = 0;

	for (i = 0; i < size; i++)
	{
		s += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		a -= size;
	}
printf("%i, %i\n", s, s1);
}
