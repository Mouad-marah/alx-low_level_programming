#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function declaration
 *
 * @h: pointer arg to list
 *
 * Return: counters value
*/
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%i\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
