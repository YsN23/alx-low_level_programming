#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: Hash Table Size
 * Return: a Pointer To Hash_Table_t
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(size));

	if (hash_table == NULL)
	{
		return (NULL);
	}

	return (hash_table);
}
