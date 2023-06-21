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
	long int pre = 1;
	long int curr = 2;
	long int next;

		while (i < 50)
		{
			next = pre + curr;
			pre = curr;
			curr = next;

			printf("%ld", next);

			if (i <	48)
			{
				printf(", ");
			}
				i++;
		}
	prnitf("\n");
	return (0);
}
