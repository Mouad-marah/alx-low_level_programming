#include "main.h"

/**
 * _strchr - function declaration
 *
 * @s: pointer
 * @c: char variable
 *
 * Return: 0 value always SUCCESS
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
	if (*(s + i) == c)
	{
		return (s + i);
	}
return (0);
}
