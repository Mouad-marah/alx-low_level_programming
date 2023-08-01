#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function declaration
 *
 * @h: pointer arg to list
 *
 * Return: counters value
*/
size_t print_listint(const listint_t *h)
{
	size_t c;

	c = 0;
	while (h)
	{
		printf("%d\n", h->n);

		c++;
		h = h->next;
	}

	return (c);
}
