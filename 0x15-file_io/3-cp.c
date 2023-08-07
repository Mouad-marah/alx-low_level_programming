#include "main.h"
/**
 * main - function declaration
 *
 * @argc: arguments
 * @argv: double pointer
 *
 * Return: letters
*/
int main(int argc, char **argv)
{
	int char1, char2, i;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	char1 = open(argv[1], O_RDONLY);
	if (char1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	char2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((i = read(char1, buffer, 1024)) > 0)
	{
		if (write(char2, buffer, i) != i || char2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(char1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", char1);
		exit(100);
	}
	if (close(char2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", char2);
		exit(100);
	}
	return (0);
}
