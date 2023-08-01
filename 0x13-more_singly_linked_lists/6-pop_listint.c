#include "lists.h"

/**
 * pop_listint - function declaration
 *
 * @head: pointer to the list
 * Return: data value
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *node;

	node = *head;
	if (!node)
		return (0);

	data = (*head)->n;
	*head = node->next;
	free(node);
	return (data);
}
