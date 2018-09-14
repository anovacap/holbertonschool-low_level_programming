#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Start of doubly linked list.
 * @n: Int value stored.
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_dl;

	if (head == NULL)
		return (NULL);
	new_dl = malloc(sizeof(dlistint_t));
	if (new_dl == NULL)
		return (NULL);
	new_dl->n = n;
	new_dl->next = (*head);
	new_dl->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new_dl;
	(*head) = new_dl;
	return (new_dl);
	free(new_dl);
}
