#include "lists.h"

/**
 * reverse_listint - function declaration
 *
 * @head: pointer to the list
 *
 * Return: ping value
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t ping;
	const listint_t *in_node;

	in_node = head;
	ping = 0;
	if (!head)
		exit(98);
	while (in_node)
	{
		printf("[%p] %i\n", in_node, in_node->n);
		in_node = in_node->next;
		ping++;
	}
	return (ping);
}
