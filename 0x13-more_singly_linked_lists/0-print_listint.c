#include "lists.h"

/**
 * print_listint - print the elements of a listint_t list
 * @h: the head node of the list to be printed
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int list_len = 0;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		list_len++;
	}
	return (list_len);
}
