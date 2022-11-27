#include "hash_tables.h"
/**
 * hash_table_create -  creates a hash table
 * @size: size
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;
	unsigned long int i = 0;

	hashTable = malloc(sizeof(hash_table_t));
	if (!hashTable)
	{
		return (NULL);
	}
	hashTable->array = malloc(sizeof(hash_table_t *) * size);
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
	hashTable->size = size;
	return (hashTable);
}
