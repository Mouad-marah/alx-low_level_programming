#include <stdio.h>

/**
 * main - Entry point
 *
 * Descrition: made the natural numbers
 *
 * Return: 0 ALWAYS SUCCESS
 */

int main(void)
{
	int number = 0;
	int sum = 0;

		while (number <= 1023)
		{
			if (number % 3 == 0 || number % 5 == 0)
			{
				sum += number;
			}

			number++;
		}

	printf("%i\n", sum);
	return (0);
}
