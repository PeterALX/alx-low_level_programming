#include "lists.h"

/**
* pop_listint - delete the head node of a listint_t linked list and return the head node's data
* @head: the head node of the list
* Return: the head node's data, 0 if list is empty
*/
int pop_listint(listint_t **head)
{
	int contents;
	listint_t *ptr;
	if (!*head)
		return (0);

	ptr = *head;
	contents = ptr->n;
	*head = (*head)->next;
	free(ptr);
	return (contents);
}
