#include "main.h"

/**
 * print_alphabet_x10 - function declaration
 *
 * print alphabets 10 times
 *
 * Return: 0 SUCCESS
*/

void print_alphabet_x10(void)
{
	int i;
	char letter = 'a';

	for (i = 0; i <= 10; i++)
{
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	letter = 'a';
	_putchar('\n');
}
	return (0);
}
