#include "lists.h"

/**
 * listint_len - return the number of elements in a listint_t linked list
 * @h: the head node of the list to be printed
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	int list_len = 0;

	while (ptr)
	{
		ptr = ptr->next;
		list_len++;
	}
	return (list_len);
}
