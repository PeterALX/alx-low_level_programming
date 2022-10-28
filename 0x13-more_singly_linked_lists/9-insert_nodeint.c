#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: the head node of the list
 * @idx: index where a new node id to be inserted
 * @n: the contents of the new node
 * Return: a pointer to the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	unsigned int i;
	listint_t *new_node;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (!new_node)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	i = 0;
	ptr = *head;
	while (i < idx - 1)
	{
		if (!ptr)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->next = ptr->next;
	new_node->n = n;
	ptr->next = new_node;
	return (new_node);
}
