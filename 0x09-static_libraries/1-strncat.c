#include "main.h"

/**
 * _strncat - Concatenate two strings with n bytes from src.
 *
 * @dest: String pointer receiving append.
 *
 * @src: String pointer to append.
 *
 * @n: Number of byte to be appended from src.
 *
 * Return: dest pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
	{
		i++;
	}
	while ((src + j < src + n) && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
