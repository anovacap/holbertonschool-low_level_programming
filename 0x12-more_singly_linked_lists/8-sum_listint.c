#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: start of linked list
 * Return: sum of n's
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *mover;

	if (head)
		mover = head;
		while (mover->next != NULL)
		{
			sum += mover->n;
			mover = mover->next;
		}
	sum += mover->n;
	return (sum);
}
