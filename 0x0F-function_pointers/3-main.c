#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: length
 * @argv: argument array
 *
 * Return: values of condition
*/
int main(int argc, char *argv)
{
	int (*op)(int, int);
	int res;

	/*if the number of arguments is wrong, print Error , return 98*/
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	/*if the operator is none of the above, print Error, return 99*/
	if (!op)
	{
		printf("Error\n");
		return (99);
	}
	/*if the user tries to divide (/ or %) by 0, print Error, return 100*/
	if ((argv[2] == '/' || argv[2] == '*') && argv[3] == 0)
	{
		printf("Error\n");
		return (100);
	}
	res = op(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}
