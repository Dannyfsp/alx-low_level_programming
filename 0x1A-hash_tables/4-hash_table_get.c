#include "hash_tables.h"

/**
 * hash_table_get - Entry point
 * function that retrieves a value associated with a key
 * @ht: A pointer to the hash table
 * @key: The key to get the value of
 *
 * Return: If the key cannot be matched - NULL
 *         Otherwise - the value associated with key in ht
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}
	return (NULL);
}
