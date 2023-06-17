#include <stdio.h>

/**
 * main - Ebtry point
 *
 * Discription: combination of the two digits
 *
 * Return: 0 always SUCCESS
*/

int main(void)
{
	int i;

for (i = 1; i < 100; i++)
{
	if (i / 10 < i % 10)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
	}
	if (i < 89)
	{
		putchar(',');
		putchar(' ');
	}
}
	putchar('\n');

return (0);
}
