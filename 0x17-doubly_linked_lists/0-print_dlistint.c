#include "main.h"

size_t print_dlistint(const dlistint_t *h) 
{
	int length = 0;
	if (!h) {
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}
	printf("-> %d elements\n", length);
	return (length);
}
