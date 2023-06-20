#include "main.h"

/**
 * times_table - check the function code
 *
 * Display: 9 times table
 *
 * Return: Always .
 */

void times_table(void)
{
	int a, b, c, i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 1; j < 10; j++)
		{
			a = i * j;
			c = a % 10;
			b = a / 10;

				if (a < 10)
				{
					_putchar(' ');
					_putchar(c + '0');
				}
				else
				{
					_putchar(b + '0');
					_putchar(c + '0');
				}

			if (j < 10)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
			_putchar('\n');
	}
}
