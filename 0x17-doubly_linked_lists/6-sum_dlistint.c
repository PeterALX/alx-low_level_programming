#include "lists.h"

/**
 * sum_dlistint - returns sum of data of list.
 * @head: a pointer to head of list.
 * Return: sum of data in list or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
