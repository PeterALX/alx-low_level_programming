
#include "hash_tables.h"

/**
 * key_index - returns the index of a key when hash table is of size @size
 * @size: size of hash_table
 * @key: the key(string)
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) % size;

	return (idx);
}
