#include "hash_tables.h"

/**
 * hash_table_get - the main function
 *
 * @ht: the first parameter
 * @key: the second parameter
 *
 * Return: the value of the key if already exist or null if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *item = ht->array[index];

	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
	}
	return (NULL);
}
