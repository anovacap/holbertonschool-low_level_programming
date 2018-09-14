#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t list.
 * @head: start of doub ll.
 * Return: Nothing if success.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *mover = NULL;

	while ((mover = head) != NULL)
	{
		head = head->next;
		free(mover);
	}
}
