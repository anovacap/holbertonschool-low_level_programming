#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table to update key/val to
 * @key: Key to find value
 * @value: Value associated with key
 * Return: 1 if success 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *mover;
	unsigned long int index;

	if (!ht)
		return (0);
	if (!key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	mover = ht->array[index];
	while (mover != NULL)
	{
		if (strcmp(mover->key, key))
		{
			free(mover->value);
			mover->value = strdup(value);
			if (mover->value == NULL)
				return (0);
		}
		mover = mover->next;
	}
	if (add_node(&(ht->array[index]), key, value) == NULL)
		return (0);
	return (1);

}
/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: new struct head
 * @key: string in head
 * @value: value supplied by user
 * Return: address of new element or NULL
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (key == NULL)
	{
		new->key = NULL;
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = *head;
	*head = new;
	return (*head);
}
