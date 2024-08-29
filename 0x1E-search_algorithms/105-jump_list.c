#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that searches for a value in a sorted list
 * of integers using the Jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: NULL if value is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump_step = sqrt(size), i;
	listint_t *n = list, *prev;

	if (!list)
		return (NULL);

	while (n->n < value && n->next)
	{
		prev = n;
		for (i = 0; n->next && i < jump_step; i++)
			n = n->next;
		printf("Value checked at index [%d] = [%d]\n", (int)n->index, n->n);
	}

	printf("Value found between indexes [%d] and [%d]\n", (int)prev->index,
			(int)n->index);

	for (; prev && prev->n <= value; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index,
				prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
