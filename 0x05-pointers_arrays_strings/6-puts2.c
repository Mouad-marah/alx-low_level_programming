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
		if ((*str + '0') % 2 == 0)
		{
			putchar(*str + 1);
		}
			str++;
	}
putchar('\n');
}
