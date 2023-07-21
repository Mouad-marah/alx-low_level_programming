#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

/**
 * print_all - variadic function declaration
 *
 * @format: argument
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *str;

	i = 0;
	va_start(args, format);
	while (format[i] && format)
	{
		j = 0;
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				va_arg(args, char *);
				if (str != 0)
					str = "(nil)";
				printf("%s", str);
			default:
				j = 0;
				brea;
		}
		if (format[i] && j)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}

