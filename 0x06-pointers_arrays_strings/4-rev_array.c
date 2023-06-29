#include "main.h"

/**
 * reverse_array - Reverses content of an array integer.
 *
 * @a: Integer array pointer.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = n - 1; i >= n / 2; i--)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
