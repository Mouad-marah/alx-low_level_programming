
/**
 * _strcpy - function declaration
 *
 * @src: arrgument
 *
 * @dest: arrgument
 *
 * Return: dest value
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
