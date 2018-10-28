#include "sort.h"

/**
 * insertion_sort_list - insertion sort algo
 * @list: listint_t type
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr = NULL, *wlk = NULL;

	if (!(*list)->next || !(*list))
		return;
	ptr = wlk = (*list)->next;
	while (wlk)
	{
		wlk = wlk->next;
		while (ptr->prev && ptr->n < ptr->prev->n)
		{
			ptr->prev->next = ptr->next;
			if (ptr->next)
				ptr->next->prev = ptr->prev;
			ptr->next = ptr->prev;
			ptr->prev = ptr->next->prev;
			if (ptr->prev)
				ptr->prev->next = ptr;
			else
				*list = ptr;
			ptr->next->prev = ptr;
			print_list(*list);
		}
		ptr = wlk;
	}
}
