#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: length
 * @argv: string of chars
 *
 * Return: 0 laways SUCCESS
*/
int main(int argc, char *argv[])
{
	argv++;

	if (argc >= 0)
	{
		printf("%i\n", argc--);
	}
	return (0);
}
