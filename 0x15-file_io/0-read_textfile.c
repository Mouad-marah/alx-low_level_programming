#include "main.h"

/**
 * read_textfile - function declaration
 *
 * @filename: variable pointer
 * @letters: size letters
 *
 * Return: letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, letter, wile;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	lettre = read(file, text, letters);
	w = write(STDOUT_FILENO, text, lettre);

	close(file);
	return (w);
}
