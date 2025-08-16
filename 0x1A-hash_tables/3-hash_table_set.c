#include "hash_tables.h"
hash_node_t *create(const char *key, const char *value);

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 0 in failed 1 in succeed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	if (current == NULL)
	{
		hash_node_t *item = create(key, value);
		if (!item)
			return (0);
		ht->array[index] = item;
		return (1);
	}
	else
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		else
		{
			hash_node_t *item = create(key, value);
			if (!item)
				return (0);
			item->next = ht->array[index];
			ht->array[index] = item;
			return (1);
		}
	}
	return (0);

}


/**
 * create - the main function
 *
 * @key: the key
 * @value: the value
 *
 * Return: the node of item
 */
hash_node_t *create(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));
	if (!item)
		return (NULL);
	item->key = strdup(key);
	if (!(item->key))
	{
		free(item);
		return (NULL);
	}
	item->value = strdup(value);
	if (!(item->value))
	{
		free(item->key);
		free(item);
		return (NULL);
	}
	item->next = NULL;

	return (item);
}
