#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of the linked list
 * @head: the head node of the list
 * @n: the contents of the new node
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->next = NULL;

	new_node->n = n;

	if (*head == NULL)
		*head = new_node;
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;

		ptr->next = new_node;

	}
	return (new_node);
}
