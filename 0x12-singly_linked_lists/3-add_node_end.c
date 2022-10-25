#include "lists.h"

/**
 * add_node_end - adds a node to the end of the linked list 
 * @head: the head node of the list
 * @str: the contents of the new node
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int str_len;
	list_t *ptr; 
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->next = NULL;

	str_len = 0;
	while (str[str_len])
		str_len++;

	new_node->len = str_len;
	new_node->str = strdup(str);

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
