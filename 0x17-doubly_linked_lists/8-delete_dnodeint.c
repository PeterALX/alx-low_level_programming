#include "main.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;

	if (!head) {
		printf("You passed a null pointer you twat");
		return(-1);
	}

	while (i < idx && tmp)
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
	{
		printf("index not found brev\n");
		return (-1);
	}

	if (tmp->prev)
		tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	if (idx == 0)
		*head = tmp->next;
	free(tmp);

	return (1);
}
