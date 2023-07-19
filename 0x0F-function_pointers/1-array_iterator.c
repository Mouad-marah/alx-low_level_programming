#include "function_pointers.h"

/**
 * array_iterator - function declaration
 *
 * @array: my array
 * @size: size of array
 * @action: function pointers
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
}
