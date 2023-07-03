#include "main.h"

/**
 * _strchr - function declaration
 *
 * @s: pointer
 * @c: char variable
 *
 * Return: s value
*/

char *_strchr(char *s, char c)
{
	int i;

	for  (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
}
