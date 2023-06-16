#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Discription: program takes a random number inside condition
 *
 * Return: 0 always true
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	printf("%i is positive", n);

	else if (n == 0)
	printf("%i is zero", n);

	else
	printf("%i is negative", n);
	return (0);

}
