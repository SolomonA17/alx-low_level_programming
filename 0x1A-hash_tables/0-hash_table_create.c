#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - Make a hash table
 * @size: integer
 * Return: Pointer to the hash table or NULL on error
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
