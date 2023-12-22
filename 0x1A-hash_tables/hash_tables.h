#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * Represents a node within the hash table.
 *
 * @key: The unique identifier for data retrieval, stored as a string.
 * @value: The associated data linked to the key.
 * @next: A pointer to the next node in the collision chain (if applicable).
 */
typedef struct hash_node_s
{
	 char *key;
	 char *value;
	 struct hash_node_s *next;
} hash_node_t;

/**
 * The heart of the hash table, responsible for managing key-value associations.
 *
 * @size: Determines the number of buckets available for storing nodes.
 * @array: A dynamic array that acts as the table's backbone.
 *         - Each element points to a linked list of nodes (if any),
 *           implementing collision handling using chaining.
 */
typedef struct hash_table_s
{
	 unsigned long int size;
	 hash_node_t **array;
} hash_table_t;

/*functions*/
void hash_table_print(const hash_table_t *ht);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_delete(hash_table_t *ht);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
unsigned long int hash_djb2(const unsigned char *str);
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/**
 * A node within the sorted hash table, holding a key-value pair and maintaining sorted order.
 *
 * @key:   The unique key for retrieval, stored as a string.
 * @value: The data associated with the key.
 * @next:  Pointer to the next node in the collision chain (if applicable).
 * @sprev: Pointer to the previous node in the sorted list.
 * @snext: Pointer to the next node in the sorted list.
 */

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * The central structure of the sorted hash table, orchestrating key-value storage and sorted order.
 *
 * @size:     Determines the number of buckets available for storing nodes.
 * @array:    A dynamic array of pointers to nodes, forming the table's foundation.
 *            - Each element points to the head of a collision chain (if any),
 *              implementing collision handling using chaining.
 * @shead:    Pointer to the first node in the sorted linked list, maintaining order.
 * @stail:    Pointer to the last node in the sorted linked list, enabling efficient traversal.
 */

typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
void shash_table_print(const shash_table_t *ht);
char *shash_table_get(const shash_table_t *ht, const char *key);
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
#endif /*_HASH_TABLES_H_*/

