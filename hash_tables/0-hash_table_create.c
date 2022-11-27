#include "hash_tables.h"
/**
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;
	 long unsigned int i = 0;

	hashTable = malloc(sizeof(hash_table_t));
	if (!hashTable)
	{
		return (NULL);
	}
	hashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (!hashTable->array)
	{
		free(hashTable);
		hashTable = NULL;
		return (NULL);
	}
	while (i < size)
	{
		hashTable->array[i] = NULL;
		i++;
	}
	return (hashTable);
}
