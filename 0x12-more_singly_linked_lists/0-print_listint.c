#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: struct listint_t
 * Return: size_t number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->n == '\0')
			printf("0\n");
		else
			printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
