#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - Function add elements to the table
 * @ht: Hash_table_t pointer
 * @key: chr pointer
 * @value: chr pointer
 * Return: 1 success - 0 fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;
	hash_node_t *tmp;

	if (strlen(key) == 0)
		return (0);

	if (!ht || !key || !value)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t *));
	if (!node)
		return (0);

	node->value = strdup(value);
	node->key = strdup(key);
	node->next = NULL;

	if (ht->array[idx] == NULL)
		ht->array[idx] = node;
	else
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		node->next = ht->array[idx];
		ht->array[idx] = node;
	}
	return (1);
}
