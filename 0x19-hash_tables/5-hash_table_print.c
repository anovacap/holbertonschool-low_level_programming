#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash Table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *mover;
	unsigned long int i = 0;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		mover = ht->array[i];
		while (mover != NULL)
		{
			if (flag == 0)
			{
				printf("'%s': '%s'", mover->key, mover->value);
				flag = 1;
			}
			else
				printf(", %s: %s", mover->key, mover->value);
			mover = mover->next;
		}
		i++;
	}
	printf("}\n");
}
