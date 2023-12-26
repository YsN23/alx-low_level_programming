#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: Hash Table Size
 * Return: a Pointer To Hash_Table_t
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;

	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(hash_table_t *));

	if (hash_table->array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		hash_table->array[i] = NULL;

		i++;
	}


	return (hash_table);
}
