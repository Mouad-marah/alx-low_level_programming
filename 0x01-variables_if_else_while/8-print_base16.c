#include <stdio.h>

/**
 * main - Entry point
 *
 * Mix numbers whith alphabet
 *
 * Return: 0 SUCCESS
*/

int main(void)
{
int Number = 0;
char letter = 'a';

while (Number <= 9)
{
putchar('0' + Number);
Number++;
}
while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
