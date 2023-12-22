#include "hash_tables.h"

/**
 *
 *
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table *hash_table;
	unsigned long int i;

	hash_table = size;
	hash_table->array = malloc(size * sizeof(hash_node_t));
	if (hash_table->array == NULL);
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
