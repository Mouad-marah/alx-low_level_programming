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
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
