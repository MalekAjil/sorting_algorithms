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

	while (itm->next)
	{
		itm = itm->next;
		while (itm->prev && itm->n < itm->prev->n)
		{
			tmp = itm->prev;
			itm->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = itm;
			else
				*list = tmp;
			tmp->next = itm->next;
			itm->next = tmp;
			print_list(*list);
		}
	}
}
