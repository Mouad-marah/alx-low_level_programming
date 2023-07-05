#include "main.h"

/**
 * _strlen_recursion - function declaration
 *
 * @s: argument
 *
 * Return: length of my string
*/

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
		return (i = i + 1 + _strlen_recursion(s + 1));
	return (i);
}
