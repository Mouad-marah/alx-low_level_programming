#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: combinations of two two-digit numbers
 *
 * Return: 0
*/

int main(void)
{
	int a, b, c, d, i, j;
for (j = 0; j < 100; j++)
{
	a = j / 10;
	b = j % 10;
	for (i = j + 1; i < 100; i++)
	{
	c = i / 10;
	d = i % 10;
	if (a < c || (a == c && d > b))
	{
	putchar(a + '0');
	putchar(b + '0');
	putchar(' ');
	putchar(c + '0');
	putchar(d + '0');
	if (a != 9 || b != 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
}
putchar('\n');
return (0);
}
