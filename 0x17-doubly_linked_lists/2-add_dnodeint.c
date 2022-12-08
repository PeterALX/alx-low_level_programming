#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of list
 * @head: the head of the list
 * @n: the contents of the node
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
