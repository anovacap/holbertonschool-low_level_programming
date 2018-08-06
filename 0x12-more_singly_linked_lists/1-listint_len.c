#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: struct listint_t
 * Return: size_t number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
