#include "main.h"

/**
 * _isalpha - check the function  code.
 *
 *@c: charachter
 *
 * Return: Always 0 or 1 
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
