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
    hash_node_t *current, *next;  

    if (!ht) {
        return;  // Handle NULL input gracefully instead of exiting
    }

    for (idx = 0; idx < ht->size; idx++) {
        current = ht->array[idx];
        while (current) {
            next = current->next;  
            free(current->key);
            free(current->value);
            free(current);
            current = next;  
        }
        free(ht->array[idx]);  
    }
    free(ht->array);  
    free(ht);         
}

