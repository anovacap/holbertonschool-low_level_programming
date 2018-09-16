#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Start of doub ll.
 * @idx: Index of the list where new_dl is added, starting at 0.
 * @n: Integer stored in new_dl.
 * Return: Address of new_dl or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x;
	dlistint_t *new_dl;
	dlistint_t *mover = *h;

	if (!*h)
		return (NULL);
	new_dl = malloc(sizeof(dlistint_t));
	new_dl->n = n;
	if (new_dl == NULL)
		return (NULL);
	if (!idx)
	{
		new_dl->next = *h;
		*h = new_dl;
		return (new_dl);
	}
	for (x = 1; x < idx; x++)
	{
		mover = mover->next;
		if (mover == NULL)
			return (NULL);
	}
	new_dl->next = mover->next;/*ndl-next gets same addr as mover-next*/
	new_dl->prev = mover;/*ndl-prev = mover which is the addr of current*/
	if (new_dl->next != NULL)
		new_dl->next->prev = new_dl;
	mover->next = new_dl;
	return (new_dl);
}
