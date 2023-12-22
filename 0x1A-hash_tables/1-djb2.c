#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * Generates a hash value for a given string using the djb2 algorithm.
 *
 * @param str: The string to be hashed, represented as an unsigned character array.
 * @return: An unsigned long integer representing the calculated hash value.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
