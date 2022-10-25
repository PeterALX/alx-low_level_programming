#include "lists.h"

/**
* list_len - prints elements of a list
* @h: the head node of the list
* Return: the number of nodes in the list
*/
size_t list_len(const list_t *h)
{
	int list_len = 0;
	const list_t *ptr = h;

	while (ptr)
	{

		ptr = ptr->next;
		list_len++;
	}
	return (list_len);
}
