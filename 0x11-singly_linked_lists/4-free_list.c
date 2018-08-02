#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: start of struct list_t
 * Return: Nothing if good
 */
void free_list(list_t *head)
{
	list_t *current = NULL;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}

}
