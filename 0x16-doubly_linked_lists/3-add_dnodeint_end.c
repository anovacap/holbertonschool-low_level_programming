#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Start of doub ll.
 * @n: Int stored in new_dl.
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_dl;
	dlistint_t *mover = *head;

	if (head == NULL)
		return (NULL);
	new_dl = malloc(sizeof(dlistint_t));
	if (new_dl == NULL)
		return (NULL);
	new_dl->n = n;
	new_dl->next = NULL;
	if (*head == NULL)
	{
		new_dl->prev = NULL;
		*head = new_dl;
		return (new_dl);
	}
	while (mover->next != NULL)
		mover = mover->next;
	mover->next = new_dl;
	new_dl->prev = mover;
	return (new_dl);
}
