#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;

	if (!head)
	{
		printf("You passed a null pointer you twat");
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		printf("malloc failed");
		return (NULL);
	}
	
	if (!*head)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	new_node->next = NULL;
	new_node->prev = tmp;
	new_node->n = n;
	return (new_node);
}
