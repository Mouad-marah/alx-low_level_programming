#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *main -  Entre point
 *
 *@argc: length
 *@argv: character pointer
 *
 *Return: depend to conditions
*/
int main(int argc, char *argv[])
{
	int i, swap;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	swap = atoi(argv[1]);

	if (swap < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < (swap - 1); i++)
		printf("%02hhx ", ((char *)main)[i]);
	printf("%02hhx\n", ((char *)main)[i]);
	return (0);
}
