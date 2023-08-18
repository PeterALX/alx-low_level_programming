#include "lists.h"

void reverse_list_node(dlistint_t **head)
{
	dlistint_t *curr = *head;
	dlistint_t *tmp;

	if (!head)
	{
		printf("you passed a null pointer\n");
		return;
	}
	if (!*head)
	{
		printf("this a empty list \n");
		return;
	}

	while (curr)
	{
		tmp = curr->prev;
		curr->prev = curr->next;
		curr->next = tmp;
		if (!curr->prev)
			*head = curr;

		curr = curr->prev;

	}
}
