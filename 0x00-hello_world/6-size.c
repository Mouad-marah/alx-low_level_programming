#include <stdio.h>

/**
*main - Entry point
*
*Discription: print size of data type
*
*Return:always 0 (SUCCESS)
*/

int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of a int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long: %d byte(s)\n", sizeof(long long));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
