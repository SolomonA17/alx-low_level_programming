#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * Conjures a brand new hash table with the specified capacity.
 *
 * @param size: The desired number of buckets in the table (can't be zero!).
 * @return: A pointer to the freshly crafted hash table, or null on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tb;

	if (size == 0)
	{
		return (NULL);
	}

	hash_tb = malloc(sizeof(hash_table_t));
	if (!hash_tb)
	{
		return (NULL);
	}
	hash_tb->size = size;
	hash_tb->array = calloc(size, sizeof(hash_node_t *));
	if (!hash_tb->array)
	{
		return (NULL);
	}
	return (hash_tb);
}
