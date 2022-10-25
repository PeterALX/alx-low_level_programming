#include "lists.h"

/**
* print_list - prints elements of a list
* @h: the head node of the list
* Return: the number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	int list_len = 0;
	const list_t *ptr = h;

	while (ptr)
	{

		if (ptr->len == 0)
			printf("[%u] %s\n", ptr->len, "(nil)");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		list_len++;
	}
	return (list_len);
}
