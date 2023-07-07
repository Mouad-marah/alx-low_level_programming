#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: length
 * @argv: sting of chars
 *
 * Return: 0 SUCCESS
*/

int main(int argc, char *argv[])
{
	int multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", multi);
	}
	return (0);
}
