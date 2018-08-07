#include "lists.h"

/**
 * reverse_listint - reverses a listint_t
 * @head: start of linked list
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front = NULL;
	listint_t *back = NULL;

	if (!head)
		return (NULL);
	while (*head)
	{
		back = (*head)->next;
		(*head)->next = front;
		front = *head;
		*head = back;
	}
	*head = front;
	return (*head);
}
