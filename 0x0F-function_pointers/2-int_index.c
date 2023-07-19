#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function declaration
 *
 * @array: my array
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: i if SUCCESS other -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
