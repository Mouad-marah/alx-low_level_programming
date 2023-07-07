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
	int i, j, result;

	result = 0;
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		result += atoi(argv[i]);
		}
	printf("%i\n", result);
	return (0);
}
