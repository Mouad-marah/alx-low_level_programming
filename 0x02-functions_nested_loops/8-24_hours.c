#include "main.h"

/**
 * jack_bauer - check the function code
 *
 * Count minute of the day
 *
 * Return:  return no value
 */

void jack_bauer(void)
{
	int hour, min, sec02, sec01, i, j;

	for (j = 0; j < 24; j++)
	{
		hour = j / 10;
		min = j % 10;

		for (i = 0; i < 60; i++)
		{
			sec02 = i / 10;
			sec01 = i % 10;

			if (hour < sec02 || (hour == sec02 && sec02 >= min))
			{
				_putchar(hour + '0');
				_putchar(min + '0');
				_putchar(':');
				_putchar(sec02 + '0');
				_putchar(sec01 + '0');
				_putchar('\n');
			}
		}
	}
}
