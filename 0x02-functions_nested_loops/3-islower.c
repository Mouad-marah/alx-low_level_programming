#include "main.h"

/**
 * _islower - check the declaration founction.
 *
 *
 * Return: valus 0 or 1 .
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
		return (0);
}
