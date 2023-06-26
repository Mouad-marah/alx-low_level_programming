#include <stdio.h>
/**
 * rev_string - function declaration
 *
 * @s: arrgument of the function
*/

void rev_string(char *s)
{
	int length, mid, i, temp, end;

	length = sizeof(s) / sizeof(s[0]);
	end = length;
	mid = length / 2;

	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[end - i];
		s[end - i] = temp;
	}
}
