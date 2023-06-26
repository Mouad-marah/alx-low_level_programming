#include <stdio.h>
/**
 * rev_string - function declaration
 *
 * @s: arrgument of the function
*/
void rev_string(char *s)
{
	int size = 0;
	int start = 0;
	int i;

	while (s[size] != '\0')
	{
		size++;
	}

		while (start < size)
		{
			char temp = s[start];
			s[start] = s[size - 1];
			s[size - 1] = temp;
			start++;
			size--;
		}
}
