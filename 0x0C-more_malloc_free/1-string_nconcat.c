#include "main.h"
#include <stdlib.h>
#include <string.h>

/***/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *a;
	unsigned int len = strlen(s1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = malloc(len + n);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		a[i] = s1[i];
	}
		j = 0;
	while (i < len + n)
	{
		a[i] = s2[j];
		j++;
		i++;
	}
	return (a);
}
