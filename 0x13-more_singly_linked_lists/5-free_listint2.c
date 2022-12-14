#include "lists.h"

/**
 * free_listint2 - frees the linked list memory
 * @head: the head node of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
		return;
	ptr = *head;
	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	free(*head);
	*head = NULL;
}
