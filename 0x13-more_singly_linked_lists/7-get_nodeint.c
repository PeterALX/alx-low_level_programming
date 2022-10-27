#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a list
* @head: the head node of the list
* @index: the index of the node to be loacated
* Return: pointer to the node, null if no found
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (!head)
		return (NULL);
	ptr = head;
	i = 0;
	while (i < index)
	{
		ptr = ptr->next;
		if (!ptr)
			return (NULL);
		i++;
	}
	return (ptr);
}

