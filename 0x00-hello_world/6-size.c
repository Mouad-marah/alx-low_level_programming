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
	printf("size of a char: %li byte(s)\n",sizeof(char));
	printf("size of a int: %li byte(s)\n",sizeof(int));
	printf("size of a long int: %li byte(s)\n",sizeof(long int));
	printf("size of a long long: %li byte(s)\n",sizeof(long long));
	printf("size of a float: %li byte(s)\n",sizeof(float));
}
