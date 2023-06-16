#include <stdio.h>

/**
 * main - Entry point
 *
 * Print number by using putchar function
 *
 * Return: 0 SUCCESS*/

int main(void)
{
int i = 0;

while (i < 10)
{
	putchar('0' + i);
	i++;
}
putchar('\n');
return (0);
}
