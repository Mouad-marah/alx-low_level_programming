#include "main.h"

/**
 * get_endianness - function declaration
 *
 * Return: _char value
 */
int get_endianness(void)
{
	unsigned long int i;
	char *_char;

	i = 1;
	_char = (char *) &i;
	return ((int)*_char);
}
