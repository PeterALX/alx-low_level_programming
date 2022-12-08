#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head of list.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *x;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
