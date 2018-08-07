#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: start of linked list
 * @idx: index where new node should be added
 * @n: data for linked list
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *mover;

	if (!head || !(*head))
		return (NULL);
	if (*head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		if (!idx)
			new->next = *head;
		mover = *head;
		new->n = n;
		for (x = 0; x < idx - 1; x++)
		{
			if (mover == NULL)
				return (NULL);
			mover = mover->next;
		}
		new->next = mover->next;
		mover->next = new;
	}
	return (new);
}
