#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: char pointer
 * @size: int
 * Return: a pointer to the hash table or null on error
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size == 0)
	{
		return (0);
	}
	return (hash_djb2(key) % size);
}
