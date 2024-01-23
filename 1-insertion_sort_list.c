#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 *
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *itm = *list;

	if (!itm)
		return;
	while (itm->next)
	{
		itm = itm->next;
		while (itm->prev && itm->n < itm->prev->n)
		{
			tmp = itm->prev;
			itm->prev = tmp->prev;
			tmp->next = itm->next;
			itm->next->prev = tmp;
			itm->prev = tmp->prev;
			if (!itm->prev)
				*list = itm;
			itm->next = tmp;
			tmp->prev = itm;
			print_list(*list);
		}
	}
}
