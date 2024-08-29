#include "lists.h"

/**
 * get_dnodeint_at_index - function returns nth node of doubly linked list.
 * @head: a pointer to head of list.
 * @index: index of the node, starting from 0
 * Return: nth node or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i++ == index)
			break;
		head = head->next;
	}
	return (head);
}
