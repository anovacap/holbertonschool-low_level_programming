#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash Table
 * @key: Key to be retrieved
 * Return: Value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *mover;
	unsigned long int index;

	if (!ht)
		return (NULL);
	if (!key)
		return (NULL);
	if (!*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	mover = ht->array[index];
	while (mover != NULL)
	{
		if (strcmp(mover->key, key) == 0)
		{
			return (mover->value);
		}
		mover = mover->next;
	}
	return (NULL);
}
