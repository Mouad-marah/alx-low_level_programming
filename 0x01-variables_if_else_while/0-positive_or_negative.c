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
printf("Number %i is positive", n);

else if (n == 0)
printf("Number %i is zero", n);

else
printf("Number %i is negative", n);

}
