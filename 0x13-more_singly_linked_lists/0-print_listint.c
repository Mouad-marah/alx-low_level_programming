#include "lists.h"

/**
 * print_listint - function declaration
 *
 * @h: pointer arg to list
 *
 * Return: counters value
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h
	size_t counter = 0;

	while (node != 0)
	{
		printf("%i\n", node->n);
		counter++;
		node = node->next;
	}
	return (counter)
}
