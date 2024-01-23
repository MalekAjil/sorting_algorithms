#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 *
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *new = NULL, *itm = NULL, *cur = *list;

	if (cur == NULL || cur->next == NULL)
		return;
	while (cur)
	{
		itm = cur;
		cur = cur->next;
		if (new == NULL || itm->n < new->n)
		{
			itm->next = new;
			new = itm;
		}
		else
		{
			listint_t *p = new;

			while (p != NULL)
			{
				if (p->next == NULL || itm->n < p->next->n)
				{
					itm->next = p->next;
					p->next = itm;
					print_list(new);
					break;
				}
				p = p->next;
			}
		}
	}
	*list = new;
}
