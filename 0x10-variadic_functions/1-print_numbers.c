#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/***/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int result;

	va_start(args, n);
	result = 0;
	for (i = 0; i < n; i++)
	{
		result = va_arg(args, int);
		printf("%i", result);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}

