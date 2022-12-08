
#include "lists.h"
#include <stddef.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head of the list
 * Return: Number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t count = 0;

	node = h;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}
	return (count);
}
