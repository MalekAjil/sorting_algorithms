#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 *
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *A = NULL, *B = NULL, *cur = *list;

	if (cur == NULL || cur->next == NULL)
		return;
	while (cur)
	{
		A = cur;
		B = cur->next;
		cur = cur->next;
		while (A && A->n > B->n)
		{
			A->next = B->next;
			if(B->next)
				B->next->prev = A;
			B->prev = A->prev;
			B->next = A;
			if (A->prev)
				A->prev->next = B;
			else
				*list = A;
			A->prev = B;
			A = A->prev;
			print_list(*list);
		}
	}
}
