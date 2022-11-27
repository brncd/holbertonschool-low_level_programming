#include "hash_tables.h"
/**
 * key_index -gives you the index of a key
 * @size: is the size of the array of the hash table
 * Returns: the index at which the key/value pair stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key);
	return (idx % size);
}
