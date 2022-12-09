
#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a node into the list at a particular index
 * @h: pointer to the head of the list
 * @idx: the index where the new node is to be inserted
 * @n: the data to be stored in the inserted node
 * Return: NULL if insertion fail, address of the inserted node if success
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp;
	dlistint_t *new;

	tmp = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (i < idx - 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			return (NULL);
		}
		i++;
	}

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next = new;
	if (new->next)
		new->next->prev = new;
	return (new);
}
