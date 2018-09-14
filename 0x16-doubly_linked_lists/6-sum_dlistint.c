#include "lists.h"

/**
 * sum_dlistint - Sum of all the data (n) of a dlistint_t linked list.
 * @head: Start of the doub ll.
 * Return: Sum of all integers in doub lls.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *mover;

	if (head)
	{
		mover = head;
		while (mover->next != NULL)
		{
			sum += mover->n;
			mover = mover->next;
		}
	}
	else
		return (0);
	sum += mover->n;
	return (sum);
}
