#include "lists.h"

/**
 * get_nodeint_at_index - function declaration
 *
 * @head: pointer to the list
 * @index: nth node
 *
 * Return: a NULL value
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int c;

	node = head;
	c = 0;
	while (node && c != index)
	{
		c++;
		node = node->next;
	}
	if (node && c == index)
	{
		return (node);
	}
	return (NULL);
}
