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
	int i , res , mod;

for (i = 1; i < 90; i++)
{
	res = i / 10;
	mod = i % 10;
	if (res < mod)
	{
		putchar(res + '0');
		putchar(mod + '0');
	}
	if (i < 89)
	{
		putchar(',');
		putchar(' ');
	}
}
return (0);
}
