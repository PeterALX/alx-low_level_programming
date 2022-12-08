
#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: the head of the list
 * Return: Number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node;
	size_t count = 0;

	node = h;
	while (node)
	{
		node = node->next;
		count++;
	}
	return (count);
}
