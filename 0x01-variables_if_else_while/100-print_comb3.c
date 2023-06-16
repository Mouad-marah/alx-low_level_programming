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
	int Div = i / 10;
	int Mod = i % 10;

for (i = 1; i < 90; i++)
{

	if (Div < Mod)
	{
		putchar(Div + '0');
		putchar(Mod + '0');
	}
	if (i < 89)
	{
		putchar(',');
		putchar(' ');
	}
}
return (0);
}
