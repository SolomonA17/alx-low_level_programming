#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Function that print out a hash table
 * @ht: Hash_table_t pointer
 * Return: void or NULL
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx, flag = 0;
	hash_node_t *current;

	if (!ht)
		exit(1);

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		current = ht->array[idx];
		while (current)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			flag = 1;
		}
	}
	printf("}");
	printf("\n");
}
