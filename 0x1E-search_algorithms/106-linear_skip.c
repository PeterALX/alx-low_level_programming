#include "search_algos.h"

/**
 * linear_skip - function that searches for a value in a sorted skip list
 * of integers
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 * Return: NULL if value is not present in list or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tail = list;

	if (!list)
		return (NULL);

	while (tail->express && value > tail->n)
	{
		list = tail;
		tail = tail->express;
		printf("Value checked at index [%lu] = [%d]\n", tail->index, tail->n);
	}
	if (value > tail->n)
	{
		list = tail;
		while (tail->next)
			tail = tail->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			list->index, tail->index);
	tail = tail->next;
	while (list != tail)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
