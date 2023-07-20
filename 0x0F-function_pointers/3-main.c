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
	int num1, num2;

	num1 = atoi(char argv[1]);
	num2 = atoi(char argv[3]);
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
	if ((argv[2] == '/' || argv[2] == '*') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", op(num1, num2));
	return (0);
}
