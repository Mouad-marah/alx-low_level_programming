#include "lists.h"

/**
 * listint_len - function declaration
 *
 * @h: pointer to the list
 *
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t c;

	c = 0;
	while (h)
	{
		c++;
		h = h->next;
	}

	return (c);
}
