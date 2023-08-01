#include "lists.h"

/**
 * free_listint2 - function declaration
 *
 * @head: pointer to the list
*/
void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	if (!head)
		return;

	current_node = *head;
	next_node = (*head)->next;
	while (next_node)
	{
		free(current_node);
		current_node = next_node;
		next_node = next_node->next;
	}
	free(current_node);
	*head = NULL;
}
