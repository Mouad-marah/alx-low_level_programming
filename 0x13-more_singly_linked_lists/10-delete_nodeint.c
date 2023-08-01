#include "lists.h"

/**
 * delete_nodeint_at_index - function declaration
 *
 * @head: pointer to the list
 * @index: position of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *in_node = *head;
	listint_t *delete = *head;
	unsigned int idx, c = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = delete->next;
		free(delete);
		return (1);
	}
	idx = index - 1;
	while (in_node && c != idx)
	{
		c++;
		in_node = in_node->next;
	}
	if (c == idx && in_node)
	{
		delete = in_node->next;
		in_node->next = delete->next;
		free(delete);
		return (1);
	}

	return (-1);
}
