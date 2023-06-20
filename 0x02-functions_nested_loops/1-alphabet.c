#include "main.h"

/**
 * main - Entry point
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
