#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp = *head;
	dlistint_t *new_node;

	if (!head)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
		{
			return (NULL);
		}
		new_node->next = *head;
		new_node->prev = NULL;
		new_node->n = n;
		*head = new_node;
		if (*head)
			(*head)->prev = new_node;
		return (new_node);
	}
	i = 1;
	while (i < idx && tmp)
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node ->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next = new_node;

	if (new_node->next)
		new_node->next->prev = new_node;
	return (new_node);
}
