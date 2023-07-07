#include <stdio.h>
#include "main.h"

/**
 * _puts - function declaration
 *
 * @str: variable
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
