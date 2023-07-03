#include "lists.h"
#include <stddef.h>

size_t print_list(const list_t *h)
{
	const list_t *ph;
	int len = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	printf("-> %d elements\n", len);
	return (len);
}
