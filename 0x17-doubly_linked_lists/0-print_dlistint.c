#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function prints all elements of a doubly linked list.
 * @h: a pointer to the head of list.
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t Nodes = 0;
	const dlistint_t *curr;

	curr = h;
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		Nodes++;
	}
	return (Nodes);
}
