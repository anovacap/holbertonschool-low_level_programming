#include "lists.h"
/**
 * pop_listint - deletes head node of listint_t returns data
 * @head: start of linked list
 * Return: integer (n) of struct
 */
int pop_listint(listint_t **head)
{
	listint_t *new = NULL;
	int x;

	if (!head || !(*head))
		return (0);
	new = *head;
	*head = (*head)->next;
	x = (*head)->n;
	free(new);
	return (x);
}
