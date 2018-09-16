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
	/*dlistint_t *over;*/

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		mover = (*head)->next;
		(*head)->next = mover->next;
		if ((*head)->next)
			(*head)->next->prev = NULL;
	}
	for (x = 1; x < index; x++)
		mover = mover->next;
	if (mover->next != NULL)
	{
		mover->prev->next = mover->next;
		mover->next->prev = mover->prev;
	}
	if (mover->next == NULL)/*working to change this block*/
		mover->prev = NULL;
	free(mover);
	return (1);
}
