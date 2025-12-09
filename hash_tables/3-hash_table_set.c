#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key (cannot be empty)
 * @value: The value associated with the key (will be duplicated)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *current;
	char *value_copy;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(value_copy);
		return (0);
	}
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		free(value_copy);
		return (0);
	}
	node->value = value_copy;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
