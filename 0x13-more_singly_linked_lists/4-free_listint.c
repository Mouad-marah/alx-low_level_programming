#include "lists.h"

/**
 * free_listint - function declaration
 *
 * @head: pointer to the list
 **/
void free_listint(listint_t *head)
{
	listint_t *current_node;
	listint_t *next_node;

	if (head)
	{
		current_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(current_node);
			current_node = next_node;
			next_node = next_node->next;
		}
		free(current_node);
	}
}
