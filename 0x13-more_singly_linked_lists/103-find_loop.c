#include "lists.h"

/**
 * find_listint_loop - function declaration
 *
 * @head: points to elements
 *
 * Return: NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s, *f;

	s = head;
	f = head;
	if (!head)
		return (NULL);

	while (f && s && f->next)
	{
		f = f->next->next;
		s = s->next;
		if (f == s)
		{
			s = h;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}

	return (NULL);
}
