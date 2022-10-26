#include "lists.h"

/**
*
*
* Return:
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	int list_len = 0;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		list_len++;
	}
	return (list_len);
}
