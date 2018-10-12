#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash Table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *mover;
	unsigned long int i = 0;

	if (!ht)
		return;
	while (i < ht->size)
	{
		mover = ht->array[i];
		while ((mover = ht->array[i]) != NULL)
		{
			ht->array[i] = ht->array[i]->next;
			free(mover->key);
			free(mover->value);
			free(mover);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
