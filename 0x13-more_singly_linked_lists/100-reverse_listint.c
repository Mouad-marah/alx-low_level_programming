#include "lists.h"

/**
 * reverse_listint - function declaration
 *
 * @head: pointer to the list
 *
 * Return: head SUCCESS
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pr_node, *next_node;

	if (!head)
		return (NULL);

	pr_node = NULL;
	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = pr_node;
		pr_node = *head;
		*head = next_node;
	}
	*head = pr_node;
	return (*head);
}
