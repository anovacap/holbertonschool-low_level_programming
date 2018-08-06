#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: start of struct list_t
 * Return: Nothing if good
 */
void free_listint(listint_t *head)
{
	listint_t *current = NULL;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}

}
