#include "lists.h"

/**
 * free_listint - frees the linked list memory
 * @head: the head node of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	free(head);
}
