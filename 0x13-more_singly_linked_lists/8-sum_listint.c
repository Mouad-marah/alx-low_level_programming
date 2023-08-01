#include "lists.h"

/**
 * sum_listint - function declaration
 *
 * @head: pointer to the list
 *
 * Return: sum of all data in the list, 0 if the lost is empty
*/
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum;

	sum = 0;
	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
