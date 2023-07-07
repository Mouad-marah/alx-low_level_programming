#include <stdio.h>

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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
