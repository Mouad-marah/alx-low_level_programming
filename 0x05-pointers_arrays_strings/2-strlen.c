/**
 * _strlen - function declaration
 *
 * @s: variable 
*/

int _strlen(char *s)
{
	char *str = s;

	while (*str != '\0')
	{
		str++;
	}
	return str - s;
}
