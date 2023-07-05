#include "main.h"

/**
 * _puts_recursion - function declartion
 *
 * @s: pointer argument
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	_putchar('\n');
}
