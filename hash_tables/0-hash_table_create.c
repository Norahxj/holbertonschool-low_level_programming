#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_tables_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table, or NULL if fails
 */

hash_tables_t *hash_tables_create(unsigned long int size)
{
	hash_tables_t *ht;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_tables_t));
	if (ht == NULL)
		return (NULL);

	ht->§size = size
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
