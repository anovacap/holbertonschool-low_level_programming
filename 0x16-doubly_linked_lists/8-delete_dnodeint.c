#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index of a doub ll.
 * @head: Start of doub ll.
 * @index: Doub ll to be deleted.
 * Return: 1 if success -1 if fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x;
	dlistint_t *mover = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			*head = mover->next;
			(*head)->prev = NULL;
			free(mover);
			return (1);
		}
	}
	for (x = 0; x < index && mover->next; x++)
		mover = mover->next;
	if (mover->next != NULL)
	{
		mover->prev->next = mover->next;
		mover->next->prev = mover->prev;
	}
	if (mover->next == NULL)
		mover->prev = NULL;
	free(mover);
	return (1);
}
