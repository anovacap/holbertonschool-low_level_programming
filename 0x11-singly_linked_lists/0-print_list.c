#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: struct list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			printf("[%x] %s\n", h->len, h->str);
			count++;
			break;
		}

		printf("[%x] %s\n", h->len, h->str);
		h = h->next;
		count++;

	}
	return (count);
}
