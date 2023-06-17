#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: combination of the two digits
 *
 * Return: 0 always SUCCESS
*/

int main(void)
{
	int i, Div, Mod;

for (i = 1; i < 100; i++)
{
Div = i / 10;
Mod = i % 10;
	if (Div < Mod)
	{
		putchar(Div + '0');
		putchar(Mod + '0');
	if (i < 89)
	{
		putchar(',');
		putchar(' ');
	}
}
	putchar('\n');
return (0);
}
}
