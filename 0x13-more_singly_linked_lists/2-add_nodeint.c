#include "lists.h"

/**
 * add_nodeint - function declaration
 *
 * @head: pointer arg to the first node
 * @n:argment
 *
 * Return: node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
