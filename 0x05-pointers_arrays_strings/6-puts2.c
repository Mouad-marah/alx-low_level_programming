#include <stdio.h>

/**
 * puts2 - function declaration
 *
 * @str: arrgument of function
*/

void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			putchar(*str);
			str++;
		}
	}
putchar('\n');
}
