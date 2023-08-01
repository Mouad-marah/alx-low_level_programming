#include "lists.h"

/**
 * insert_nodeint_at_index - funcion declaration
 *
 * @head: pointer to the list
 * @idx: position
 * @n: data
 *
 * Return: NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *in_node = *head;
	listint_t *new_node;
	unsigned int index, c = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	index = idx - 1;
	while (in_node && c != index)
	{
		c++;
		in_node = in_node->next;
	}
	if (c == index && in_node)
	{
		new_node->next = in_node->next;
		in_node->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
