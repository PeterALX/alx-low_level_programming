#include "hash_tables.h"

/**
 * hash_table_create - creates a hash_table
 * @size: the size of the hash table
 * Return: pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **array;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);
	array = malloc(sizeof(hash_node_t*) * size);
	if (!array)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	new_table->array = array;
	i = 0;
	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}

	return (new_table);
}
