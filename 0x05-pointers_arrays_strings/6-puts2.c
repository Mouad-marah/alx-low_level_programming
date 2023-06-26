#include <stdio.h>

/**
 * puts2 - function declaration
 *
 * @str: arrgument of function
*/

void puts2(char *str)
{
	int number = 0;

	while (*(str + number) != '\0')
	{
		if (number % 2 == 0)
			_putchar(*(str + number));
	number++;
	}
putchar('\n');
}
