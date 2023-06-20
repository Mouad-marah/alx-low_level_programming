#include "main.h"

/**
 * print_alphabet - function declaration
 *
 * Description: print alphabets
 *
 * Return: 0 always SECCESS
*/

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
