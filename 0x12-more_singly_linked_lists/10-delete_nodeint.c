#include "lists.h"

/**
 * delete_nodeint_at_index - eletes the node at index index of a listint_t
 * @head: start of linked list
 * @index: index to be deleted
 * Return: 1 if success or -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *mover = *head;
	listint_t *over;

	if (*head)
	{
		if (index == 0)
		{
			*head = mover->next;
			free(mover);
			return (1);
		}
		for (x = 0; mover != NULL && x < index - 1; x++)
			mover = mover->next;
		if (mover == NULL || mover->next == NULL)
			return (1);
		over = mover->next->next;
		free(mover->next);
		mover->next = over;
	}
	return (-1);
}
