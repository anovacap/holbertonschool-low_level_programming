#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: start of linked list
 * @index:  index of the node, starting at 0
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *mover;

	if (head == NULL)
		return (NULL);
	mover = head;
	for (x = 0; x <= index; x++)
		mover = mover->next;
	return (mover);
}
