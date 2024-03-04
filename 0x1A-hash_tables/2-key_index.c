#include "hash_tables.h"
/**
 * key_index - returns an index in hash table for key
 * @key: the key
 * @size: size of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
