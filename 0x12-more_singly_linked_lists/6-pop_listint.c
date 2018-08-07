#include "lists.h"
/**
 * pop_listint - deletes head node of listint_t returns data
 * @head: start of linked list
 * Return: integer (n) of struct
 */
int pop_listint(listint_t **head)
{
	listint_t *new = NULL;
	int x = (*head)->n;

	new = *head;
	if (!head || !(*head))
		return (0);
	*head = (*head)->next;
	free(new);
	return (x);
}
