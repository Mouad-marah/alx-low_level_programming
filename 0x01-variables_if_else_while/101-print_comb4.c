#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: combination of the 3 digits
 *
 * Return: 0 always SUCCESS
*/

int main(void)
{
	int i, Div, Mod, DivMod;

for (i = 1; i < 1000; i++)
{
Div = i / 100;
DivMod = (i / 10) % 10;
Mod = i % 10;
	if (Div < DivMod && DivMod < Mod)
	{
		putchar(Div + '0');
		putchar(DivMod + '0');
		putchar(Mod + '0');
	if (i < 789)
	{
		putchar(',');
		putchar(' ');
	}
	}
}
	putchar('\n');
return (0);
}
