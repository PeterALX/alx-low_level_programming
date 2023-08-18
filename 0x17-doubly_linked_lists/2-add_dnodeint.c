#include "main.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

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

	new_node->next = *head;
	new_node->prev = NULL;
	new_node->n = n;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
