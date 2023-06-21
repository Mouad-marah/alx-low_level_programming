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
	long int pre = 0;
	long int curr = 1;
	long int next;

		while (i < 50)
		{
			next = pre + curr;
			pre = curr;
			curr = next;

			printf("%ld", next);

			if (i < 49)
			{
				printf(", ");
			}
				i++;
		}
	printf("\n");
	return (0);
}
