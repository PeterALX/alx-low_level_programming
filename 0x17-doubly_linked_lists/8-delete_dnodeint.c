#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - function deletes node index "index" of list.
 * @h: a double pointer to head of list.
 * @index: Index of node that should be deleted, starts at 0.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *x = NULL;
	unsigned int i = 0;

	if (!h || !(*h))
	{
		return (-1);
	}
	else
	{
		x = *h;
		while (index != i++ && x)
			x = x->next;
		if (!x)
			return (-1);
		if (x->next)
			x->next->prev = x->prev;
		if (index == 0)
			*h = x->next;
		else
			x->prev->next = x->next;
		free(x);
		return (1);
	}
	return (-1);
}
