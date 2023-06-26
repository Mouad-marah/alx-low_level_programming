#include <stdio.h>

/**
 * print_rev - function declaration
 *
 * @s: arrgument
*/
void print_rev(char *s)
{
	char *str = s;

	while (*str != '\0')
	{
		str++;
	}
	str--;
		while (str >= s)
		{
			putchar(*str);
			str--;
		}
	putchar('\n');
}
