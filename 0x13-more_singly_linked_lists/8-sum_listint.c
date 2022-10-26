#include "lists.h"

/**
 * sum_listint - return the number of elements in a listint_t linked list
 * @head: the head node of the list to be printed
 * Return: the number of nodes in the list
 */
int sum_listint(listint_t *head)
{
	const listint_t *ptr;
	int list_len = 0;
	int sum;

	if (!head)
		return (0);

	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
		list_len++;
	}
	return (sum);
}
