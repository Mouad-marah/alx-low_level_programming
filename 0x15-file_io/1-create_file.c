#include "main.h"

/**
 * create_file - function declaration
 *
 * @filename: variable pointer
 * @text_content: content file
 *
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int i, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	i = 0;
	while (text_content[i] != '\0')
		i++;

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	write(file, text_content, i);
	return (1);
}
