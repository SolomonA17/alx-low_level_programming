#ifndef hash_table
#define hash_table

/**
 * The building blocks of our hash table: nodes that hold key-value pairs.
 *
 * @key: The unique identifier for data retrieval, stored as a string.
 * @value: The associated data linked to the key.
 * @next: A pointer to help chain together nodes in case of hash collisions.
 */
typedef struct hash_node_s {
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * The heart of the hash table, responsible for managing key-value associations.
 *
 * @size: Determines the number of buckets available for storing nodes.
 * @array: A dynamic array that acts as the table's backbone.
 *         - Each element points to a linked list of nodes (if any)
 *         - This design implements collision handling using chaining.
 */
typedef struct hash_table_s {
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;


unsigned long int key_index(const unsigned char *key, unsigned long int size);
void hash_table_delete(hash_table_t *ht);
hash_table_t *hash_table_create(unsigned long int size);
char *hash_table_get(const hash_table_t *ht, const char *key);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
void hash_table_print(const hash_table_t *ht);
unsigned long int hash_djb2(const unsigned char *str);

#endif

