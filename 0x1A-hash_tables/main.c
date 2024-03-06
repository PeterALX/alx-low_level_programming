#include "hash_tables.h"

/**
 * main - does deez tests
 * Return: 0
 */
int main()
{
	hash_table_t *table = hash_table_create(100);

	hash_table_print(table);
	hash_table_set(table, "foo", "bar");
	hash_table_print(table);
	hash_table_set(table, "foo", "baz");
	hash_table_set(table, "deez", "nuts");
	hash_table_print(table);

	return (0);
}
