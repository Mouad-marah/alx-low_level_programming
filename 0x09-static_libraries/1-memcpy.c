#include "main.h"

/**
 * _memcpy - function declaration
 *
 * @dest: pointer of memory area
 * @src: pointer of the memory area
 * @n: number of bytes
 *
 * Return: dest value
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
