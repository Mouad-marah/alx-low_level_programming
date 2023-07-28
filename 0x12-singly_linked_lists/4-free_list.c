#include "lists.h"
/**
 * free_list -  function that frees a list_t
 * @head: ptr
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
