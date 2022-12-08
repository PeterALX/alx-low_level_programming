
#include "lists.h"

/**
 * add_dnodeint_end - insert a node at the end of dlistint_t list
 * @head: the head node of the list
 * @n: content of the new node
 * Return: address of the inserted node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	new->prev = tmp;
	tmp->next = new;
	return (new);


}
