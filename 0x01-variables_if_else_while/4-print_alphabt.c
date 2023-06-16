#include <stdio.h>

/**
 * main - Entry point
 *
 * Skip two chars
 *
 * Return: 0 always SUCCESS
*/

int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
