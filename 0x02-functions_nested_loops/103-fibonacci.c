#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: febonacci sequence
 *
 * Return: always 0 SUCCESS
*/

int main()
{
	int i;
	long int pre= 1;
	long int curr=2;
	long int next;

	printf("%ld, %ld, ", pre, curr)
		while(i < 50)
		{
			next = pre + curr;
			curr = pre;
			pre = next;
			printf("%ld\n",next);
		}
	return 0;
}
