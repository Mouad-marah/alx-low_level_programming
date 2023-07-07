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
	int i, result;

	result = 0;
	if (argc <= 2)
		printf("0\n");

	else if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result = result + atoi(argv[i]);
			}
		}
		printf("%i\n", result);
	}
	return (0);
}
