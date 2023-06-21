#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: febonacci sequence
 *
 * Return: always 0 SUCCESS
*/

int main(void)
{
	int i = 0;
	int pre = 0;
	int curr = 1;
	int next = 0;

		while (i < 4000000)
		{
			next = pre + curr;
			pre = curr;
			curr = next;

			if ((next % 2) == 0)
			{
				i = i + next;
			}
		}
	printf("%i\n", i);
	return (0);
}
