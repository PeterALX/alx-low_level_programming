#include "lists.h"

/**
* delete_nodeint_at_index - delete a node at an index
* @head: the head node of the list
* @index: the index of the node to be deleted
* Return: 1 if success, -1 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *temp;

	if (!*head)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	i = 0;
	while (i < index - 1)
	{
		if (!ptr)
			return (-1);
		ptr = ptr->next;
		i++;
	}
	temp = ptr->next;
	ptr->next = ptr->next->next;
	free(temp);
	return (1);
}
