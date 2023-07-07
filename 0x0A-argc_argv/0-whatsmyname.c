#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: length
 * @argv: array of characters
 *
 * Return: 0 always SUCCESS
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
