#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic function declaration
 *
 * @n: const argument
 * @...: number of arguments
 * Return: the value of sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	va_start(args, n);
	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum = va_arg(args, int);
	}
	return (sum);
}
