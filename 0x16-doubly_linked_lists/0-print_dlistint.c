#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: one of the nodes of the double linked list.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *mover = (dlistint_t *)h;
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		*mover = *h;
		h = h->next;
		i++;
	}
	return (i);
}
