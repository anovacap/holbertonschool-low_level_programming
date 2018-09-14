#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Start of doubly linked list.
 * Return: Number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *mover = (dlistint_t *)h;
	size_t i = 0;

	while (h != NULL)
	{
		*mover = *h;
		h = h->next;
		i++;
	}
	return (i);
}
