#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - function declaration
 *
 * @s1: string
 * @s2: string
 *
 * Return: nstr
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int len;
	char *nstr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	leng = strlen(s1) + strlen(s2) + 1;
	nstr = (char *) malloc(sizeof(char) * len);

	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < leng; i++)
	{
		if (i < (int)strlen(s1))
		{
			nstr[i] = s1[i];
		} 
		else
		{
			nstr[i] = s2[i - strlen(s1)];
		}
	}

	if (nstr == NULL)
	{
		return ("");
	}

	return (nstr);
}
