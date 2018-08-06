#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: new struct head
 * @n: int in head
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (n == 0)
	{
		new->n = 0;
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
