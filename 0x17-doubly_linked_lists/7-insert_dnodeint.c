#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - function inserts new node at given position.
 * @h: a double pointer to head of list.
 * @idx: index of list where new node should be added, starts at 0
 * @n: value of new node.
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *x = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	if (!h || !(*h))
		*h = new_node;
	else
	{
		x = *h;
		while (idx != i++ && x->next)
			x = x->next;
		if (x->next)
			new_node->prev = x->prev;
		else
			new_node->prev = x;
		if (idx == i)
			x->next = new_node, new_node->prev = x;
		else if (idx == i - 1)
		{
			if (x->prev)
				x->prev->next = new_node;
			else
				*h = new_node;
			x->prev = new_node;
			new_node->next = x;
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}
	return (new_node);
}
