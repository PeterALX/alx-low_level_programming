#include "lists.h"

/**
* free_list - frees the linked list memory
* @head: the head node of the list
* Return: void
*/
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;
	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
	free(head);
}
