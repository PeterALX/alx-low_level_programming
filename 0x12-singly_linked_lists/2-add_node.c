#include "lists.h"

/**
* add_node - add node at the beginning of a list_t list
* @head - the head node of the list
* @str: the contents of the node added
* Return: address to the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	int str_len;
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	
	str_len = 0;
	while (str[str_len])
		str_len++;

	new_node->len = str_len;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
