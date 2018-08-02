#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: new struct head
 * @str: string in head
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new;
	list_t *last = *head;

	if (head == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
	}
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (*head);
}
