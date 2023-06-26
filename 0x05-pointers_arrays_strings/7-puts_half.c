#include <stdio.h>

/***/

void puts_half(char *str)
{
	int length, mid;

	length = 0;
	mid = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
		if (length % 2 == 0)
		{
			mid = length / 2;
		}
		else
		{
			mid = (length + 1) /2;
		}
	str = str - length;
		while (*(str + mid))
		{
			putchar(*(str + mid));
			str++;
		}
	putchar('\n');
}
