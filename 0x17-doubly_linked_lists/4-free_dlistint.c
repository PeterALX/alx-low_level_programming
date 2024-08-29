#include "lists.h"

/**
 * free_dlistint -function that frees a doubly linked list
 * @head: a pointer to head of list.
 * Return: Nothing
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
