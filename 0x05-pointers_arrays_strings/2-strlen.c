/**
 * _strlen - function declaration
 *
 * @s: variable
 *
 * Return: value of length
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
