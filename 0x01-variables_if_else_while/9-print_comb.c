#include <stdio.h>

/**
 * main- Entry point
 *
 * Combo number with space and ,
 *
 * Return: 0 always SUCCESS
*/

int main(void)
{
int i = 0;

while (i <= 9)
{
	putchar('0' + i);
	i++;
if (i <= 9)
{
	putchar(' ');
	putchar(',');
}
}
putchar('\n');
return (0);
}
