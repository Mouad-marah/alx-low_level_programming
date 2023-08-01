#include "lists.h"

/**
 * add_nodeint_end - function declaration
 *
 * @head: pointer to the first node
 * @n: int to set in the new node
 *
 * Return: new value
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	ptr = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
	else
		*head = new;

	return (new);
}
