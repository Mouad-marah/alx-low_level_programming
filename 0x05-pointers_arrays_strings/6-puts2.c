#include <stdio.h>

/**
 * puts2 - function declaration
 *
 * @str: arrgument of function
*/

void puts2(char *str)
{
	int a = 0;

	while ((*str + a) != '\0')
	{
		putchar(*str + a);
		a++;
	}

putchar('\n');
}
