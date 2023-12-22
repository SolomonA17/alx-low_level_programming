#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - free the hash table.
 * @ht: hash_table_t pointer
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *current;

	if (!ht)
		exit(1);

	for (idx = 0; idx < ht->size; idx++)
	{
		current = ht->array[idx];
		while (ht->array[idx])
		{
			current = ht->array[idx];
			ht->array[idx] = ht->array[idx]->next;
			free(current->key);
			free(current->value);
			free(current);
		}
	}
	free(ht);
}
