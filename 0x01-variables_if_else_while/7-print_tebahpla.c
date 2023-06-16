#include <stdio.h>

/**
 * main - Entry
 *
 * Print lowercase alphabet in reverse
 *
 * Return: 0 awlays SUCCESS
*/

int main(void)
{
char last_letter = 'z';
while (last_letter >= 'a')
{
	putchar(last_letter);
	last_letter--;
}
putchar('\n');
return (0);
}
