#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key
 * @key: The key given by user
 * @size: The size of array of hash_table_t
 * Return: The index where the key value is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash % size);
}
