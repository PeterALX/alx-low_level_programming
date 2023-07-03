#include "lists.h"

size_t print_list(const list_t *h)
{
	/* const list_t *ph; */
	int len = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		len++;
		h = h->next;
	}
	return (len);
}
